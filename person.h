#ifndef PERSON_H
#define PERSON_H

#include<iostream>


class Person
{
 public:
<<<<<<< HEAD
  // entered comment
  Person();
  void play_game();
  int player_roll(); 

 private:
  int *player_total_score;
  int i;
=======
  Person();
  void play_game();
  int player_roll(); 
  int getScore(){return *player_total_score;}

 private:
  int *player_total_score;
>>>>>>> dfaef41236746c88629575b37b59b30072c7dcba

};

#endif
