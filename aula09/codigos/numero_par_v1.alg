algoritmo "numero_par"
// Função : Recebe um número inteiro, mostra se o número é ímpar ou par
// Autor : Nairon Viana
// Data : 23/04/2026
// Seção de Declarações
var
  n, r: inteiro
inicio
// Seção de Comandos
escreval("Digite o número")
leia(n)
r <- n mod 2
se (r = 0) entao
  escreval(n, " é par!")
fimse
se (r = 1) entao
  escreval(n, " é ímpar")
fimse

fimalgoritmo
