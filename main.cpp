#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
#include "Classes/Window/Window.cpp"
#include "Classes/Window/Window.h"
#include "Classes/Circle/Circle.cpp"
#include "Classes/Circle/Circle.h"

int main()
{
    Window win(500, 500);

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(win.width, win.height), "Window Title", sf::Style::Default, settings);

    window.setFramerateLimit(60);
    sf::Clock dtClock;
    float dt = 0;

    //Create
    Circle circle(25, 25, 10, 5, 5);
    circle.draw();

    while (window.isOpen()) {
        sf::Event event;

    //Move
        circle.move(dt);

        dt = dtClock.restart().asSeconds();
        window.clear();

    //Draw
        window.draw(circle.shape);
        window.display();

    /*===*/
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}