/**
 * @file    square.h
 * The object of the game for my Tik Tak Toe Game
 * @author  Justin Schy
 * @date    September 2020
 */

#ifndef square_H
#define square_H


class square {


private:
    /**
     * Holds the Value of the square being open
     */
    bool open;

    /**
     * If it is taken, it holds the value of the player who took it
     */
    int playerTaken;

    /**
     * The location of the square
     */
    int x;

    /**
     * the location of the square
     */
    int y;


public:

    /**
     * Default Constructor
     * @param X the X value of the square
     * @param Y the Y value of the square
     */
    square(int X, int Y);


    /**
    * Getter for the Open Variable
    * @return the Value (A boolean Value)
    */
    bool isOpen() const;



    /**
     * Getter for the playerTaken Variable
     * @return the value(an Integer Value)
     */
    int whoHasIt() const;



    /**
     * Allows you to change the value of open
     * @param player the player who took the square
     */
    void takeSquare(int player);

    /**
     * getter for the X value of the square
     * @return
     */
    int getX() const;

    /**
     * getter for the Y value of the square
     * @return
     */
    int getY() const;


};


#endif //square_H
