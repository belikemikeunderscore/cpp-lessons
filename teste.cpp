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



int main1(){
    cout << "Boas!\nIntroduzir Modulo\n";
    cout << "1 Comparar Numeros\n2 Calular Raio\n3 Somatoria\n";
    int escolha; 
    cin >> escolha;
    if (escolha = 1) compare();
    else if (escolha = 2) raio();
    else if (escolha = 3) somatoria();

    return 0;

}


int main2() {
    int num;
    cin >> num;
    if (num >= 0)
    cout << "numero positivo 👍" << endl;
    else if (num < 0)
    cout << "numero negativo 👎" << endl;
    return 0;

}

//OU ENTAO EM VEZ DE IF NUM >= 0

int main3() {
    int num;
    cin >> num;

    switch (num)
{
    case 1:
     cout << "O número é 1" << endl;
     break;

    case 2:
    cout << "O número é 2" << endl;
    break;

    default:
    cout << "nam sei" << endl;
    break;
}
    return 0;
}

int main(){
    int numSorte = rand() % 11;
    int num = 0;

    while (num != numSorte){
    cout << "qual é o numero da sorte?" << endl;
    cin >> num;
    if(numSorte > num){
    cout << "O número da sorte é maior do que " << num << endl;}
    else if (numSorte < num)
    {cout << "O número da sorte é menor do que " << num << endl;}
    else {cout << "ACERTASTE CARALHOOOOOOO" << endl;

    return 0;
}
}
}