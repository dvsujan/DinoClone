#include<iostream> 
#include<headers.h>
#include"dscreen.hpp"

// Dscreen::Dscreen(sf::RenderWindow *w){ 
//     this->swindow = w ; 

// }

void Dscreen::show(){ 
    dwinodw = new sf::RenderWindow(sf::VideoMode(screen_width,screen_height), "hello");  
    sf::Font font ; 
    font.loadFromFile("../fonts/PottaOne-Regular.ttf");
    sf::Text text; 
    text.setFont(font); 
    text.setString("You Have died To Continue Press SPACE"); 
    text.setPosition(screen_width/2, screen_height/2);
    text.setCharacterSize(20);
    text.setFillColor(sf::Color::Black);   
    dwinodw->clear(sf::Color::White);  
    dwinodw->draw(text);
    dwinodw->display(); 
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){ 
        // dwinodw.close(); 
    }
}
 