#include "Circle.h"
#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>

Circle::Circle(int _x, int _y, int _radius, int _vX, int _vY){
    x = _x;
    y = _y;
    radius = _radius;
    vX = _vX;
    vY = _vY;
}

void Circle::draw() {
    shape.setRadius(radius);
    shape.setFillColor(sf::Color::White);
    shape.setPosition(sf::Vector2f(x, y));
    shape.setOrigin(0, 0);
}

void Circle::move(float deltaT) {
    shape.move(sf::Vector2f(vX * deltaT, vY * deltaT));
}
