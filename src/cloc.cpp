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

void fpsc::show_fps(int csore){ 
    start = std::chrono::high_resolution_clock::now();
    end = std::chrono::high_resolution_clock::now();
    // fps = (long double)1e9/(long double)std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count();
    sf::Font font ; 
    // std::cout<< fps<< std::endl ;  
    if(!font.loadFromFile("../fonts/ARIAL.TTF")){ 
        window->close();
        std::cout<<"Font Not loaded " << std::endl ; 
    }
    sf::Text text ;
    text.setFont(font);  
    text.setString("SCORE:"+std::to_string(csore));
    text.setFillColor(sf::Color::Black);
    text.setPosition(screen_width-100,0); 
    text.setCharacterSize(10);
    text.setStyle(sf::Text::Bold); 
     
    window->draw(text); 
}
