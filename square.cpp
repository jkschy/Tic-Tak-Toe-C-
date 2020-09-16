/**
 * @file    square.h
 * The object of the game for my Tik Tak Toe Game
 * @author  Justin Schy
 * @date    September 2020
 */

#include "square.h"

//Default Constructor
square::square(int X, int Y) {
    open = true;
    playerTaken = -1;
    x = X;
    y = Y;
}

/**
 * Getters
 */

//Getter for the Open Variable
bool square::isOpen() const {
    return open;
}

//Getter for the playerTaken Variable
int square::whoHasIt() const {
    return playerTaken;
}

//Getters for the Location of the Square X and Y
int square::getY() const {
    return x;
}
int square::getX() const {
    return y;
};



/**
 * Setters
 */

//Setter for both Open and playerTaken
void square::takeSquare(int player) {
    if((player  > 0) && (player < 3)) {
        open = false;
        playerTaken = player;
    }
}
