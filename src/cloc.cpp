#include<iostream> 
#include"cloc.hpp" 
#include"headers.h"
#include<chrono>
#include<string> 

fpsc::fpsc(sf::RenderWindow *w){ 
    this-> window = w; 
}

float fps; 
std::chrono::high_resolution_clock::time_point start;
std::chrono::high_resolution_clock::time_point end;

void fpsc::show_fps(){ 
    start = std::chrono::high_resolution_clock::now();
    end = std::chrono::high_resolution_clock::now();
    // fps = (float)1e9/(float)std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count());
    // std::cout<< fps<< std::endl ;  
    sf::Text text ; 
    text.setString("FPS: ");
    text.setFillColor(sf::Color::Black);
    text.setPosition(50,50); 
    text.setCharacterSize(24);
    text.setStyle(sf::Text::Bold); 
     
    window->draw(text); 
}
