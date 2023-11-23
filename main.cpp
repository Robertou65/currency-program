#include <iostream>
#include <string>
#include <cctype>
#include "steps.h"

/*
  CURRENCY / ISO CODE

  united states dollar    USD
  Colombian peso          COP
  euro                    EUR
  Chinese yuan            CNY               
  Mexican peso            MXN
  Brazilian real          BRL
  Kuwaiti Dinar           KWD
  Japanese yen            JPY
  Swiss franc             CHF
  British Pound           GBP
*/

int main(){
  bool signal = true, verification = true;
  int i = 1;

  do{
    switch(i){
      // ask for the first currency
      case 1:
        std::fflush(stdin);
        verification = true;
        verification = firstStep();
        if(!verification){
          i = 0;
        }
        break;
      // ask for the second currency
      case 2:
        std::fflush(stdin);
        verification = true;
        verification = secondStep();
        if(!verification){
          i = 1;
        }
        break;
      // ask for the value
      case 3:
        std::fflush(stdin);
        thridStep();
        break;
      // show the result
      case 4:
        std::fflush(stdin);
        fourthStep();
        break;
      default:
        std::fflush(stdin);
        break;
    }

    system("pause");
    system("clear");

    i++;

    if (i == 5){
      signal = confirmation();

      if (signal){
        i = 1;
      }
    }

  }while(signal);

  system("clear");
  return 0;
}