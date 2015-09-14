#include <iostream>
#include "computer.h"
#include <time.h>
#include "stdlib.h"

using namespace std;

void Date::turn(){
  
  int diceSides = 6;

  while(turnScore <= targetScore){
    int thisRoll = rand()%diceSides;
    if(thisRoll == 0){
      turnScore = 0;
      break;
    }
    else{
      turnScore += thisRoll;
    }
  }
  
  overallScore += turnScore;

}
