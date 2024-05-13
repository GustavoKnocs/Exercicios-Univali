algoritmo "Ex6"

var

   idade, temp_serv: inteiro
   sexo: caractere

inicio
   escreval("Informe a sua idade: ")
   leia(idade)
   escreval("Informe o seu sexo (M ou F): ")
   leia(sexo)
   escreval("Informe o tempo que você já serviu de trabalho em anos: ")
   leia(temp_serv)
   escolha (sexo)
   caso "M"
      se (idade>=65) e (temp_serv>=30) entao
         escreva("Apto a aposentadoria")
      senao
         escreva("Inapto a aposentadoria")
      fimse
   caso "F"
      se (idade>=60) e (temp_serv>=25) entao
         escreva("Apta a aposentadoria")
      senao
         escreva("Inapta a aposentadoria")
      fimse
   fimescolha

fimalgoritmo