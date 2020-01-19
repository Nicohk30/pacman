#include <SFML/Graphics.hpp>

#ifndef BOUTON_H_INCLUDED
#define BOUTON_H_INCLUDED

using namespace std;

//portion = rectangle

//Classe qui permet de cr�er chaque bouton
class Bouton{

/**
* \const sf::IntRect _portion;
* \brief Definit la zone de la texture � appliqu� � un sprite bouton
*/
    sf::IntRect _portion;

/**
* \const sf::Sprite _spriteBouton;
* \brief Un bouton est un sprite
*/
    sf::Sprite _spriteBouton;

public:

/**
* \const Bouton(int xPos, int yPos, int xTex, int yTex, int horizontal, int vertical, sf::Texture& t);
* \brief Contructeur d'un bouton
*
* xPos : Position horizontale du bouton sur l'ecran
* yPos : Position verticale du bouton sur l'ecran
* xTex : Position horizontale de la portion de la TEXTURE
* yTex : Position verticale de la portion de la TEXTURE
* horizontal : largeur de la portion de la TEXTURE
* vertical : hauteur de la portion de la TEXTURE
* t : texture qui doit d'abord etre initialis� dans le main
*/
    Bouton(int xPos, int yPos, int xTex, int yTex, int horizontal, int vertical, sf::Texture& t);

/**
* \const void changeBoutonActif();
* \brief Permet de changer la texture d'un bouton a sa version fonc�e
*/
    void changeBoutonActif();

/**
* \const void changeBoutonPassif();
* \brief Permet de changer la texture d'un bouton a sa version clair
*/
    void changeBoutonPassif();

/**
* \const sf::Sprite getSprite();
* \brief Getter du sprite d'un objet Menu (pour afficher dans le main)
*/
    sf::Sprite getSprite();

};
#endif // BOUTON_H_INCLUDED
