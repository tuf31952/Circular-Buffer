#include "p01.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, const char *argv[]) 
{

    int a1,a2,a3,a4;

    int count = 0;

    count++;

        
    if(count == 1){

      a1 = temp;

      a.setFirst(&a1);
      a.setSecond(&a2);
      a.setThird(&a3);
      a.setFourth(&a4);


    } else if(count == 2){

      a4 = temp;

      a.setFirst(&a4);
      a.setSecond(&a1);
      a.setThird(&a2);
      a.setFourth(&a3);


    } else if(count == 3){

      a3 = temp;
      
      a.setFirst(&a3);
      a.setSecond(&a4);
      a.setThird(&a1);
      a.setFourth(&a2);



    } else if(count == 4){

      a2 = temp;

      a.setFirst(&a2);
      a.setSecond(&a3);
      a.setThird(&a4);
      a.setFourth(&a1);

      count = 0;

    }

    


}