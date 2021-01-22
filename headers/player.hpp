#include"headers.h" 

class Player{ 
public: 
    sf::Vector2f position ; 
    sf::Vector2f sizee; 
    Player(sf::Vector2f position , sf::Vector2f sizee , sf::RenderWindow *w); 
    // void move(sf::RenderWindow *w); 
    void show(); 
    void jump(); 
    void move();  
    sf::RenderWindow *window ; 
    sf::RectangleShape shap ;  
    void set_vel(float vel); 
private : 
    // float force = gravity+1; 
    float gravity = 1.4;
    float vel  = 0 ;  

}; 