#include <iostream>

using namespace std;

int main ()
{
    int n, aux;
    float vet[n];

    do{
        cout << "Informe quantos numeros deseja informar(até 15): ";
        cin >> n;
    } while (n <= 0 or n > 15);

    cout << "Informe os numeros:";
    for (int i = 0; i < n; i++){
        cin >> vet[i];
    }
    
    cout << "--Vetor Original--" << endl;
    for (int i = 0; i < n; i++){
        cout << "[" << vet[i] << "]";
    }

    for (int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    cout << endl;
    cout << "--Vetor Ordenado--" << "\n";
    for (int i = 0; i < n; i++){
        cout << "[" << vet[i] << "]";
    }

    return 0;
}