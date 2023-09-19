#include <SFML/Graphics.hpp>
#include <iostream>
#include "Filetest.hpp"
#include "Player1.hpp"
int main()
{
    
    //opening the window
    sf::RenderWindow window(sf::VideoMode(1280, 720),"game");
    
    //shape moving rectangle
    sf::RectangleShape rec;
    
    sf::Vector2f rectanglePosition(600, 300);
    
    rec.setPosition(rectanglePosition);
    
    rec.setSize(sf::Vector2f(100, 100));
    
    //setting velocity
    float xVeloicty = .03;
    float yVelocity = .04;

    //shape circle
    sf::CircleShape cir(30.f);

    sf::Vector2f circlePosition(100, 310);

    cir.setPosition(circlePosition);

    cir.setFillColor(sf::Color(100, 250, 50));

    //shape circle2

    sf::CircleShape cir2(30.f);

    sf::Vector2f circle2Position(1100, 310);

    cir2.setPosition(circle2Position);

    cir2.setFillColor(sf::Color(20, 10, 250));

    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed) window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
        }
        
    //PlayerOne(100, 100);

        //rectangle physics
        rectanglePosition.x += xVeloicty;
        rectanglePosition.y += yVelocity;
        rec.setPosition(rectanglePosition);
        rec.rotate(0.002f);
        
        if (rectanglePosition.x < 0 || rectanglePosition.x > 1280 - 100)
        {xVeloicty *= -1;};
        if (rectanglePosition.y < 0 || rectanglePosition.y > 720 - 100)
        {yVelocity *= -1;};

        //CIRCLE
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            // left key is pressed: move our character
            cir.move(-0.100f, 0.f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            // right key is pressed: move our character
            cir.move(0.100f, 0.f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            // up key is pressed: move our character
            cir.move(0.f, -0.100f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            // down key is pressed: move our character
            cir.move(0.f, 0.100f);
        }

        if (circlePosition.x < 0 || circlePosition.x > 1280 - 15);
        if (circlePosition.y < 0 || circlePosition.y > 720 - 15);

        //circle 2
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            // left key is pressed: move our character
            cir2.move(-0.400f, 0.f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            // right key is pressed: move our character
            cir2.move(0.400f, 0.f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            // up key is pressed: move our character
            cir2.move(0.f, -0.400f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            // down key is pressed: move our character
            cir2.move(0.f, 0.400f);
        }

        if (circle2Position.x < 0 || circle2Position.x > 1280 - 100) cir2.move(0.f, 0.f);
        if (circle2Position.y < 0 || circle2Position.y > 720 - 100) cir2.move(0.f, 0.f);
        
        
        
        
        window.clear(sf::Color::Black);
        window.draw(rec);
        window.draw(cir);
        window.draw(cir2);
        window.display();
    }
    
}
