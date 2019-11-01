#include <iostream>
#include "Lib.h"

using namespace std;

int main() {
    cout <<  "Please, enter the number of array elements: " << endl;
    unsigned int n;
    cin >> n;

    if (n != 0){
        bool error = false;
        int *ArrayForSum = new int[n];

        cout <<  "Please, enter numbers for array one by one via SPACE: " << endl;
        for (int i = 0; i<n; i++){
            cin >> *(ArrayForSum + i);
            if (cin){
                error = true;
            }
        }
        if (!error){
            cout << "Entered array is: ";
            for (int i = 0; i<n; i++){
                cout << *(ArrayForSum + i) <<' ';
            }
            cout << endl;

            cout << "Result of addition is: " << array_sum(ArrayForSum, n);
            delete[] ArrayForSum;
        }
        else{
            cout << "Array contains some chars!";
        }
    }
    else{
        cout << "Array is empty :(";
    }
    return 0;
}