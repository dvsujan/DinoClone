#include"headers.h" 

class Player{ 
public: 
    sf::Vector2f position ; 
    sf::Vector2f sizee; 
    Player(sf::Vector2f position , sf::Vector2f sizee , sf::RenderWindow *w); 
    // void move(sf::RenderWindow *w); 
    void show();  
    sf::RenderWindow *window ; 
private : 
    float force = gravity+0.4; 
    float gravity = 0.08; 

}; 