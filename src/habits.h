/**
 Drake Owen
 Console Habit Tracker
 Habits Header
*/

using namespace std;

#ifndef HABITS_H
#define HABITS_H

#include <fstream>
#include <vector>

class habit{
    private:
    int streak;
    string habitName;

    public:
        habit();
        habit(string habitName);

        vector<habit *> allHabits;

        void getStreak();
        void addToVector(habit habitToAdd);
};


#endif