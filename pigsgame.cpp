#include "person.h"
<<<<<<< HEAD
=======
#include "computer.h"
>>>>>>> dfaef41236746c88629575b37b59b30072c7dcba

#include<iostream>
#include<string>

using namespace std;

int main()
{
<<<<<<< HEAD
 Person p1;
 p1.play_game();
=======
  Person p1;
  Computer c1;
  bool playing = true;
  
  while(playing){
   p1.play_game();
   if(p1.getScore() >= 100){
    cout << "Congradulations you beat the computer!" << endl;
    playing = false;
    break;
   }
   c1.play_game();
   if(c1.getScore() >= 100){
    cout << "Too bad the computer beat you! Try again!" << endl;
    playing = false;
   }
  }
>>>>>>> dfaef41236746c88629575b37b59b30072c7dcba
}
