algoritmo "Ex2"


var

  quant_frango : inteiro
  anel_ident, anel_alim, gasto_total: real

inicio

  Escreval ("Informe a quantidade de Frangos:")
  leia(quant_frango)
  anel_ident <- 4.00
  anel_alim <- 2*3.50
  gasto_total <- quant_frango * (anel_ident + anel_alim)
  Escreva ("O gasto total será de: R$",gasto_total:4:2)

fimalgoritmo
