/**
 * @file    square.cpp
 * The main file for the square class
 * @author Justin Schy
 * @date September 2020
 */


#include <iostream>
#include "square.h"

using namespace std;


square::square() {
    Open = true;
    Player = 9;
}

//Gets the value of the X variable
int square::getX() const {
    return X;
}

//Gets the value of the Y variable
int square::getY() const {
    return Y;
}

//ets the value of the Open Variable
bool square::isOpen() const {
    return Open;
}

//Changes the value of Taken, and Adds a player to the variable
void square::takeSpace(int takenByPlayer) {
    Open = false;
    Player = takenByPlayer;
}

//Sets the location of the square
void square::setLocation(int startX, int startY) {
    X = startX;
    Y = startY;
}

//Returns the value of player as an integer
int square::getPlayer() {
    return Player;
}
