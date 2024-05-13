algoritmo "Ex7"

var
   preco, preco_final: real
   codigo: inteiro

inicio
   escreval("Informe o preço do produto em reais: ")
   leia(preco)
   escreval("Informe o código da condição de pagamento (1, 2, 3 ou 4): ")
   leia(codigo)

   escolha codigo
   caso 1
      preco_final <- preco * 0.9
      escreva("O preço final é de R$", preco_final)
   caso 2
      preco_final <- preco * 0.85
      escreva("O preço final é de R$", preco_final)
   caso 3
      preco_final <- preco / 2
      escreva("O preço final são duas parcelas de R$", preco_final)
   caso 4
      preco_final <- (preco * 1.1) / 2
      escreva("O preço final são duas parcelas de R$", preco_final)
   fimescolha
   se (codigo<1) ou (codigo>4) entao
      escreva ("Pagamento invalido")
   fimse

fimalgoritmo