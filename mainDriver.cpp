/**
Drake Owen
Console Habit Tracker
Main Driver: Starts the main program
v. 0.0.1
**/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include "src/functions.h"
#include "src/habits.h"


int main()
{
    int menuChoice;

    cout << endl;
    cout << "Habit Tracker V1" << endl;
    cout << endl;

    menuChoice = printMenu();

    switch (menuChoice)
    {
    case 1:
        createHabit();
        break;
    
    default:
        break;
    }

    return 0;
}
