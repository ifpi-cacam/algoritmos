algoritmo "maior_menor_v1"
// Função : Construa um algoritmo para receber dois números inteiros, mostrar
// qual o maior, qual o menor ou se os números são iguais
// Autor : Nairon Viana
// Data : 23/04/2026
// Seção de Declarações 
var
  n1, n2: inteiro
inicio
escreval("Digite 1o num")
leia(n1)
escreval("Digite 2o num")
leia(n2)
se (n1>n2) entao
  escreval(n1, " é maior que ", n2)
senao
  se (n2>n1) entao
    escreval(n2, " é maior que ", n1)
  senao
    escreval("Os números são iguais = ", n1)
  fimse
fimse
fimalgoritmo
