#include <iostream>
#include "p01.h"
#include <array>

using namespace std;

// default constructor 
circular_buffer::circular_buffer()
{
}

// function to get sum of the buffer
int circular_buffer::getSum(int N, short int x[]){

    int sum = 0;
    
    for(int i = 0; i < N; i++){

        sum += x[i];

    }

    return sum;

}