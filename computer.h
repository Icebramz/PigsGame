#ifndef COMPUTER_H
#define COMPUTER_H

class Computer
{
  public:
   Computer();
   void play_game();
   int computer_roll();
<<<<<<< HEAD
   
  private:
   int *computer_total_score;
=======
   int getScore(){return computer_total_score;}
  private:
   int computer_total_score;
   int target_score;
>>>>>>> dfaef41236746c88629575b37b59b30072c7dcba

};

#endif
