#ifndef PERSON_H
#define PERSON_H

#include<iostream>


class Person
{
 public:
  // entered comment
  Person();
  void play_game();
  int player_roll(); 

 private:
  int *player_total_score;

};

#endif
