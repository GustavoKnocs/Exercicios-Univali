algoritmo "Ex3"
var
   num_aleatorio,maior, menor, soma, divi_4, i: inteiro
   opcao: caractere

inicio
   maior <- 10
   menor <- 0
   soma <- 0
   divi_4 <- 0

   escreva("Pressione 'enter' para iniciar o sorteio de 0 a 10: ")
   leia(opcao)

   para i de 1 ate 15 faca
      aleatorio 0, 10
      leia (num_aleatorio)
      aleatorio off
      escreva("Numero Aleatorio ", i, " = ", aleatorio, "\n")

      se (num_aleatorio MOD 4 = 0) entao
         divi_4 <- divi_4 + 1
      fimse
      se (num_aleatorio MOD 2 = 1) entao
         soma <- soma + num_aleatorio
      fimse
   fimpara

   escreval("Quantidade de numeros divisiveis por 4: ", divi_4)
   escreva("A soma dos numeros impares e: ", soma)
fimalgoritmo