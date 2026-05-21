algoritmo "semnome"
// Uma pequena papelaria está realizando vendas de materiais para escritórios.
// Um cliente deseja comprar diferentes tipos de produtos e o atendente precisa
// verificar se o valor disponível no cartão do cliente será suficiente para
// finalizar a compra. Construa um algoritmo para receber:
// 1) O limite disponível no cartão do cliente
// 2) O nome de 3 produtos
// 3) O preço de cada produto
// 4) A quantidade desejada de cada item

// O algoritmo deverá:
// a) Calcular o valor total gasto com cada produto
// b) Mostrar o subtotal de cada item comprado
// c) Calcular o valor total geral da compra
// d) Verificar se o limite do cartão é suficiente para efetuar o pagamento
// Ao final o programa deverá mostrar:
// ** Nome de cada produto
// ** Quantidade comprada
// ** Valor parcial de cada produto
// ** Valor total da compra
// Além disso: Caso o limite seja suficiente, mostrar a mensagem:
// “Compra autorizada” e também o limite restante no cartão. Caso o limite não
// seja suficiente, mostrar a mensagem: “Limite insuficiente para realizar a
// compra” e informar o valor que ultrapassou o limite disponível
var
  limite_cartao: real
  nome1, nome2, nome3: caractere
  preco1, preco2, preco3: real
  quant1, quant2, quant3: inteiro
  valor_parcial_1, valor_parcial_2, valor_parcial_3: real
  total: real
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

  escreval("Digite o limite do cartão para gasto: ")
  leia(limite_cartao)

  escreval("Valor parcial gasto com produto 1 - ", nome1, " - ", valor_parcial_1)
  escreval("Valor parcial gasto com produto 2 - ", nome2, " - ", valor_parcial_2)
  escreval("Valor parcial gasto com produto 3 - ", nome3, " - ", valor_parcial_3)

  total <- valor_parcial_1 + valor_parcial_2 + valor_parcial_3
  escreval("Valor total para os 3 produtos: ", total)

  se(limite_cartao>=total)entao
    escreval("Compra autorizada")
  senao
    escreval("Limite insuficiente para realizar a compra")
  fimse


fimalgoritmo
