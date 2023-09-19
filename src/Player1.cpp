//
//  Player1.cpp
//  FinalProject_AP_MLP
//
//  Created by Aiden Pratt on 9/19/23.
//

#include "Player1.hpp"
#include <SFML/Graphics.hpp>


//sf::vector2f playerPosition(100, 100);

//constructor
PlayerOne::PlayerOne(){
    
    
}


//METHODS
//initiate shape
void initiateShape(){
    sf::CircleShape icon(20.f);
    
    icon.setFillColor(sf::Color(255, 255, 255));

}
//
//void movePlayer(char direction, float move){
//    initiateShape();
//    
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
//    {
//        // left key is pressed: move our character
//        icon.move(-0.100f, 0.f);
//    }
//    
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
//    {
//        // right key is pressed: move our character
//        player.move(0.100f, 0.f);
//    }
//    
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
//    {
//        // up key is pressed: move our character
//        player.move(0.f, -0.100f);
//    }
//    
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
//    {
//        // down key is pressed: move our character
//        player.move(0.f, 0.100f);
//    }
//    
//    
//}
