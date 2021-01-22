#include"headers.h" 

class cact{ 
public: 
    sf::Vector2f position ; 
    float sizeeX;  
    cact(sf::Vector2f position , float sizeeX , sf::RenderWindow *w); 
    void show();  
    sf::RenderWindow *window ;
    sf::RectangleShape shap ; 
private : 
    float vel = 7; 
}; 