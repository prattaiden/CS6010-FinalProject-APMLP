//
//  Filetest.cpp
//  FinalProject_AP_MLP
//
//  Created by Aiden Pratt on 9/18/23.
//

#include "Filetest.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

int window(){
    
    sf::RenderWindow window(sf::VideoMode(1280, 720),"my window");
    
    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed) window.close();
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
        }
    }

    return 0;
    
}
