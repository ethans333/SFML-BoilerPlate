#ifndef CIRCLE_H
#define CIRCLE_H
#include <SFML/Graphics.hpp>

using namespace std;

class Circle {
    public:
        int x, y, radius, vX, vY;
        sf::CircleShape shape;

        Circle(int _x, int _y, int _radius, int _vX, int _vY);
        void draw();
        void move(float deltaT);
};

#endif