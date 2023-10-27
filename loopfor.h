#include <stdio.h>
#include <iostream>
using namespace std;

int main (){

    int i = 10;

    while (i != 10){
        cout << "olá" << endl;
    }
}
int mainthing(){
    int i = 1;
do {
    cout << "olá" << endl;

} while (i != 10);
}

int forzinho(){
for (int n=0; n<=10; n++){
    cout << n << endl;
    if (n == 4){
        break;
//        continue; //continua o codigo mas salta o passo, neste caso o número 4
    }
}
return 0;
}


int array(){

    int test[4] = {7,8,9,10};
    for (int i=0; i<4; i++){
        cout << test[i] << endl;
    }
}