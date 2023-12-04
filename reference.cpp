#include <iostream>
using namespace std;

//"references" are like an slias for a variable

string food = "Pizza!";

//we create areference now
string &meal = food;

//this uses the same memory bit map

int main(){
    cout << food << "\n";
    cout << &food << "\n";
    cout << meal << "\n";
    cout << &meal << "\n";
    return 0;

}