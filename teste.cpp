#include <iostream>
#include <cmath>
#include "mycontinhas.h"
#include "btchesnumber.h"
#include "compare.h"
#include "raio.h"
#include "somatoria.h"

using namespace std;

//variaveis
int numero_int = 0;                     //numeros inteiros
double numero_real = 3.5;               //numeros reais
char caracter = 'c';                    //caracteres
string textinho = "de momento, temos "; //textinho !!!!
bool booleane = true;                   //boolianos bolinhos 
int numeroDeBitches;



int main(){
    cout << "Boas!\nIntroduzir Modulo\n";
    cout << "1 Comparar Numeros\n2 Calular Raio\n3 Somatoria\n";
    int escolha; 
    cin >> escolha;
    if (escolha = 1) compare();
    else if (escolha = 2) raio();
    else if (escolha = 3) somatoria();

}


