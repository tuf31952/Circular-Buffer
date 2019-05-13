 #include <iostream>
 #include <iomanip>
 #include <stdio.h> 
 #include <stdlib.h> 

using namespace std;

class circular_buffer {

    private: 
            int a1,a2,a3,a4;

    public:

    void setFirst(int *x);

    void setSecond(int *x);

    void setThird(int *x);

    void setFourth(int *x);

    int getFirst();

    int getSecond();

    int getThird();

    int getFourth();

};