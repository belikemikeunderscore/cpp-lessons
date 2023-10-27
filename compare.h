#include <iostream>
using namespace std;

int a , b;
int compare(){
    cout << "Introduza numero a\n";
    cin >> a;
    cout << "Introduza numero b\n";
    cin >> b;
    if (a > b)
    cout << a << " é maior que " << b << endl;
    else if(a < b)
    cout << a << " é menor que " << b << endl;
    else if(a == b)
    cout << "a e b têm o mesmo valor" << endl;
    return 0;
}
