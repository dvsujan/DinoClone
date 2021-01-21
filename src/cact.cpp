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
    std::cout<< randint<< std::endl;  
    float radn = (float)randint; 
    return radn ;
}

void cact::show(){ 
    float sizee_x = randx(30,50); 
    sf::RectangleShape shap; 
    shap.setPosition(position);
    shap.setFillColor(sf::Color::Red);
    sf::Vector2f sizee(sizee_x, sizeeX );    
    shap.setOrigin(sizee_x/2,sizeeX); 
    shap.setSize(sizee);
    position.x-=vel ;  
    window->draw(shap);  
}