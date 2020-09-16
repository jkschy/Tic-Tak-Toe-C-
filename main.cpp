/**
 * @file    main.cpp
 * Main file of the Tik Tak Toe Game
 * @author  Justin Schy
 * @date september 2020
 */

#include <iostream>
#include <iomanip>
#include <string>
#include "square.h"

using namespace std;


/**
 * A function to clear the console
 */
void clearConsole();


/**
 * A function to print the board to the console
 * @param Board the whole board
 */
void printBoard(square Board[][3], int const SIZEX, int const SIZEY);


/**
 * gets the users Input
 * @return The user Input
 */
string getInput();

/**
 * Translate from Letter to Number
 * @return the Number of the Coloumn
 */
int CNum(string cInput);

/**
 * Changes Player Variable
 * @return The current Player variable
 */
int changePlayer(int currentPlayer);


int main() {

    bool running = true;
    int turn = 1;
    int cPos;
    int currentPlayer = 1;
    int const SIZEX = 3;
    int const SIZEY = 3;
    string input  = "";
    string C = "";
    string R = "";

    square board[SIZEX][SIZEY];


    //Populates Board with locations
    for(int Xpos = 0; Xpos < SIZEX; Xpos++) {
        for(int Ypos = 0; Ypos < SIZEY; Ypos++) {
            board[Xpos][Ypos].setLocation(Xpos, Ypos);
        }
    }

    while(running) {
        if(turn == 9) {
            running = false;
        } else if(turn == 1) {
            printBoard(board, SIZEX, SIZEY);
        }

        input = getInput();

        C = input.substr(0,1);
        R = input.substr(1,1);

        if(board[stoi(R) - 1][cPos].isOpen() != 1) {
            cout << "Spot already Taken"

        } else {
            turn++;
            cout << turn << endl;
            changePlayer(currentPlayer);
            cPos = CNum(C);
            board[stoi(R) - 1][cPos].takeSpace(currentPlayer);
            clearConsole();
            printBoard(board,SIZEX,SIZEY);
        }
    }
}




void clearConsole() {
    for (int i = 0; i < 13; i++) {
        cout << endl;
    }
}

void printBoard(square Board[][3], int const SIZEX, int const SIZEY) {
    for(int Xpos = 0; Xpos < SIZEX; Xpos++) {
        for(int Ypos = 0; Ypos < SIZEY; Ypos++) {
            if(Board[Xpos][Ypos].isOpen() != 0) {
                cout << "[ ]";
            } else {
                if(Board[Xpos][Ypos].getPlayer() == 1) {
                    cout << "[X]";
                } else {
                    cout << "[O]";
                }
            }
        }
        cout << endl;
    }
}

string getInput() {

    string input = "";

    cout << "What Space Would you Like EX:(A1, A2, B1): ";
    getline(cin, input);

    return input;
}

int CNum(string cInput) {
    int Cnum;
    if((cInput == "a") || (cInput == "A")) {
        Cnum = 0;
    } else if((cInput == "b") || (cInput == "B")) {
        Cnum = 1;
    } else if((cInput == "c") || (cInput == "C")) {
        Cnum = 2;
    }
    return Cnum;
}

int changePlayer(int currentPlayer) {
    int newPlayer;

    if(currentPlayer == 1) {
        newPlayer = 0;
    } else {
        newPlayer  = 1;
    }

    return newPlayer;
}

