/**
 Drake Owen
 Console Habit Tracker
 Functions: 
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include "functions.h"

using namespace std;

// Print the whole menu
int printMenu()
{
    int userChoice = 0;

    cout << "1. Create new habit" << endl;
    cout << "2. Load habits" << endl;
    cout << "3. View all habits" << endl;
    cout << endl;

    return userChoice;
}
