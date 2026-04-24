algoritmo "idade"
// Função : Recebe a idade de um usuário, mostrar se é maior ou menor de idade
// se for menor de idade mostra quantos anos faltam para a maior idade
// Autor : Nairon Viana
// Data : 23/04/2026
// Seção de Declarações 
var
  idade, anos: inteiro
inicio
// Seção de Comandos 
escreval("Digite a idade do usuário")
leia(idade)
se(idade>=18) entao
  escreval("É maior de idade")
senao
  escreval("É menor de idade")
  anos <- 18 - idade
  escreval("Faltam ", anos, " anos para a maior idade")
fimse
fimalgoritmo
