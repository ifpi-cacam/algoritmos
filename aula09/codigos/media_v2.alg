algoritmo "media_v2.0"
// Função : Recebe as 2 notas de um aluno, calcula e mostra a média
// e mostra a situação do aluno - APR, EFI, REP
// Autor : Nairon S. Viana
// Data : 23/04/2026
// Seção de Declarações
var
  n1, n2, m: real
inicio
// Seção de Comandos
  escreval("Digite a 1a nota: ")
  leia(n1)
  escreval("Digite a 2a nota: ")
  leia(n2)
  m <- (n1+n2)/2
  escreval("Média do aluno: ", m)

  se (m>=7.0) entao
    escreval("APROVADO!")
  fimse

  se ((m<7.0) e (m>=4.0) ) entao
    escreval("EXAME FINAL!")
  fimse

  se (m<4.0) entao
    escreval("REPROVADO!")
  fimse

fimalgoritmo
