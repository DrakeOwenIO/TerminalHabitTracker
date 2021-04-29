/**
 Drake Owen
 Console Habit Tracker
 Functions: 
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include "functions.h"
#include "habits.h"

using namespace std;

// Print the whole menu
int printMenu()
{
    int userChoice = 0;

    // Print menu
    cout << "1. Create new habit" << endl;
    cout << "2. Load habits" << endl;
    cout << "3. View all habits" << endl;
    cout << "4. Help" << endl;
    cout << endl;

    // Get user input
    cout << "Select a menu choice: ";
    cin >> userChoice;


    return userChoice;
}

// Create a habit and add it to the habit vector
void createHabit()
{
    string habitName;
    
    cout << "Habit Name: ";
    getline(cin, habitName);

    habit newHabit(habitName);

}
