#include <iostream>
using namespace std;

//variaveis
int numero_int = 0;                     //numeros inteiros
double numero_real = 3.5;               //numeros reais
char caracter = 'c';                    //caracteres
string textinho = "de momento, temos "; //textinho !!!!
bool booleane = true;                   //boolianos bolinhos 
int numeroDeBitches;
// int main()
//*{
//    cout << "Hello World!\n";
//    cout << "I'm a C++ program\n";
//    cout << "And I love women.\n";
//    cout << "Indique o numero de bitches atual";
//    cin >> numeroDeBitches;
//    cout << "de momento, temos " << numeroDeBitches << " bitches"; 
//    return 0;
//*}

void somatoria(){
    string a = "1";
    string b = "2"; 
    cout << a+b << endl; //vai dar 12 porque são strings
    int c = 1;
    int d = 2; 
    cout << c+d << endl; //vai dar 3
}

int main(){
    //considering the area of a circle is PI*radius*radius with radius 10
    cout << "Inserir raio\n";
    double radius = 0;
    cin >> radius;
    double pi = 3.1415;
    double piradius = pi*radius;
    double solution = piradius*radius;
    cout << solution;



}
