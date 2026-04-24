algoritmo "idade_votar"
// Função : Recebe a idade de um usuário, mostrar se é maior ou menor de idade
// se for menor de idade mostra quantos anos faltam para a maior idade
// além disso, mostra se o usuário está ou não apto a votar
// se não estiver apto a votar mostra quantos anos faltam para poder votar
// Autor : Nairon Viana
// Data : 23/04/2026
// Seção de Declarações
var
  idade, anos, votar: inteiro
inicio
// Seção de Comandos
escreval("Digite a idade do usuário")
leia(idade)
se(idade>=18) entao
  escreval("É maior de idade")
  escreval("Está apto a votar")
senao
  escreval("É menor de idade")
  anos <- 18 - idade
  escreval("Faltam ", anos, " anos para a maior idade")
  se (idade>=16) entao
    escreval("Está apto a votar")
  senao
    escreval("Não está apto a votar")
    votar <- 16 - idade
    escreval("Faltam ", votar, " anos para estar apto a votar")
  fimse
fimse
fimalgoritmo
