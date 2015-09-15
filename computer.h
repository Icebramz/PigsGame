#ifndef COMPUTER_H
#define COMPUTER_H

class Computer
{
  public:
   Computer();
   void play_game();
   int computer_roll();
   
  private:
   int *computer_total_score;

};

#endif
