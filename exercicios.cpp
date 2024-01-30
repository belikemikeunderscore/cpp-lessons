#include <iostream>
#include <algorithm>

using namespace std;

/** crie uma função capaz de ler uma matriz quadrada de interios.
*   Ao final da leitura o programa deverá imprimir o
*   número da linha que contém o menor dentre todos os números lidos.
*/

int matriz[3][3] = {{1234, 1, 1212},{36, 1434, 80},{45, 1312, 78}};

void comparar() {
 int maisbaixo = matriz[0][0];
    {

    for(int i=0; i <3; i++){
        for(int j=0; j < 3; j++){
            if(matriz[i][j] < maisbaixo){
                maisbaixo = matriz[i][j];
        }
    }
    }


    }

        cout << "número mais baixo do array é " << maisbaixo << endl;
}


void multiplicacao() {
    int fatormultiplicacao;
    cout << "digite o numero que quer multiplicar\n";
    cin >> fatormultiplicacao;

}
int main() {
    system("clear");
    comparar();



}