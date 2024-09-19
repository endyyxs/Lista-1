Algoritmo "maior_menornum"
var
    num, maior, menor: inteiro

inicio
    maior <- -9999 
    menor <- 9999 

        escreva("Digite um número positivo (ou -1 para encerrar): ")
        leia(num)

            se num > maior entao
                maior <- num
            fimse

            se num < menor entao
                menor <- num
            fimse
        fimse
    ate que num = -1

    escreval("Maior número digitado: ", maior)
    escreval("Menor número digitado: ", menor)

Fimalgoritmo