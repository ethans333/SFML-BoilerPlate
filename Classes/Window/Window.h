#ifndef WINDOW_H
#define WINDOW_H

using namespace std;

class Window {
    public:
        int width, height, centerX, centerY;
        Window(int _width, int _height);
        void endGame();
};

#endif // WINDOW_H