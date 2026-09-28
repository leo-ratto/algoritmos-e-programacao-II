#include <stdio.h>
#include <string.h>

//Exercício 01
/*
Escreva uma função em C que recebe um vetor de temperaturas inteiras registradas ao longo de
vários dias e verifica se as temperaturas estão em ordem crescente. A função retorna true se
estiver em ordem crescente e false, caso contrário.
No programa principal, solicitar ao usuário que informe quantos dias serão registrados e os
valores para cada um dos dias. Ao final, o programa deve imprimir uma mensagem indicando se
as temperaturas estão ou não em ordem crescente.
*/
/*
int temperaturas(int t[], int n) {
    if (n <= 1) return 1;
    
    for (int i = 1; i < n; i++) {
        if (t[i] <= t[i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main(){
    int dias;
    
    printf("Insira a quantidade de dias que foram registrados: ");
    scanf("%d", &dias);
    
    int temp[dias];
    
    for (int i = 0; i < dias; i++){
        printf("Insira a temperatura do dia %d em °C: ", i+1);
        scanf("%d", &temp[i]);
    }
    
    int crescente = temperaturas(temp, dias);
    
    if (crescente == 1){
        printf("\nAs temperaturas estão em ordem crescente\n");
    }
    else{
        printf("\nAs temperaturas não estão em ordem crescente\n");
    }
    
    return 0;
}
*/


//Exercício 02
/*
Escreva um programa em C que receba um vetor de tamanho 5, representando as vendas de
cinco produtos e inverta os valores do vetor. Esse processo ajudará a empresa a entender melhor
as variações de vendas entre o início e o final da semana.
*/
/*
int main(){
    int vendas[5];
    
    for (int i = 4; i >= 0; i-=1){
        int n = 5 - i;
        
        printf("Insira o número de vendas do produto %d: ", n);
        scanf("%d", &vendas[i]);
    }
    
    printf("\nValores invertidos: ");
    
    for (int i = 0; i < 5; i++){
        if(i < 4){
            printf("%d,", vendas[i]);
        }
        else{
            printf("%d\n", vendas[i]);
        }
    }
}
*/

