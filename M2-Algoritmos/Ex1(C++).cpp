#include <iostream>


using namespace std;

int num, divi, soma, i;
char opcao;

int main()
{
    do{
        soma = 0;
        do{
            cout<<"Informe um numero inteiro e positivo: ";
            cin>>num;
            cin.ignore();
        } while (num <= 0);
        
        for (i = 1; i < num; i++) {
            if (num % i == 0){
                divi = i; 
                cout<<"divisores:"<<divi<<'\n';
                soma+=divi;
            }       
        } 

        if (soma == num){
            cout<<num<<" eh um numero perfeito!\n";
        }
        else{
            cout<<num<<" nao eh um numero perfeito!\n";   
        }
        do {
            cout << "Deseja informar mais um numero? (S/N): ";
            cin >> opcao;
            opcao = toupper(opcao);
        } while (opcao != 'S' && opcao != 'N');

    } while (opcao == 'S');

    return 0;
}