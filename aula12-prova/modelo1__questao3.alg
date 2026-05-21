algoritmo "semnome"
// Questão 3) 3,0pts
// Uma fábrica produz caixas contendo garrafas de refrigerante. Cada caixa comporta 12 garrafas.
// Construa um algoritmo para:

// Receber a quantidade total de garrafas produzidas

// Calcular quantas caixas completas serão formadas

// Calcular quantas garrafas sobrarão sem encaixe em caixas completas
// O algoritmo deverá mostrar:

// Quantidade de caixas completas

// Quantidade de garrafas restantes
// Exemplo:

// Entrada: 50 garrafas

// Saída:
// 4 caixas completas
// 2 garrafas restantes
var
num_garrafas, num_caixas, garrafas_sobram: inteiro
inicio
 escreval("Digite a quantidade de garrafas")
 leia(num_garrafas)
 num_caixas <- num_garrafas \ 12
 garrafas_sobram <- num_garrafas - 12*num_caixas
 escreval(num_caixas, " caixas completas")
 escreval(garrafas_sobram, " garrafas restantes")

fimalgoritmo
