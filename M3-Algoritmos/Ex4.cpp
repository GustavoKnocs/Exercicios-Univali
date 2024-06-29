#include <iostream>

using namespace std;

int main()
{
   int n;

    do{
        cout << "Informe a ordem da matriz quadrada(ate 10): ";
        cin >> n;
    } while(n<0 or n>10);
    int matriz[n][n];

    cout << "Informe os elementos da matriz: ";
    for (int i =0; i<n; i++){
        for (int j =0; j<n; j++){
            cout << "Elemento "<< i+1 <<"x"<<j+1<<": ";
            cin >> matriz[i][j];
        }
    }

    bool matriz_permutacao = true;
    for (int i =0; i<n; i++){
        int cont_linha = 0;
        for (int j =0; j<n; j++){
            if (matriz[i][j] == 1) cont_linha++;
            else if (matriz[i][j] != 0) matriz_permutacao = false;
        }
        if(cont_linha > 1) matriz_permutacao = false;
    }

    for (int i =0; i<n; i++){
        int cont_coluna = 0;
        for (int j =0; j<n; j++){
            if (matriz[i][j] == 1) cont_coluna++;
            else if (matriz[i][j] != 0) matriz_permutacao = false;
        }
        if(cont_coluna > 1) matriz_permutacao = false;
    }

    if (!matriz_permutacao) cout << "Nao e uma matriz de permutacao\n";
    else cout << "E uma matriz de permutacao";
  
    return 0;
}