algoritmo "Ex3"


var

   alt_somb_predio, alt_somb_pessoa, alt_pessoa, alt_predio:real

inicio

   Escreval ("Informe a sua altura em metros:")
   leia (alt_pessoa)
   Escreval ("Informe o tamanho de sua sombra em metros:")
   leia (alt_somb_pessoa)
   Escreval ("Informe o tamanho da sombra do predio em metros:")
   leia (alt_somb_predio)

   alt_predio <- (alt_pessoa * alt_somb_predio)/ alt_somb_pessoa
   escreva ("A altura do predio e de:", alt_predio," metros")


fimalgoritmo