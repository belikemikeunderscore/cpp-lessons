#include <iostream>

#include <ctime>

#include <cstdlib>

using namespace std;

int main() {
  while (true) {
    srand((unsigned) time(0));
    int numeros[5];
    int estrelas[2];
    string choice;
    numeros[0,1,2,3,4] = rand() % 50 + 1;
    estrelas[0] = rand() % 12 + 1;
    estrelas[1] = rand() % 12 + 1;
    cout << "Números: " << numeros[0] << " " << numeros[1] << " " << numeros[2] << " " << numeros[3] << " " << numeros[4] << "\nEstrelas: " << estrelas[0] << " " << estrelas[1];
    cout << "\nGerar outra chave? (s/n)";
    cout << sizeof(numeros);
    cin >> choice;
    system("clear"); //não tenho a certeza se esta função funciona, testei em um compilador online


  }
}