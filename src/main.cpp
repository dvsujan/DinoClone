#include"headers.h"
#include"player.hpp"
#include"cact.hpp"
#include"cloc.hpp" 
#include<string>
#include<iostream>  
#include<vector> 


template<typename T>
void pop_front(std::vector<T> &v)
{
    if (v.size() > 0) {
        v.front() = std::move(v.back());
        v.pop_back();
    }
}

int main() 
{
	sf::RenderWindow window(sf::VideoMode(screen_width, screen_height), "Chrome Dino Clone");
	window.setFramerateLimit(144); 
	fpsc fps(&window) ; 
	sf::Clock deltatime ; 
	sf::Vector2f posi(50,screen_height/2); 
	sf::Vector2f sizes(50,50);
	Player player(posi, sizes, &window);
	sf::Vector2f po((float)screen_width, (float)screen_height);  
	cact c(po, 60.0, &window); 
	int frame_cnt = 0 ; 
	std::vector<cact*> cactus ; 
	while (window.isOpen()) 
	{ 
		sf::Event event; 
		while ( 
			window.pollEvent(event)) 
			if (event.type == sf::Event::Closed) 
				window.close(); 

		window.clear(sf::Color::White) ;
		player.show();
		frame_cnt++ ; 

		if(frame_cnt%125==0){
			int rand_num = rand()%100; 
			if(rand_num%2 == 0){
				cactus.push_back(new cact(po, 80.0, &window)); 
			} 
			else{ 
				continue; 
			}	
		}	
	
		for(int i = 0 ; i<cactus.size(); i++ ){ 
			cactus[i]->show();
		}	

		fps.show_fps(); 
		window.display(); 
	
	} 

	return 0; 

} 
