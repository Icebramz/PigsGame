#include "computer.h"
#include "person.h"

#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>

using namespace std;

Computer::Computer()
{
 computer_total_score = 0;
}

void Computer::play_game()
{
 cout << "Computer is now playing!" << endl;
 cout << "Computers score is: " << computer_total_score << endl;
 cout << "time to roll" << endl;
}
