# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>

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
/*
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
    
    printf("\nDeseja fazer outro cálculo?\n\n[1] Sim\n[2] Não\n\n> ");
    scanf("%d", &loop);        
}

return 0;
}
*/


//Exercício 04
/*
Desenvolva um programa que:
- Solicite ao usuário que insira um número inteiro positivo.
- Valide a entrada para garantir que o número seja positivo.
- Calcule o fatorial do número utilizando um loop for.
- Exiba o resultado do cálculo.
*/
/*
int main(){
    int n;
    unsigned int fatorial = 1;
    
    do{
        printf("Insira um número inteiro e positivo: ");
        scanf("%d", &n);
        
        if (n <= 0){
            printf("\nValor inválido\n");
        }
    } while (n <= 0);
    
    for (int i = 1; i <= n; i++){
        fatorial *= i;
    }   
    
    printf("\n%d! = %u\n", n, fatorial);
    
    return 0;
}
*/


//Exercício 05
/*
Simulação de Caixa Eletrônico.
Desenvolva um programa que:
 - Solicite ao usuário que insira o valor que deseja sacar (entre R$10 e R$1000, múltiplos de 10).
 - Verifique se o valor inserido é válido.
 - Calcule e exiba a quantidade de notas necessárias para sacar o valor, usando as notas
   disponíveis de R$ 100, R$ 50, R$ 20, e R$ 10. Sempre utilize as notas de maior valor.
   - Pergunte ao usuário se ele deseja realizar outra operação, repetindo o processo até que ele
   escolha sair.
   */
/*
int main(){
    int loop = 1;
    
    while (loop == 1){
        int notas[4], valor = 0;
        
        while ((valor < 10 || valor > 1000) || valor % 10 != 0){
            
        printf("\nInsira o valor do saque em R$ (entre R$10 e R$1000, múltiplos de 10): ");
        scanf("%d", &valor);
        
        if ((valor < 10 || valor > 1000) || valor % 10 != 0){
            printf("\nValor inválido\n");
        }    
    }
    
    notas[0] = valor / 100;
    valor %= 100;
    
    notas[1] = valor / 50;
    valor %= 50;
    
    notas[2] = valor / 20;
    valor %= 20;
    
    notas[3] = valor / 10;
    
    printf("\nNotas sacadas:\nR$100: %d\nR$50: %d\nR$20: %d\nR$10: %d\n", notas[0], notas[1], notas[2], notas[3]); 
    
    
    printf("\nDeseja fazer outro saque?\n\n[1] Sim\n[2] Não\n\n> ");
    scanf("%d", &loop);
}

return 0;
}
*/


//Exercício 06
/*
Desenvolva um programa que:
- Sorteie um número inteiro no intervalo de 1 a 100 (incluindo os valores 1 e 100).
- Solicite que o usuário tente adivinhar o número sorteado, digitando o seu palpite. Se o usuário
  entrar um valor inválido - menor que 1 ou maior que 100 - o programa deverá refazer a
  solicitação até que o usuário entre um valor válido.
- Verifique se o palpite do usuário está correto:
 - Se estiver correto, o programa deverá imprimir na tela “Parabéns!!! Você acertou!”
 - Se o palpite for menor que o número sorteado, deverá imprimir “Você chutou muito baixo! O valor correto é xx.” (onde xx é o número sorteado).
 - Se o palpite for maior que o número sorteado, deverá imprimir “Você chutou muito alto! O valor correto é xx.” (onde xx é o número sorteado).
*/
/*
int main(){
    srand(time(NULL));
    
    int palpite = 0, n = (rand() % 100) + 1;
    
    while (palpite > 100 || palpite < 1){
        printf("\nAdivinhe o número secreto entre 1 e 100: ");
        scanf("%d", &palpite);
        
        if (palpite > 100 || palpite < 1){
            printf("\nValor inválido\n");
        }
    }
    
    if (palpite == n){
        printf("\nParabéns!!! Você acertou!\n");
    }
    
    else if (palpite < n){
        printf("\nVocê chutou muito baixo! O valor correto é %d.\n", n);
    }
    
    else{
        printf("\nVocê chutou muito alto! O valor correto é %d.\n", n);
    }
    
    return 0;
}
*/


//Exercício 07
/*
Desenvolva um programa semelhante ao anterior, só que com as seguintes diferenças:
- Se o palpite do usuário estiver incorreto, o programa deverá imprimir a dica (“você chutou
  muito baixo” ou “você chutou muito alto”) sem mostrar o valor sorteado, incrementar o
  número de tentativas e dar uma nova chance até que ele consiga acertar o número sorteado.
- Quando o usuário conseguir acertar o número sorteado, o programa deverá apresentar a
  mensagem de parabéns e mostrar o número de tentativas feitas pelo usuário até acertar o
  número.
*/
/*
int main(){
    srand(time(NULL));
    
    int n = (rand() % 100) + 1;
    
    while (1){
        int palpite = 0; 
        
        while (palpite > 100 || palpite < 1){
            printf("\nAdivinhe o número secreto entre 1 e 100: ");
            scanf("%d", &palpite);
            
            if (palpite > 100 || palpite < 1){
                printf("\nValor inválido\n");
            }
        }
        
        if (palpite == n){
            break;
        }
        
        if (palpite < n){
            printf("\nO número secreto é maior que %d.\n", palpite);
        }
        
        else{
            printf("\nO número secreto é menor que %d.\n", palpite);
        }
        
    }
    printf("\nParabéns!!! Você acertou!\n");
    
    return 0;
}
*/


//Exercício 08
/*
Desenvolva um programa semelhante ao anterior, só que com a seguinte diferença:
- Caso o usuário não consiga acertar o número sorteado após a 5ª tentativa, o programa deverá
  mostrar a mensagem “você excedeu o número máximo de tentativas” e mostrar qual era o
  número sorteado.
*/
/*
int main(){
    srand(time(NULL));
    
    int i = 0, n = (rand() % 100) + 1;
    
    while (i < 5){
        int palpite = 0; 
        
        while (palpite > 100 || palpite < 1){
            printf("\nAdivinhe o número secreto entre 1 e 100: ");
            scanf("%d", &palpite);
            
            if (palpite > 100 || palpite < 1){
                printf("\nValor inválido\n");
            }
        }
        
        if (palpite == n){
            break;
        }
        
        if (palpite < n){
            printf("\nO número secreto é maior que %d.\n", palpite);
        }
        
        else{
            printf("\nO número secreto é menor que %d.\n", palpite);
        }
        
        i++;
    }
    
    if (i < 5){
        printf("\nParabéns!!! Você acertou!\n");
    }
    
    else{
        printf("\nVocê excedeu o número máximo de tentativas. O número secreto era %d\n", n);
    }
    
    return 0;
}
*/