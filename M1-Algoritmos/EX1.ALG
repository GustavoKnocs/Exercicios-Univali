algoritmo "Ex1"

var
   cent1, cent5, cent10, cent25, cent50, rea1: inteiro
  rcent1, rcent5, rcent10, rcent25, rcent50, valor_total: real

inicio
   Escreval ("Informe a quantidade de moedas de 1 centavo:")
   leia (cent1)
   Escreval ("Informe a quantidade de moedas de 5 centavos:")
   leia (cent5)
   Escreval ("Informe a quantidade de moedas de 10 centavos:")
   leia (cent10)
   Escreval ("Informe a quantidade de moedas de 25 centavos:")
   leia (cent25)
   Escreval ("Informe a quantidade de moedas de 50 centavos:")
   leia (cent50)
   Escreval ("Informe a quantidade de moedas de 1 real:")
   leia (rea1)

   rcent1 <- cent1 / 100
   rcent5 <- (cent5 * 5)/ 100
   rcent10 <- (cent10 * 10) / 100
   rcent25 <- (cent25 * 25) / 100
   rcent50 <- (cent50 * 50) / 100
   valor_total <- rcent1 + rcent5 + rcent10 + rcent25 + rcent50 + rea1

   escreva ("O valor economizado foi de: R$",valor_total:4:2)

fimalgoritmo