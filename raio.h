#include <iostream>
using namespace std;

int raio(){
    //considering the area of a circle is PI*radius*radius with radius 10
    cout << "Inserir raio\n";
    double radius = 0;
    cin >> radius;
    double pi = 3.1415;
    double piradius = pi*radius;
    double solution = piradius*radius;
    cout << solution;



}