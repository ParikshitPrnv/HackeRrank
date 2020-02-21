/*Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. 
You will then be given an unknown number of names to query your phone book for. 
For each name queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; 
if an entry for name is not found, print Not found instead.*/

#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <string>
using namespace std;
int main() {
  long long int test;
  long long int num;
  cin >> test;
  string name;
  
  map<string,long long int> prnv;
  long long int a = test;
  while (a--) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> name >> num;
    prnv.insert(pair<string,long long int>(name, num));
  }
  string check;
 
  map<string, long long int>::iterator it;
  while (cin >> check) {

    it = prnv.find(check);

    if (it == prnv.end())
      cout << "Not found" << endl;
    else

      cout << it->first << "=" << it->second << endl;
  }
}

