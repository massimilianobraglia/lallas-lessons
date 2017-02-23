#include <iostream>
#include <string>
#include <math.h>

using namespace std; 

int leggiDimensione() {
    cout << "Quanti numeri vuoi inserire?" << endl;

    int dimensione;
    cin >> dimensione;
    return dimensione;
}

void leggiEStampaArray(int dimensione) {
    int array[dimensione];
    for (int i = 0; i < dimensione; i++) {
        cout << "Inserisci il numero che andrà alla posizione " << i << endl;
        cin >> array[i];
    }
    
    for (int i = 0; i < dimensione; i++) {
        cout << "posizione " << i << " valore " << array[i] << endl;
    }

}

string leggiStringa() {
    string x;
    cout << "Scrivimi una stringa" << endl;
    cin.ignore();
    getline(cin, x);

    return x;
}

int main() {
//     int dimensione = leggiDimensione();
//     leggiEStampaArray(dimensione);

//     string valore = leggiStringa();
// cout << valore;
    unsigned int asd = -127;
    unsigned int asd2 = pow(2, 32) - 127;
    cout << "asd: " << asd << endl << "asd2 " << asd2;

    return 0;
}