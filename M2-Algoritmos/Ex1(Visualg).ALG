algoritmo "Ex1"

var
   num, i, divi, soma: inteiro
   opcao: caractere

inicio


   repita
      soma <- 0
      repita
         Escreva("Informe um n�mero inteiro e positivo: ")
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
         escreval(num, " � um n�mero perfeito!")
      senao
         escreval(num, " n�o � n�mero perfeito!")
      fimse
      repita
         escreval("deseja informar mais um n�mero?(S/N)")
         leia(opcao)
         opcao <- maiusc(opcao)
      ate (opcao = "S") ou (opcao = "N")
   ate (opcao = "N")
fimalgoritmo
