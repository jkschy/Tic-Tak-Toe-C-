/**
 * @file    square.h
 * The header file for the square class
 * @author Justin Schy
 * @date September 2020
 */

#ifndef TIK_TAK_TOE_SQUARE_H
#define TIK_TAK_TOE_SQUARE_H

class square {

private:

    /**
     * Holds the X value of the square
     */
    int X;

    /**
     * Holds the Y value of the square
     */
    int Y;

    /**
     * Has the value of if the square is open or not
     */
    bool Open;

    /**
     * Holds the Player who has the square
     */
     int Player;




public:
    /**
     * Dafault Constructor
     */
    square();

    // GETTERS
    /**
     * Gets the value of the X variable
     * @return the X variable
     */
    int getX() const;

    /**
     * Gets the value of the Y variable
     * @return the Y variable
     */
    int getY() const;

    /**
     * Gets the value of the Open Variable
     * @return (T or F)
     */
    bool isOpen() const;

    //SETTERS

    /**
     * Changes the value of Taken, and Adds a player to the variable
     * @param takenByPlayer the Player who took it
     */
    void takeSpace(int takenByPlayer);

    /**
     * Sets the Location of the block
     * @param startX X Location
     * @param startY Y Location
     */
    void setLocation(int startX, int startY);

    /**
     * getter for the player
     * @return the value of player as an integer
     */
    int getPlayer();

    /**
     * Gets the location of the current square
     * @return the location in a string
     */
    std::string getLocation();


};
#endif //TIK_TAK_TOE_SQUARE_H
