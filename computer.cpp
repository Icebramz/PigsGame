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
 cout << "Computers initial roll is: " << computer_roll() << endl;
 cout << "change" << endl;
}

int Computer::computer_roll()
{
 int dice_roll;
 srand(time(NULL));
 dice_roll = (rand()%6) + 1;
 return dice_roll;
}
