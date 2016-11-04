#include <iostream>

using namespace std;

int main() {
    /*
    int x;
    int y;

    cout << "Ciao! Dammi il primo intero!" << endl;
    cin >> x;
    cout << "Il numero da te inserito è: " << x << endl;

    cout <<"Ciao! dammi il secondo intero" << endl;
    cin >> y;
    cout << "La somma è: " << x+y << endl;
    cout << "La differenza è: " << x-y << endl;
    cout << "la moltiplicazione è: " << x*y << endl;
    cout << "La divisione è: " << x/y << endl;
    
    int z=x/y;
    int w=y*z;
    int k=x-w;

    cout << "Il resto è: " << k <<endl;

    int resto = x % y;

    cout << "Il resto utilizzando l'operatore % è: " << resto <<endl;
*/
    int scelta=0;
    
    while (scelta != 5) {
        cout << "Scegli l'opzione:" << endl 
            << "1. addizione " << endl
            << "2. sottrazione " << endl
            << "3. moltiplicazione" << endl
            << "4. differenza" << endl
            << "5. exit" << endl;

        
        int z;
        int x=12;
        int y=3;
        cin >> scelta;

        switch (scelta) {
            case 1: {
                z=x+y;
                break;
            }

            case 2: {
                z=x-y;
                break;
            }
            case 3: {
                z=x+y;
                break;
            }
            case 4: {
                z=x/y;
                break;
            }
            case 5: {
                cout << "Ciao!" << endl;
                break;
            }

            default: {
                cout << "Non ho capito la scelta." << endl;
            }
        }

        if (scelta > 0 && scelta < 5) {
            cout << endl << "il risultato è: " << z << endl << endl; 
        }
    }
    return 0;
}