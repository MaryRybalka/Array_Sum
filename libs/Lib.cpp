#include "Lib.h"
#include <iostream>

using namespace std;

int array_sum( int *arr, unsigned int numb){
    short int res = 0;
    for (unsigned int i = 0; i<numb; i++){
        res = res + *(arr + i);
    }
    return res;
}
