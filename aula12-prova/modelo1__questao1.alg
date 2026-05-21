algoritmo "semnome"
// Construa um algoritmo para receber a idade de uma pessoa e a quantidade
// de horas de sono por noite. Dependendo da faixa de idade e da
// quantidade de sono, o algoritmo deverá mostrar uma mensagem
// correspondente conforme a tabela:

// Faixa de Idade		  Condição	         	  Mensagem
// Até 12 anos 		  Sono abaixo de 8h      “Quantidade de sono insuficiente”
// Entre 13 e 59 anos  Sono entre 6h e 8h	    “Quantidade de sono adequada”
// 60 anos ou mais 	  Sono acima de 7h	    “Boa qualidade de descanso”
// Qualquer idade 	  Sono abaixo de 5h	    “Alerta de poucas horas de sono”
var
   idade, horas_sono: inteiro
inicio
  escreva("Entre com a idade: ")
  leia(idade)
  escreva("Entre com a quantidade de horas de sono: ")
  leia(horas_sono)
  se (idade<12)entao
    se(horas_sono<8)entao
      escreva("Quantidade de sono insuficiente")
    fimse
  senao
    se (idade<=59)entao
       se ((horas_sono>6) e (horas_sono<8))entao
         escreva("Quantidade de sono adequada")
       fimse
    senao
       se(horas_sono>7)entao
         escreva("Boa qualidade de descanso")
       fimse
    fimse
  fimse
  
  se(horas_sono<5)entao
    escreva("Alerta de poucas horas de sono")
  fimse
  

fimalgoritmo
