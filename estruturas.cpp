#include <iostream>
using namespace std;

struct pessoas
{
    string nome;
    int idade;
    string codPostal;
    string rua;
    string cidade;
    string pais;
} pessoa1, pessoa2, pessoa3;

struct fruto {
    string nome;
    int idade;
    string cidade;
};


int main(){

pessoa1.nome = "Mike";
pessoa1.idade = 17;
pessoa1.codPostal = "1234-567";
pessoa1.rua = "Yeah!";
pessoa1.pais = "PORTUGAL CARALHOOO!!!";
cout << pessoa1.pais;

pessoa2.nome = "joano";
pessoa2.idade = 24;


fruto p1, p2, p3;
p1.nome = "mike";
p2.nome = "aimrane";
p1.cidade = "rua de lsiboa";

cout << p1.nome << " fucks with " << p2.nome << "'s mom";



}
