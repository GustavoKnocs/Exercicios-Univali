#include <iostream>

using namespace std;

int main ()
{
    int n, codigo_praia[0];
    float renda[0.0];
    do{
        cout << "Informe quantos turistas serão informados(até 3000): ";
        cin >> n;
    } while(n <= 0 or n > 3000);

    for(int i = 0; i < n; i++){
        cout << "Turista " << i + 1 <<"\n";
        do{
            cout << "Informe o código de sua praia preferida(1 a 42): ";
            cin >> codigo_praia[i];
        } while (codigo_praia[i] <= 0 or codigo_praia[i] > 42);
        do{
            cout << "Informe a renda mensal: ";
            cin >> renda[i];
        } while (renda[i] < 0.0);
   
    }

    return 0;
}