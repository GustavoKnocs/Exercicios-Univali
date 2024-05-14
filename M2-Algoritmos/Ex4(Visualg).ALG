Algoritmo "Ex4"
Var
   codigo_representante, total_itens, total_vendas, valor_pedido, comissao, total_comissao, total_representante1, total_representante2, total_representante3, total_representante4: real
   continuar: caractere

Inicio
   total_vendas <- 0
   total_representante1 <- 0
   total_representante2 <- 0
   total_representante3 <- 0
   total_representante4 <- 0

   repita
      repita
         Escreval("Digite o código do representante (1 a 4): ")
         Leia(codigo_representante)
      ate(codigo_representante >= 1) e (codigo_representante <= 4)
      repita
         Escreval("Digite o total de itens do pedido: ")
         Leia(total_itens)
      ate(total_itens >= 0)
      repita
         Escreva("Digite o valor total da venda: ")
         Leia(valor_pedido)
      ate(valor_pedido >= 0)
      Se (total_itens < 20) Então
         comissao <- valor_pedido * 0.10
      Senao
         Se (total_itens >= 20) E (total_itens <= 49) Então
            comissao <- valor_pedido * 0.15
         Senao
            Se (total_itens >= 50) E (total_itens <= 74) Então
               comissao <- valor_pedido * 0.20
            Senao
               comissao <- valor_pedido * 0.25
            FimSe
         FimSe
      FimSe

      total_vendas <- total_vendas + valor_pedido
      total_comissao <- total_comissao + comissao

      Se (codigo_representante = 1) Então
         total_representante1 <- total_representante1 + comissao
      Senao
         Se (codigo_representante = 2) Então
            total_representante2 <- total_representante2 + comissao
         Senao
            Se (codigo_representante = 3) Então
               total_representante3 <- total_representante3 + comissao
            Senao
               total_representante4 <- total_representante4 + comissao
            FimSe
         FimSe
      FimSe

      Escreval("Valor da comissao: ", comissao,"R$")
      repita
         Escreval("Deseja informar mais um pedido? (S/N): ")
         Leia(continuar)
         continuar <- maiusc(continuar)
      ate (continuar = "S") ou (continuar = "N")

   ate (continuar = "N")

   Escreval("Total de vendas dos pedidos processados: ", total_vendas)
   Escreval("Total de comissoes para o representante 1: ", total_representante1,"R$")
   Escreval("Total de comissoes para o representante 2: ", total_representante2,"R$")
   Escreval("Total de comissoes para o representante 3: ", total_representante3,"R$")
   Escreval("Total de comissoes para o representante 4: ", total_representante4,"R$")
   Escreval("Total de comissoes que a companhia pagou aos seus representantes: ", total_comissao)
FimAlgoritmo