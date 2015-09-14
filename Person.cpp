#include "Person.h"

#include<iostream>
#include<string>
#include<assert.h>

using namespace std;


Person::Person()
{
 player_total_score = 0;
}

void Person::play_game()
{
 string user_input;

 cout << "Player, would you to roll, or will you hold?" << endl;
 cin >> user_input;

 if(user_input == "roll")
 {
  cout << "Player rolled" << endl;
 }
 else if(user_input == "hold")
 {
  cout << "player decided to hold" << endl;
 }
 else
 {
  cout << "not an option" << endl;
 }
} 

