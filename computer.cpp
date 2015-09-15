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
 int roll_value = 0;
 int current_roll = 0;
 int running_total = 0;
 
 cout << "Computer is now playing!" << endl;
 cout << "Computers score is: " << computer_total_score << endl;
<<<<<<< HEAD

 current_roll = computer_roll();
  
=======
 cout << "Computers initial roll is: " << computer_roll() << endl;
 cout << "change" << endl;
>>>>>>> 3733cf1e31068bb7ff1a3ba9b748c3a0182b1a00
}

int Computer::computer_roll()
{
 int dice_roll;
 srand(time(NULL));
 dice_roll = (rand()%6) + 1;
 return dice_roll;
}
