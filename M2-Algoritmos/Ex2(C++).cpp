#include <iostream>

using namespace std;

int n, denominador=2, termos;
float soma = 0.0;

int main ()
{
    do{
    cout<<"Informe o termo da sequencia: ";
    cin>>n;
    }while (n<=0);
    
    for (int i = 1; i <= n; i++, denominador *= 2) {
        if (i % 2 == 1) {
            soma += static_cast<float>(i) / denominador;
            cout << " + "<<i << "/" << denominador <<"";
        }
        else{
            soma -= static_cast<float>(i) / denominador;
            cout << " - "<< i << "/" << denominador <<"";
        }
    }
    cout<<"\n";
    cout<< "A soma dos "<<n<<" termos da sequencia eh: "<<soma<< endl;

    return 0;
}