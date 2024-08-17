#include <stdio.h>

int main() {
    int opcao;
    int resultado;
    int nota;
    int num1, num2, num3, num4;
    printf("Digite: ");
    scanf("%d", &opcao);

        switch(opcao){
           
            case 1:
             /*Leia um número inteiro, se o número for maior que 10 imprima 'MAIOR', do contrário imprima 'MENOR'*/
                printf("Digite um número: ");
                scanf("%d", &num1);
                if(num1 > 10){
                    printf("MAIOR");
                } else {
                    printf("MENOR");
                }
                break;

            case 2:
            /*Leia um número inteiro, se o número for 10 imprima '10', se for maior que 10 imprima 'MAIOR', do contrário imprima 'MENOR'*/
                printf("Digite um número: ");
                scanf("%d", &num1);
                if(num1 == 10){
                    printf("10");
                } else if (num1 > 10) {
                    printf("MAIOR");
                } else {
                    printf("MENOR");
                }
            break;
            case 3:
            /* Leia um número inteiro, se o número for PAR imprima 'PAR', do contrário imprima 'ÍMPAR'*/
                printf("Digite um número: ");
                scanf("%d", &num1);
                if(num1 % 2 == 0){
                    printf("PAR");
                } else {
                    printf("ÍMPAR");
                }
            break;
            case 4:
            /*Leia dois números inteiros e imprima como saída apenas o maior.*/
            printf("Digite um número: ");
                scanf("%d", &num1);
                printf("Digite outro número: ");
                scanf("%d", &num2);
                if(num1 > num2){
                    printf("%d", num1);
                } else {
                    printf("%d", num2);
                }

            break;
            case 5:
            /* Leia um número inteiro, se for múltiplo de dois multiplique o número por 5, se for múltiplo de três subtraia 1 do número*/
            printf("Digite um número: ");
            scanf("%d", &num1);
                if (num1 % 2 == 0) {
            printf("%d", num1 * 5);
            } else if (num1 % 3 == 0) {
            printf("%d", num1 - 1);
            }
            if(((num1 %  2) == 0) && ((num1 % 3) == 0)){
            resultado = num1*5-1;
            printf("%i", resultado);
            }
            break;
            case 6:
            /* Leia um número inteiro (no intervalo de 1 até 7 apenas) imprima o dia da semana correspondente, a semana começa no Domingo (para valores inválidos imprima: 'Erro'*/
            printf("Digite um número: ");
                scanf("%d", &num1);
                if(num1 > 7){
                    printf("Erro");
                } else if(num1 == 1){
                    printf("Domingo");
                } else if(num1 == 2){ 
                    printf("Segunda-feira");
                } else if(num1 == 3){
                    printf("Terça-feira");
                } else if(num1 == 4){
                    printf("Quarta-feira");
                } else if(num1 == 5){
                    printf("Quinta-feira");
                } else if(num1 == 6){
                    printf("Sexta-feira");
                } else if(num1 == 7){
                    printf("Sábado");
                }
            break;
            case 7:
            /*Leia um número inteiro (no intervalo de 0 até 23 apenas) imprima o período correspondente: Madrugada, Manhã, Tarde ou Noite.*/
            printf("Digite um número de 0 até 23: ");
            scanf("%d", &num1);
            if(num1 < 0 || num1 < 6){
                printf("Madrugada");
            } else if(num1 >= 6 && num1 < 12){
                printf("Manhã");
            } else if(num1 >= 12 && num1 < 18){
                printf("Tarde");
            } else if(num1 >= 18 && num1 < 23){
                printf("Noite");
            }
            break;
            case 9:
            /*Leia quatro números reais (no intervalo de 0 até 10), e calcule a média. Informe se a média é de um aluno: Aprovado, Reprovado ou Exame*/
            printf("Digite as 4 notas: ");
            scanf("%i", &num1);
            scanf("%i", &num2);
            scanf("%i", &num3);
            scanf("%i", &num4);
                nota = (num1 + num2 + num3 + num4)/4;
                if(nota >= 7){
                    printf("Aprovado");
                }
                else if((nota <= 7) && (nota > 1.7)){
                    printf("Exame");
                }
                else if(nota <= 1.7){
                    printf("Reprovado");
                }
            break;
            case 10:
            /*Leia 3 (três) números inteiros positivos e informe se um triângulo construído com essas medidas seria: Equilátero, Isósceles ou Escaleno.*/
            printf("Digite os 3 números para formar um triângulo: ");
                scanf("%i", &num1);
                scanf("%i", &num2);
                scanf("%i", &num3);
                if (num1 == num2 && num2 == num3) {
                    printf("Equilátero");
                } else if (num1 == num2 || num2 == num3 || num1 == num3) {
                    printf("Isósceles");
                } else if (num1 != num2 && num2 != num3 && num1 != num3) {
                    printf("Escaleno");
}
break;   
}
}

