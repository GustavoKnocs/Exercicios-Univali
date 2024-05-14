algoritmo "Ex2"
var
   n, i, denominador: inteiro
   soma: real

inicio
   n <- 0
   denominador <- 2
   soma <- 0.0
   repita
      escreva("Informe o termo da sequencia: ")
      leia(n)
   ate(n>0)
   para i de 1 ate n faca
      se (i MOD 2 = 1) entao
         soma <- soma + (i / denominador)
         escreva(" + ", i, "/", denominador)
      senao
         soma <- soma - (i / denominador)
         escreva(" - ", i, "/", denominador)
      fimse
      denominador <- denominador * 2
   fimpara

   escreval()
   escreva("A soma dos ",n, " termos da sequencia eh: ", soma)
fimalgoritmo