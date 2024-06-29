#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, quant_mulher = 0, quant_homem = 0;
    char opcao;
    string nome_maior_idade, nome_menor_idade;

    do {
        cout << "Deseja informar quantas pessoas? (1 a 15): ";
        cin >> n;
    } while (n <= 0 or n > 15);

    vector<int> idade(n);
    vector<char> sexo(n);
    vector<string> nome(n);

    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Informe o nome: ";
        getline(cin, nome[i]);

        do {
            cout << "Informe a idade: ";
            cin >> idade[i];
        } while (idade[i] < 0 or idade[i] > 125);

        do {
            cout << "Informe o sexo (F/M): ";
            cin >> sexo[i];
            sexo[i] = toupper(sexo[i]);
            if (sexo[i] == 'F')
                quant_mulher += 1;
            else
                quant_homem += 1;
        } while (sexo[i] != 'F' and sexo[i] != 'M');

        cin.ignore();
    }

    int maior_idade = 0.0, menor_idade = 0.0, soma_idade = 0.0;
    float media = 0.0;

    do {
        cout << "----Qual deseja consultar?---- \n";
        cout << "A- Quantidade de pessoas e seus dados. \n";
        cout << "B- Os dados da pessoa mais velha. \n";
        cout << "C- Nome e idade da mulher mais jovem. \n";
        cout << "D- Media da idade dos homens. \n";
        cout << "E- Sair. \n";

        do {
            cout << "Digite a opcao: ";
            cin >> opcao;
            opcao = toupper(opcao);
        } while (opcao != 'A' and opcao != 'B' and opcao != 'C' and opcao != 'D' and opcao != 'E');

        switch (opcao) {
            case 'A': {
                cout << "Quantidade de pessoas consultadas: " << n << "\n";
                cout << "------------------------------\n";
                for (int i = 0; i < n; i++) {
                    cout << "Nome: " << nome[i] << "\n";
                    cout << "Idade: " << idade[i] << "\n";
                    cout << "Sexo: " << sexo[i] << "\n";
                    cout << "------------------------------\n";
                }
                break;
            }

            case 'B': {
                maior_idade = 0.0;
                for (int i = 0; i < n; i++) {
                    if (idade[i] > maior_idade) {
                        maior_idade = idade[i];
                        nome_maior_idade = nome[i];
                    }
                }
                cout << "Nome: " << nome_maior_idade << "\n";
                cout << "Idade: " << maior_idade << "\n";
                break;
            }

            case 'C': {
                if (quant_mulher == 0) {
                    cout << "Nenhuma mulher cadastrada!\n";
                } else {
                    menor_idade = 125;
                    for (int i = 0; i < n; i++) {
                        if (idade[i] < menor_idade) {
                            menor_idade = idade[i];
                            nome_menor_idade = nome[i];
                        }
                    }
                    cout << "Nome: " << nome_menor_idade << "\n";
                    cout << "Idade: " << menor_idade << "\n";
                }
                break;
            }

            case 'D': {
                soma_idade = 0.0;
                media = 0.0;
                if (quant_homem == 0) {
                    cout << "Nenhum homem cadastrado!\n";
                } else {
                    for (int i = 0; i < n; i++) {
                        if (sexo[i] == 'M') {
                            soma_idade += idade[i];
                        }
                    }
                    media = soma_idade / quant_homem;
                    cout << "A media de idade dos homens é: " << media << "\n";
                }
                break;
            }

            case 'E':
                cout << "Saindo do programa...\n";
                break;

            default:
                cout << "Opcao inválida.\n";
                break;
        }

    } while (opcao != 'E');

    return 0;
}


