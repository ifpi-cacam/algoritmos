algoritmo "semnome"
// Função : este algoritmo recebe um valor de velocidade em m/s calcula e mostra o correspondente
// em km/h usando a formula: kmh = ms*3.6
// Autor : Nairon Viana
// Data : 09/04/2026
// Seção de Declarações
var
  vel_em_ms, vel_em_km_h: real
inicio
// Seção de Comandos
   escreval("Digite a velocidade em metros por segundos")
   leia(vel_em_ms)
   vel_em_km_h <- vel_em_ms * 3.6
   escreval("O valor em km/h correspondente a ", vel_em_ms, "m/s é: ", vel_em_km_h, "km/h" )
fimalgoritmo
