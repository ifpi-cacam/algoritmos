algoritmo "semnome"
var
   N, C, D, U, R, SOMA: inteiro
inicio

  escreva("Digite um numero com 3 algarismos: ")
  leia(N)
  // Cálculo da centena
  C <- N\100
  // Cálculo da dezena
  R <- N - C*100
  D <- R\10
  // Cálculo da unidade
  U <- R - D*10
  
  // Cálculo da soma
  SOMA <- C + D + U
  
  escreval("Número: ", N)
  escreval("Centena: ", C)
  escreval("Dezena: ", D)
  escreval("Unidade: ", U)
  escreval("A soma entre Centena, Dezena e Unidade é: ", SOMA)
fimalgoritmo
