//# define _USE_MATH_DEFINES
# include <stdio.h>
# include <string.h>
# include <math.h>

//Exercício 01
/*
Escreva uma função em C chamada converterParaCelsius que deverá receber uma
temperatura em graus Fahrenheit como entrada e deve retornar a temperatura equivalente em
graus Celsius.
*/
/*
float converterParaCelsius(float f) {
    float c = 5.0 / 9.0 * (f - 32.0f);
    return c;
}

int main() {
    float f;
    int n;
    
    while (1){
        printf("\nInsira o valor da temperatura em °F: ");
        scanf("%f", &f);
        
        printf("\nValor da temperatura em °C: %.2f\n", converterParaCelsius(f));
        
        printf("\nDeseja fazer mais uma medição?\n[1] Sim\n[2] Não\n> ");
        scanf("%d", &n);
        
        if (n == 1){
            continue;
        }
        else{
            break;
        }
        
    }
    
    return 0;
}
*/


//Exercício 02
/*
Escreva uma função em C chamada calcularAreaEsfera que receba o raio de uma esfera como
entrada e retorne a área correspondente como um valor em ponto flutuante.
*/
/*
float calcularAreaEsfera(float r){
    float a = 4.0f * M_PI * r * r;
    
    return a;
}

int main(){
    float r;
    int n;
    
    while (1){
        printf("\nInsira o valor do raio: ");
        scanf("%f", &r);
        
        printf("\nValor da área da esfera: %.2f\n", calcularAreaEsfera(r));
        
        printf("\nDeseja fazer mais um cálculo?\n[1] Sim\n[2] Não\n> ");
        scanf("%d", &n);
        
        if (n == 1){
            continue;
        }
        else{
            break;
        }
    }
    return 0;
}
*/


//Exercício 03
/*
Escreva um programa em C que solicite dois horários ao usuário (no formato de 24 horas) e
mostre a diferença em minutos entre os horários informados. Esta ferramenta é essencial para o
planejamento eficiente de conexões e agendamento de viagens.
Para resolver este problema, crie e use as seguintes funções:
- minutos() : recebe hora e minuto como parâmetros e retorna o equivalente em minutos. Esta
 função é útil para converter horários em uma base comum para facilitar a comparação.
- diferenca( ): recebe dois tempos em minutos (calculados pela função minutos()) e retorna a
 diferença entre esses dois tempos, em minutos.
- Exemplo de uso: Se o usuário informar os horários 2:30 e 1:40, o programa deverá calcular e
 exibir que a diferença é de 50 minutos.
*/
/*
int minutos(int hr, int min){
    hr *= 60;
    
    min += hr;
    
    return min;
}

int diferenca(int t1, int t2){
    if (t1 <= t2){
        return t2 - t1;
    }
    
    else{
        return (t2 + 1440) - t1;
    }
}

int main(){
    int t1, t2, min, hr, d, n;
    
    while(1){
        printf("\nInsira a hora de saída: ");
        scanf("%d:%d", &hr, &min);
        
        t1 = minutos(hr, min);
        
        printf("Insira a hora de chegada: ");
        scanf("%d:%d", &hr, &min);
        
        t2 = minutos(hr, min);
        
        d = diferenca(t1, t2);
        
        if (d < 60){
            printf("\nO tempo de viagem será de %d minutos.\n", d);
        }
        else if (d == 60){
            printf("\nO tempo de viagem será de 1 hora.\n");
        }
        else if (d < 120){
            printf("\nO tempo de viagem será de 1 hora e %d minutos.\n", d % 60);
        }
        else if (d % 60 == 0){
            printf("\nO tempo de viagem será de %d horas.\n", d / 60);
        }
        else{
            printf("\nO tempo de viagem será de %d horas e %d minutos.\n", d / 60, d % 60);
        }
        
        printf("\nDeseja fazer mais um cálculo?\n[1] Sim\n[2] Não\n> ");
        scanf("%d", &n);
        
        if (n == 1){
            continue;
        }
        else{
            break;
        }
    }
    
    return 0;
}
*/


//Exercício 04
