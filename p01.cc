#include "p01.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, const char *argv[]) 
{
    // get buffer size from argument
    int N = atoi(argv[2]) + 1;

    // declare class 
    circular_buffer a;

    // declare short int to find size of value in file
    short int temp = 1;

    // line count for output
    int line = 0;

    // declare array pointer of short ints to act as buffer
    short int *arr = new short int[N];

    // open given binary file to get values from to be added to buffer
    ifstream myFile (argv[1], ios::in | ios::binary);

  // create while loop to get values from binary file and enter into buffer
  while(myFile.read((char*)(&temp), sizeof(temp))){

    arr[0] = temp;

    for(int i = N; i > 0; i--){
      arr[i] = arr[i - 1];
    }

    cout << line << " " << temp << " [";

    for(int i = 1; i < N; i++){
      cout << arr[i] << "  ";
    }

    cout << '\b' << '\b' << "]" << "\n";

    line++;

    }

  // create while loop that will act as end of buffer to feed in 0 values
  while(a.getSum(N, arr) != temp){

    arr[0] = 0;

    for(int i = N; i > 0; i--){
      arr[i] = arr[i - 1];
    }

    cout << line << " " << 0 << " [";

    for(int i = 1; i < N ; i++){
      cout << arr[i] << "  ";
    }

    cout << '\b' << '\b' << "]" << "\n";

    line++;

  }

  delete[] arr;

  myFile.close();

}