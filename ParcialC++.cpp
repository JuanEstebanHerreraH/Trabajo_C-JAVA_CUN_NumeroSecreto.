#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    int numeros[5];
    int secreto[5];
    int contador = 0;

    for (int i = 0; i < 5; i++) {
        secreto[i] = rand() % 31 + 100; 
        for (int j = 0; j < i; j++) {
            if (secreto[i] == secreto[j]) {
                i--; 
                break;
            }
        }
    }

    cout << "Ingresa 5 numeros entre 100 y 130.\n";
    cout << "Si aciertas minimo 2 numeros tu nota es: 4.80\n";
    cout << "Si aciertas solo 1 tu nota es: 3.0\n";

    for (int i = 0; i < 5; i++) {
        cout << "Vas por el numero/" << (i+1) << "/ ingresa otro: ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int l = 0; l < 5; l++) {
            if (numeros[i] == secreto[l]) {
                contador++;
            }
        }
    }
    
    if (contador > 2) {
        cout << "Aprobaste con esta nota: 4.80\n";
        cout << "Cantidad acertada: " << contador << endl;
    } else {
        cout << "Aprobaste con esta nota: 3.0\n";
        cout << "Cantidad acertada: " << contador << endl;
    }
}

