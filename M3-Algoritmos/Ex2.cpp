#include <iostream>

using namespace std;

int main()
{
    int vetA[10], vetB[10], indexB = 0;

    cout<<"Informe os elementos do vetor: \n";
    for (int i=0; i<10; i++){
        cout<<"elemento "<< i+1 <<": ";
        cin >> vetA[i];
    }

    for (int i=0; i<10; i++){
        bool nao_repete = true;
        for (int j=0; j<10; j++){
            if(i != j and vetA[i] == vetA[j]){ 
            nao_repete = false;
            vetB[i] = vetA[i];
            }
        }
        if (nao_repete) {
            vetB[indexB] = vetA[i];
            indexB++;
        }
    }

    for (int i=0; i<10; i++){
        cout << "[" << vetA[i] << "]";
    }
    cout << endl;
    for (int i=0; i<indexB; i++){
        cout << "[" << vetB[i] << "]";
    }

    return 0;
}