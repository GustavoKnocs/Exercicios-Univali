#include <iostream>

using namespace std;

int main()
{
    int vet[10], vet_atualizado[10], p, x;

    cout<<"Informe os elementos do vetor: \n";
    for (int i=0; i<9; i++){
        cout<<"elemento "<< i+1 <<": ";
        cin >> vet[i];
    }

    do{
        cout<<"Informe a posição que ira substituir um valor: ";
        cin>>p;
    } while(p < 1 or p > 9);
    p--;

    cout<<"Informe o valor que sera adicionado: ";
    cin>>x;

    for (int i=0; i<9; i++){
       vet_atualizado[i] = vet[i];
         if(i == p) vet_atualizado[i] = x;
    }
    

    for (int i=0; i<9; i++){
        cout << "[" << vet[i] << "]";
    }
    cout << endl;
    for (int i=0; i<9; i++){
        cout << "[" << vet_atualizado[i] << "]";
    }


        
    
    






    return 0;
}