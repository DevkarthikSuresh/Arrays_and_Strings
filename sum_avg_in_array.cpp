//Name:Devkarthik Suresh
//PRN:23070123045
//Aim:To print the location of keys and sum & average of the Array

#include<iostream>
using namespace std;

int main() {
    int n = 6;
    int marks[n] = {100, 200, 300, 400, 500, 600};
    int key = 400;
    int sum = 0;
    int avg;
    
        for (int i = 0; i < n; i++) 
        {
        if (key == marks[i]) 
        {
            cout << "Key found at location: " << i << endl;
            break;
        }
    }
    for (int j = 0; j < n; j++) 
    {
        sum += marks[j];
    }
    
    avg = sum / n;
    
    cout << "Sum is " << sum << endl;
    cout << "Average is " << avg << endl;
    
    return 0;
}


/*Output:
Key found at location: 3
Sum is 2100
Average is 350
*/
