#include "headers.h"
#include"player.hpp"
#include<iostream> 
Player::Player(sf::Vector2f position , sf::Vector2f sizee , sf::RenderWindow *w ){ 
    this-> position = position ; 
    this-> sizee = sizee; 
    this-> window = w; 
};

void Player::move(){ 
    position.y += vel ; 
    vel+=gravity ;
    if(position.y>=screen_height){ 
        position.y = screen_height ; 
    } 
     if(position.y<=sizee.y){ 
        position.y=sizee.y ;
    }
}

void Player::jump(){ 
    vel = -20; 
}

void Player::set_vel(float vel){ 
    this->vel = vel ; 
}

void Player::show(){ 
    shap.setPosition(position);
    sf::Texture dino;
    dino.loadFromFile("../textures/dino-2.png"); 
    shap.setTexture(&dino);  
    sf::Vector2 orig(sizee.x/2, sizee.y); 
    shap.setOrigin(orig); 
    shap.setSize(sizee);
    move();  
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)&& position.y>=screen_height){
        jump(); 
    }
    
    window->draw(shap); 
}

