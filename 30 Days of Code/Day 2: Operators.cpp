/*
Task
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.
Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result!
*/

#include <bits/stdc++.h>
using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
float tip=(meal_cost*tip_percent)/100; 
    float tax=(meal_cost*tax_percent)/100;
    meal_cost=meal_cost+tip+tax;
    if(meal_cost-floor(meal_cost)<=0.5)
cout<<floor(meal_cost);
    else
        cout<<ceil(meal_cost);
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
