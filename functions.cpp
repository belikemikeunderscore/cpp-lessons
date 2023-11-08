#include <iostream>
using namespace std;

int quadrado(int numero){
    return numero*numero;
}

int multiplicacao(int base, int exp=3){ //fica um valor por defeito
    return base*exp;
}


void errorMsg(string msg){
    cout << "----------------" << endl;
    cout << "Error: "<< msg << endl;
    cout << "----------------" << endl;

}

void ola(){
    cout << "Olá!" << endl;
}


void text(string txt1, string txt2, string txt3){
    cout << txt1 << endl;
    cout << txt2 << endl;
    cout << txt3 << endl;
}
int main(){
    int choice;
    cin >> choice;
    cout << quadrado(choice);
    
    ola();

    errorMsg("Conection error");

    text("killing", "my", "self");

    cout << multiplicacao(3);
    }


    