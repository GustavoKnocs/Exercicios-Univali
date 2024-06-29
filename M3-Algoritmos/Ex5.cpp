#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n, m, soma_matriz = 0;
    int maior_i, maior_j, menor_i, menor_j;
                
    cout<< "Informe a ordem da matriz(n x m)\n";
    do{
        cout << "Informe n: ";
        cin >> n;
    } while(n<=0 or n>5);

    do{
        cout << "Informe m: ";
        cin >> m;
    } while(m<=0 or m>5);

    int matriz[n][m];
    srand(time(0));
    
    for (int i =0; i<n; i++){
        for (int j =0; j<m; j++){
          matriz[i][j] = rand() % 11; 
        }

    }

    cout << "Matriz aleatoria:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout <<"["<< matriz[i][j] << "]";
        }
        cout << endl;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] % 2 == 1) {
                soma_matriz += matriz[i][j];
            }
        }
    }
    int maior_elemento = 0, menor_elemento = 11;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] > maior_elemento) {
                maior_elemento = matriz[i][j];
                maior_i = i;
                maior_j = j;
            }
            if (matriz[i][j] < menor_elemento) {
                menor_elemento = matriz[i][j];
                menor_i = i;
                menor_j = j;
            }
        }
    }

    cout<<"A soma dos numeros impares da matriz e: "<< soma_matriz <<"\n";
    cout<<"Maior elemento: "<< maior_elemento << " na posicao "<< maior_i + 1 <<"x"<< maior_j + 1<< "\n";
    cout<<"Menor elemento: "<< menor_elemento << " na posicao "<< menor_i + 1 <<"x"<< menor_j + 1 << "\n";

    return 0;
}