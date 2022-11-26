// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 3
// November 23, 2022

// required headerfile
#include <iostream>
#include <cmath>
#include "GameObject.h"


// prototyped
#ifndef BUILDING.H
#define BUILDING.H

class Building : public GameObject {
    // inherits from GameObject (base class)
    // responsible for tracking the total number of Pokemon Trainers that enter or leave a building
    private:
        unsigned int trainer_count;  // number of trainers currently within the building

    public:
        Building();
        Building(char in_code, int in_Id, Point2D in_loc);
        void AddOneTrainer();
        void RemoveOneTrainer();
        void ShowStatus();
        bool ShouldBeVisible();
};


#endif