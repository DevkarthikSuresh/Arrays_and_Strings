//Name:Devkarthik Suresh
//PRN:23070123045
//Aim: To check if a given String is Pallindrome

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,revstr;
    int length,i;
    cout<<"Enter a string: ";
    cin>>a;
    length=a.length();
    for(i=length-1;i>=0;i--)
    {
        revstr+=a[i];
    }
    if(a==revstr)
    {
        cout<<"It is a palindrome.";
    } 
    else 
    {
        cout<<"It is not a palindrome";
    }
     return 0;
}


/*Output:
For Pallindrome-
Enter a string: bob
It is a palindrome.
For Not a Pallindrome-
Enter a string: hello
It is not a palindrome*/
