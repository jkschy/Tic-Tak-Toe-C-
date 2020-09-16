/**
 * file main.cpp
 * this is the main file of my tik tak toe game
 * @author Justin Schy
 * @date september 2020
 */

#include <iostream>
#include "square.h"

using namespace std;

int main() {
    square Square1(1, 1);

    cout << "This Square is at " << Square1.getX() << ", " << Square1.getY() << " and it is" << Square1.isOpen() << endl;


    return 0;
}
