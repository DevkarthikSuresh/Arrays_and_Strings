//Name:Devkarthik Suresh
//PRN:23070123045
//Aim:Implemention of Arrays and to print the Maximum and Minimum Number in it.

#include <iostream>
using namespace std;

int main() {
    int marks[5] = {10, 21, 80, 41, 2};
    int max = marks[0];
    int min = marks[0];

    for (int i = 1; i < 5; i++) 
    {
        if (max < marks[i])
        {
            max = marks[i];
        }
    }

    for (int j = 1; j < 5; j++) 
    {
        if (min > marks[j]) 
        {
            min = marks[j];
        }
    }

    cout << "Maximum is " << max << endl;
    cout << "Minimum is " << min << endl;

    return 0;
}


/*Output:
Maximum is 80
Minimum is 2*/
