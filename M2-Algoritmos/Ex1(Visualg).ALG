algoritmo "Ex1"

var
   num, i, divi, soma: inteiro
   opcao: caractere

inicio


   repita
      soma <- 0
      repita
         Escreva("Informe um número inteiro e positivo: ")
         leia(num)
      ate (num > 0)
      i <- 1
      enquanto (i < num) faca
         se (num mod i = 0) entao
            divi <- i
            escreval ("divisores:", divi)
            soma <- soma + divi
         fimse
         i <- i + 1
      fimenquanto
      se (soma=num) entao
         escreval(num, " é um número perfeito!")
      senao
         escreval(num, " não é número perfeito!")
      fimse
      repita
         escreval("deseja informar mais um número?(S/N)")
         leia(opcao)
         opcao <- maiusc(opcao)
      ate (opcao = "S") ou (opcao = "N")
   ate (opcao = "N")
fimalgoritmo
