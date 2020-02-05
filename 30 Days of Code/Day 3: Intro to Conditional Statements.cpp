/*
Task
Given an integer,n , perform the following conditional actions:
If n is odd, print Weird
If n is even and in the inclusive range of 2 to 5, print Not Weird
If n is even and in the inclusive range of 6 to 20, print Weird
If n is even and greater than 20 , print Not Weird
Complete the stub code provided in your editor to print whether or not n  is weird.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
if(N%2!=0)
    cout<<"Weird";
    else if(N%2==0 && N>=2 && N<=5)
        cout<<"Not Weird";
     else if(N%2==0 && N>20)
        cout<<"Not Weird";
    else if(N%2==0 && N>=6 && N<=20)
         cout<<"Weird";
    return 0;
}
