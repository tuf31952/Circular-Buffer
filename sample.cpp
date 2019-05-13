#include <iostream>
#include "p01.h"
#include <array>

using namespace std;


void circular_buffer::setFirst(int *x){

    a1 = *x;

}

void circular_buffer::setSecond(int *x){

    a2 = *x;

}

void circular_buffer::setThird(int *x){

    a3 = *x;

}

void circular_buffer::setFourth(int *x){

    a4 = *x;

}

int circular_buffer::getFirst(){

    return a1;

}

int circular_buffer::getSecond(){

    return a2;

}

int circular_buffer::getThird(){

    return a3;

}

int circular_buffer::getFourth(){

    return a4;

}