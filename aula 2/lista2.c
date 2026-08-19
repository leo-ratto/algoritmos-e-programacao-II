# include <stdio.h>
# include <string.h>

//Exercício 01
/*
Escreva um programa que solicite ao aluno sua média (de 0.0 a 10.0) e a sua porcentagem de
frequência (de 0 a 100%).
*/
/*
int main(){
    
float media = 11;
unsigned int freq = 101;

while ((media > 10 || media < 0) || (freq > 100 || freq <0)){
    

printf("\nInsira o valor da média do semestre: ");
scanf("%f", &media);

printf("Insira a frequência de presença em %%: ");
scanf("%u", &freq);

if ((media > 10 || media < 0) || (freq > 100 || freq <0)){
    
printf("\nUm ou mais valores inseridos inválidos. Tente novamente\n");
}
}
if (freq < 75){
    printf("\nO aluno foi REPROVADO\n");
}
else if (media < 6){
    printf("\nO aluno foi para EXAME\n");
}
else{
    printf("\nO aluno foi APROVADO\n");
}

return 0;
}
*/

//Exercício 02
/*
Um triângulo possui 3 lados com tamanhos a, b e c. Para que um triângulo exista, um lado deve ser menor que a soma dos outros dois, ou seja, as seguintes condições devem ser satisfeitas:
- a < b + c
- b < a + c
- c < a + b
Desenvolva um programa que:
- Solicite que o usuário digite os tamanhos dos lados do triângulo (a, b e c).
- Verifique se existe um triângulo com estes lados.
- Apresente na tela o resultado.
*/
/*
int main(){
    float lados[3];
    
    for(int i = 1; i <=3; i++){
        printf("Insira o valor do lado %d: ", i);
        scanf("%f", &lados[i-1]);
    }
    
    if (lados[0] < (lados[1] + lados[2]) && lados[1] < (lados[0] + lados[2]) && lados[2] < (lados[0] + lados[1])){
        
    printf("\nÉ um triângulo\n");
}

else{
    
printf("\nNão é um triângulo\n");
}

return 0;
}
*/

//Exercício 03
/*
Desenvolva um programa que:
- Solicite ao usuário o valor total de uma compra.
- Calcule o desconto com base nas seguintes regras:
    - Se o valor for menor que R$100,00, o desconto é de 5%.
    - Se o valor for entre R$100,00 e R$300,00, o desconto é de 10%.
    - Se o valor for maior que R$300,00, o desconto é de 15%.
- Exiba o valor final após o desconto.
- Pergunte ao usuário se ele deseja fazer outro cálculo (use um loop do...while para repetir o
- processo até que o usuário escolha sair).
*/

int main(){

    int loop = 1;

    float compra;

    while (loop == 1){
        printf("\nDigite o valor total da compra: ");
        scanf("%f", &compra);

        if (compra < 100){
            compra *= 0.95;
        }
        
        else if (compra > 300){
            compra *= 0.85;
        }

        else{
            compra *= 0.90;
        }

        printf("\nValor final após o desconto: R$%.2f\n", compra);

        printf("\nDeseja fazer outro cálculo?\n\n[1] Sim\n[0] Não\n\n> ");
        scanf("%d", &loop);        
    }

    return 0;
}