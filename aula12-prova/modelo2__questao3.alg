algoritmo "semnome"
// Um corredor está treinando em uma pista reta de atletismo. A pista possui
// um comprimento fixo em metros e, sempre que o corredor chega ao final da
// pista, ele imediatamente retorna correndo no sentido contrário, repetindo
// esse movimento de ida e volta continuamente. Construa um algoritmo em para:
// a) Receber o tamanho da pista em metros;
// Receber a quantidade total de metros que o corredor percorrerá durante
// o treino.
// O algoritmo deverá calcular e mostrar em qual posição da pista o corredor
// estará ao final do percurso.
// Considere que:
// 1) posição inicial do corredor é o metro 0;
// 2) Ao atingir o final da pista ele retorna no sentido contrário;
// 3) O corredor nunca sai dos limites da pista
// Exemplo:
// Tamanho da pista: 10 metros e Distância percorrida: 32 metros
// Explicação: Após os ciclos completos, restam 2 metros no sentido
// de volta, logo a posição final é: 8 metros. O programa deverá
// mostrar a posição final do corredor na pista.var

var
  tamanho, quantidade, posicao_final: inteiro
  quantidade_voltas: inteiro
inicio
 escreval("Digite o tamanho da pista (metros)")
 leia(tamanho)
 escreval("Digite a quantidade que o corredor percorrerá (metros)")
 leia(quantidade)
 quantidade_voltas <- quantidade\tamanho
 escreval("Quantidade de voltas: ", quantidade_voltas)

fimalgoritmo
