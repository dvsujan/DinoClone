#include "headers.h"
#include"cact.hpp"
#include<iostream> 

cact::cact(sf::Vector2f position , float sizeeX, sf::RenderWindow *w ){ 
    this-> position = position ; 
    this-> sizeeX = sizeeX ;  
    this-> window = w; 
};
float randx(int max , int min){ 
    int randint = rand()%(max-min+1)+min;
    float radn = (float)randint; 
    return radn ;
}

float sizee_x = randx(30,50); 

void cact::show(){ 
    shap.setPosition(position);
    sf::Texture cact ; 
    cact.loadFromFile("../textures/tree.png");
    shap.setTexture(&cact); 
    sf::Vector2f sizee(sizee_x, sizeeX );    
    shap.setOrigin(sizee_x/2,sizeeX); 
    shap.setSize(sizee);
    position.x-=vel ; 
    // //------------------------------ 
    // sf::RectangleShape shapp; 
    // shapp.setPosition(position.x/2,position.y);
    // shapp.setSize(sizee);
    // shapp.setFillColor(sf::Color::Red);
    // shapp.setOrigin(sizee_x/2,sizeeX);  
    // bool a = shap.getGlobalBounds().intersects(shapp.getGlobalBounds()) ;
    // std::cout<< a << std::endl ;  
    // window->draw(shapp);  
    window->draw(shap); 
}