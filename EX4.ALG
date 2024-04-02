algoritmo "Ex4"

var
   x, fx: real

inicio
   Escreval ("Informe o valor de x:")
   leia (x)

   se (x <= 1) entao
      fx <- 1
      escreval ("O valor de f(x) é: ", fx)
   senao
      se (x <= 2) entao
         fx <- 2
         escreval ("O valor de f(x) é: ", fx)
      senao
         se (x <= 3) entao
            fx <- x^2
            escreval ("O valor de f(x) é: ", fx)
         senao
            fx <- x^3
            escreval ("O valor de f(x) é: ", fx)
         fimse
      fimse
   fimse
   

fimalgoritmo