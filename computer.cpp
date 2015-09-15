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
<<<<<<< HEAD
}

void Computer::play_game()
{
 int roll_value = 0;
 int current_roll = 0;
 int running_total = 0;
 
 cout << "Computer is now playing!" << endl;
 cout << "Computers score is: " << computer_total_score << endl;

 current_roll = computer_roll();
  
 cout << "time to roll" << endl;
 cout << "Computers initial roll is: " << computer_roll() << endl;
 cout << "change" << endl;
=======
 target_score = 12;
}

void Computer::play_game()
{
 
 int this_roll;
 int this_turn = 0;
 bool playing = true;

 cout << "Computer is now playing!" << endl;
 
 while(playing){
  this_roll = computer_roll();
  this_turn += this_roll;
  
  if(this_roll == 1){
    this_turn = 0;
    cout << "Computer rolled a 1, no points were added for the current turn"
         << endl;
    playing = false;
  }

  else if (this_turn >= target_score){
   cout << "Computer rolled a: " << this_roll << endl 
        << "Computer decided to hold" << endl;
   playing = false;
  }
  else{
    cout << "Computer rolled a: " << this_roll << endl 
         << "Computer's score for this round is: " << this_turn << endl;
  }
 }
 computer_total_score += this_turn;
 cout << "Computer's total score is: " << computer_total_score << endl;
>>>>>>> dfaef41236746c88629575b37b59b30072c7dcba
}

int Computer::computer_roll()
{
 int dice_roll;
 srand(time(NULL));
 dice_roll = (rand()%6) + 1;
 return dice_roll;
}
