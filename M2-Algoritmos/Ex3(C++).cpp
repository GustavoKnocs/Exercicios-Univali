#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int maior = 10, menor = 0, soma = 0, divi_4 = 0;
char opcao;

int main() 
{
    cout<<"presione 'enter' para iniciar o sorteio de 0 a 10";
    getchar();
    
    srand((unsigned)time(0)); 
    
    for (int i = 0; i < 15; ++i) {
        
        int aleatorio = rand() % (maior-menor+1) + menor; 
        cout << "Numero Aleatorio " << i+1 << " = " << aleatorio << endl;
        
        if (aleatorio % 4 == 0){
            divi_4++;
        }
        if (aleatorio % 2 == 1){
            soma+=aleatorio;
        }
    }

    cout << "quantidade de numeros divisiveis por 4 e: "<<divi_4<<"\n";
    cout << "a soma dos numeros impares é: "<<soma<<"\n";

    return 0;
}