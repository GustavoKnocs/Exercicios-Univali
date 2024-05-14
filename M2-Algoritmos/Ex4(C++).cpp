#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigo_representante;
    float total_itens, total_vendas = 0, valor_pedido, comissao, total_comissao = 0;
    float total_representante1 = 0, total_representante2 = 0, total_representante3 = 0, total_representante4 = 0;
    char continuar;

    cout << fixed << setprecision(2);

    do {
        do{
        cout << "Digite o codigo do representante (1 a 4): ";
        cin >> codigo_representante;
        } while(codigo_representante < 1 or codigo_representante > 4);
        
        do{
        cout << "Digite o total de itens do pedido: ";
        cin >> total_itens;
        } while(total_itens < 0);

        do{
        cout << "Digite o valor total da venda: ";
        cin >> valor_pedido;
        } while (valor_pedido < 0);
        
        if (total_itens < 20)
            comissao = valor_pedido * 0.10;
        else if (total_itens >= 20 && total_itens <= 49)
            comissao = valor_pedido * 0.15;
        else if (total_itens >= 50 && total_itens <= 74)
            comissao = valor_pedido * 0.20;
        else
            comissao = valor_pedido * 0.25;

        total_vendas += valor_pedido;
        total_comissao += comissao;

        switch (codigo_representante) {
            case 1:
                total_representante1 += comissao;
                break;
            case 2:
                total_representante2 += comissao;
                break;
            case 3:
                total_representante3 += comissao;
                break;
            case 4:
                total_representante4 += comissao;
                break;
        }

        cout << "Valor da comissão: " << comissao << endl;
        
        do{
        cout << "Deseja informar mais um pedido? (S/N): ";
        cin >> continuar;
        continuar = toupper(continuar);
        } while(continuar != 'S' and continuar != 'N');
   
    } while (continuar != 'N' && continuar != 'n');

    cout << "Total de vendas dos pedidos processados: " << total_vendas << endl;
    cout << "Total de comissoes para o representante 1: " << total_representante1 << endl;
    cout << "Total de comissoes para o representante 2: " << total_representante2 << endl;
    cout << "Total de comissoes para o representante 3: " << total_representante3 << endl;
    cout << "Total de comissoes para o representante 4: " << total_representante4 << endl;
    cout << "Total de comissoes que a companhia pagou aos seus representantes: " << total_comissao << endl;

    return 0;
}