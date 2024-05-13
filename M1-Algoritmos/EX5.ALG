algoritmo "Ex5"


var

   idade: inteiro
   peso, gotas: real

inicio
   escreval("Informe a sua idade:")
   leia (idade)
   escreval("Informe o seu peso em kg:")
   leia (peso)

   se (idade>=12) e (peso>=60)entao
      gotas <- (1000/500)*20
      escreva("Você deve tomar", gotas," gotas do medicamento")
   senao
      se (idade>=12) e (peso<60)entao
         gotas <- (875/500)*20
         escreva("Você deve tomar", gotas," gotas do medicamento")
      senao
         se (idade<12) e (peso>30)entao
            gotas <- (750/500)*20
            escreva("Você deve tomar", gotas," gotas do medicamento")
         senao
            se (idade<12) e (peso>=24.1)e (peso<=30)entao
               gotas <- (500/500)*20
               escreva("Você deve tomar", gotas," gotas do medicamento")
            senao
               se (idade<12) e (peso>=16.1)e (peso<=24)entao
                  gotas <- (375/500)*20
                  escreva("Você deve tomar", gotas," gotas do medicamento")
               senao
                  se (idade<12) e (peso>=9.1)e (peso<=16)entao
                     gotas <- (250/500)*20
                     escreva("Você deve tomar", gotas," gotas do medicamento")
                  senao
                     se (idade<12) e (peso>=5)e (peso<=9)entao
                        gotas <- (125/500)*20
                        escreva("Você deve tomar", gotas," gotas do medicamento")
                     senao
                        se (idade<12) e (peso<5)entao
                           escreva("O uso deste medicamento não é recomendado")
                        senao

                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse


fimalgoritmo