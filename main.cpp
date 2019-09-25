#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned int filaPersona = 1;
    unsigned int cantidadPersonas;
    while (cin >> cantidadPersonas) {
        map <string, int> balanceado;
        vector <string> nombres;
        for (int i = 0; i < cantidadPersonas; ++i) {
            string nombre;
            cin >> nombre;
            balanceado[nombre] = 0;
            nombres.push_back(nombre);
        }
        for (int i = 0; i < cantidadPersonas; ++i) {
            string nombre;
            cin >> nombre;
            int dineroGastado, numeroPersonas;
            cin >> dineroGastado >> numeroPersonas;
            if (numeroPersonas == 0) {
                continue;
            }
            int regalo = dineroGastado / numeroPersonas;
            balanceado[nombre] -= regalo * numeroPersonas;
            for (int j = 0; j < numeroPersonas; ++j) {
                cin >> nombre;
                balanceado[nombre] += regalo;
            }
        }
        if (filaPersona++ > 1) {
            cout << endl;
        }
        for (int i = 0; i < cantidadPersonas; ++i) {
            cout << nombres[i] << " " << balanceado[nombres[i]] << endl;
        }
    }

    return 0;
    
}