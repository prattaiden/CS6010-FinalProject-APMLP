//
//  Player1.hpp
//  FinalProject_AP_MLP
//
//  Created by Aiden Pratt on 9/19/23.
//

#ifndef Player1_hpp
#define Player1_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


class PlayerOne{
private:
    
    sf::CircleShape icon;
    
    void initiateShape();
    
    
    
public:
    //sf::vector2f playerPosition(100, 100);
    void movePlayer(char direction, float move){
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            // left key is pressed: move our character
            icon.move(-0.100f, 0.f);
        }
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            // right key is pressed: move our character
            icon.move(0.100f, 0.f);
        }
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            // up key is pressed: move our character
            icon.move(0.f, -0.100f);
        }
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            // down key is pressed: move our character
            icon.move(0.f, 0.100f);
        }
        
    }
    
    
    
//constructor
    PlayerOne();
//constructor
    PlayerOne(float x, float y);
    
//destructor
    //~PlayerOne();
    

    
    
    
};





#endif /* Player1_hpp */
