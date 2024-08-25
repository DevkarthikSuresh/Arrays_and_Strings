//Name:Devkarthik
//PRN:23070123045
//Aim:Implemention of Arrays and Strings to print the given Concatination  of Strings

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;
    string newstr;
    
    cout << "Please Enter String 1: ";
    cin >> str1;

    cout << "Please Enter String 2: ";
    cin >> str2;
    
    newstr = str1 + str2; 

    cout << "Concatenated String: " << newstr << endl;

    return 0;
}


/*Output:
Please Enter String 1: SIT
Please Enter String 2: PUNE
Concatenated String: SITPUNE*/
