/*
Task
Complete the code in the editor below. The variables i,d, and s are already declared and initialized for you. You must:

Declare 3 variables: one of type int, one of type double, and one of type String.
Read 3 lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your  variables.
Use the + operator to perform the following operations:
Print the sum of i plus your int variable on a new line.
Print the sum of d plus your double variable to a scale of one decimal place on a new line.
Concatenate s with the string you read as input and print the result on a new line.
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i2;
double d2,d3;
string s1,s2;
    // Read and save an integer, double, and String to your variables.
cin>>i2>>d2;
getline(cin>>ws,s1);

    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<i+i2<<endl;
    // Print the sum of the double variables on a new line.
 
cout<<fixed<<setprecision(1)<<d+d2<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
cout<<s+s1;
    return 0;
    }
