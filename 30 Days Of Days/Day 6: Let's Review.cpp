/*
Task
Given a string,S, of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as 2 space-separated strings on a single line (see the Sample below for more detail).

Note: 0 is considered to be an even index.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,len;
    cin>>t;
    string s;
   for(int j=0;j<t;j++)
    {
cin>>s;
len=s.length();
for(int i=0;i<len;i++)
{
    cout<<s[i];
    i++;
}
cout<<" ";
for(int i=1;i<len;i++)
{
    cout<<s[i];
    i++;
}
cout<<endl;
    }
    return 0;
}
