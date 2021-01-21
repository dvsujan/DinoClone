#include "headers.h"
#include"player.hpp"
#include<iostream> 
Player::Player(sf::Vector2f position , sf::Vector2f sizee , sf::RenderWindow *w ){ 
    this-> position = position ; 
    this-> sizee = sizee; 
    this-> window = w; 
};

void Player::show(){ 
    sf::RectangleShape shap; 
    shap.setPosition(position);
    shap.setFillColor(sf::Color::Green);
    sf::Vector2 orig(sizee.x/2, sizee.y); 
    shap.setOrigin(orig); 
    shap.setSize(sizee);
    position.y+=gravity ; 
    if(position.y>=screen_height){ 
        position.y = screen_height ; 
    } 
    if(position.y<=sizee.y){ 
        position.y=sizee.y ;
    } 
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){
        position.y-=force;
    }
    window->draw(shap); 
}