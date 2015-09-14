#ifndef COMPUTER_H
#define COMPUTER_H

class Computer{

  public:
    Date(int i) {targetScore = i; turnScore = 0; overallScore = 0;}
    int targetScore;
    int turnScore;
    int overallScore;

  private:
    void turn();

};

#endif
