#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string *ptr = &food;
    cout << food << "\n"; 
    cout << &food << "\n"; //returns the address of the "food" string
    cout << ptr << "\n"; //returns the address of the ptr string
    cout << *ptr << "\n"; //returns the content on the ptr address
    cout << &ptr << "\n"; //returns the address that was pointed to the food variable
    return 0;

}