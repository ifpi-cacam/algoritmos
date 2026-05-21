algoritmo "semnome"
// Marcos recebeu uma lista de compras de sua mãe com 3 produtos,
// bem como um valor em reais para gastar no mercado. Para cada produto,
// Marcos escolhe uma determinada quantidade de itens. Construa um algoritmo
// para receber o valor em reais dado pela mãe de Marcos, os nomes de cada
// produto, seus preços e a sua quantidade. O algoritmo deve mostrar o valor
// parcial gasto com cada um dos produtos, bem como o total gasto por Marcos.
// O algoritmo deve verificar e mostrar a quantia dada pela mãe de Marcos é
// suficiente para que ele possa comprar tais produtos (verificar se o valor
// total da compra é menor que a quantidade em dinheiro de Marcos).
var
nome1, nome2, nome3: caractere
preco1, preco2, preco3: real
quant1, quant2, quant3: inteiro
valor_parcial_1, valor_parcial_2, valor_parcial_3: real
valor_total: real
valor_a_gastar: real
inicio

  escreval("Digite o nome do produto 1: ")
  leia(nome1)
  escreval("Digite o preco do produto 1: ")
  leia(preco1)
  escreval("Digite a quantidade do produto 1: ")
  leia(quant1)
  valor_parcial_1 <- preco1*quant1

  escreval("Digite o nome do produto 2: ")
  leia(nome2)
  escreval("Digite o preco do produto 2: ")
  leia(preco2)
  escreval("Digite a quantidade do produto 2: ")
  leia(quant2)
  valor_parcial_2 <- preco2*quant2

  escreval("Digite o nome do produto 3: ")
  leia(nome3)
  escreval("Digite o preco do produto 3: ")
  leia(preco3)
  escreval("Digite a quantidade do produto 3: ")
  leia(quant3)
  valor_parcial_3 <- preco3*quant3
  
  escreval("Digite o valor que Marcos possui para gastar: ")
  leia(valor_a_gastar)
  
  escreval("Valor parcial gasto com produto 1 - ", nome1, " - ", valor_parcial_1)
  escreval("Valor parcial gasto com produto 2 - ", nome2, " - ", valor_parcial_2)
  escreval("Valor parcial gasto com produto 3 - ", nome3, " - ", valor_parcial_3)
  
  valor_total <- valor_parcial_1 + valor_parcial_2 + valor_parcial_3
  escreval("Valor total para os 3 produtos: ", valor_total)
  
  se(valor_a_gastar>=valor_total)entao
    escreval("O valor dado pela mãe de Marcos é suficiente para a compra!")
  senao
    escreval("O valor dado pela mãe de Marcos é insuficiente para a compra!")
  fimse


fimalgoritmo
