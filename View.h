// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 3
// November 23, 2022

// required header-file
#include <iostream>
#include <cmath>
#include "Point2D.h"
#include "GameObject.h"

using namespace std;


// prototyped
#ifndef VIEW_H
#define VIEW_H

const int view_maxsize = 20;
class View {
    private:
    int size;
    double scale;
    Point2D origin;
    char grid[view_maxsize][view_maxsize][2];
    bool GetSubscripts(int&, int&, Point2D);

    public:
    View();
    void Clear();
    void Plot(GameObject*);
    void Draw();
};


#endif