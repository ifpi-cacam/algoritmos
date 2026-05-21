algoritmo "semnome"
// Uma academia deseja calcular o valor mensal que um aluno deverá pagar.
// Construa um algoritmo para receber: Nome do aluno, Idade e Valor base
// da mensalidade. O algoritmo deverá aplicar descontos conforme a idade:

// Faixa de Idade    Desconto
// Até 17 anos 	      20%
// Entre 18 e 59 anos  10%
// 60 anos ou mais     30%

// O algoritmo deve mostrar: Nome do aluno, Idade, Valor original da
// mensalidade, Valor do desconto e Valor final a pagar.var
var
  desconto, valor_mensal, valor_base: real
  nome_aluno: caractere
  idade_aluno: inteiro

inicio
  escreval("Nome do aluno: ")
  leia(nome_aluno)
  escreval("Valor base mensalidade: ")
  leia(valor_base)
  escreval("Idade: ")
  leia(idade_aluno)
  
  se(idade_aluno<=17)entao
    desconto <- 0.20
  senao
    se(idade_aluno<=59)entao
      desconto <-0.10
    senao
      desconto <-0.30
    fimse
  fimse
  
  escreval("Nome do aluno: ", nome_aluno)
  escreval("Idade do aluno: ", idade_aluno)
  escreval("Valor original mensalidade: ", valor_base)
  escreval("Valor do desconto: ", valor_base*desconto)
  valor_mensal <- valor_base - valor_base*desconto
  escreval("Valor final da mensalidade: ", valor_mensal)

fimalgoritmo
