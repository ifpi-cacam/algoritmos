algoritmo "semnome"
// Função : Construa um algotritmo para receber capital inicial, taxa de juros e
// tempo, calcular e mostrar o montante final após t meses
// Obs.: use a função Exp(b, e) do Visual-G
// Autor : Nairon Viana
// Data : 09/04/2026
// Seção de Declarações 
var
   c, j, t, m: real
inicio
   escreva("Digite o capital inicial: ")
   leia(c)
   escreva("Digite a taxa de juros: ")
   leia(j)
   escreva("Digite o tempo: ")
   leia(t)
   m <- c* Exp(1+j, t)
   escreval("Após ", t, " meses teremos um montante total de: ", m)

fimalgoritmo
