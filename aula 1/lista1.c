# include <stdio.h>
# include <string.h>

//Exercício 01
/*
Escreva um programa que converte a temperatura de Celsius para Fahrenheit.
*/
/*
int main(){
    float f, c;
    
    printf("Insira a temperatura em °C: ");
    
    scanf("%f", &c);
    
    f = (c * 9)/5 + 32;
    
    printf("\nTemperatura em °F: %.2f\n", f);

    return 0;
}
*/

//Exercício 02
/*
Escreva um programa para calcular a área de uma esfera. Seu programa deve declarar uma
constante Pi de valor 3.141592. Para calcularmos a área da superfície da esfera utilizamos a
seguinte fórmula: A = 4*𝜋*r^2
*/
/*
int main(){
        
    float r, pi = 3.141592;

    printf("Insira o valor do raio em cm: ");

    scanf("%f", &r);

    float area = 4 * pi * r * r;

    printf("Area da esfera: %.2fcm³\n", area);

    return 0;    
}
*/

//Exercício 03
/*
Uma biblioteca está digitalizando seu acervo e precisa de um sistema para registrar os livros. O
sistema deve coletar o título do livro, o número de páginas e o ano de publicação. Deve então
calcular o número total de caracteres no título, dobrar o número de páginas e ajustar o ano de
publicação multiplicando-o por 2. 
*/
/*
int main(){
    
    char titulo[50];

    unsigned int paginas, ano;

    printf("Insira o título do livro: ");
    fgets(titulo, sizeof(titulo), stdin);
    titulo[strcspn(titulo, "\n")] = 0;

    printf("\nInsira o número de páginas do livro: ");
    scanf("%u", &paginas);

    printf("\nInsira o ano de publicação do livro: ");
    scanf("%u", &ano);

    int caracteres = strlen(titulo);

    paginas <<= 1;

    ano *= 2;

    printf("\nTítulo: %s\nNúmero de caracteres: %d\nNúmero de páginas dobrado: %u\nAno de publicação * 2: %u\n", titulo, caracteres, paginas, ano);

    return 0;
}
*/

//Exercício 04
/*
Uma fábrica precisa calcular a produção diária de uma linha de montagem. Cada linha tem um
nome, o número de itens produzidos por hora e o número de horas trabalhadas no dia. O sistema
deve calcular a produção total do dia, triplicar a produção usando deslocamento de bits e mostrar
1 se a linha for produtiva ou 0, caso contrário. A linha é classificada como produtiva se os itens
produzidos forem superior a 1000.
*/
/*
int main(){
    
    char nome[50];

    unsigned int itens, horas, dia;

    printf("Insira o nome da linha de montagem: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("\nInsira o total de itens produzidos por hora: ");
    scanf("%u", &itens);

    printf("\nInsira o total de horas trabalhadas no dia: ");
    scanf("%u", &horas);

    dia = horas * itens;

    dia = (dia << 1) + dia;

    printf("\nNome da linha de montagem: %s\nTriplo da produção: %u\nProdutividade: ", nome, dia);

    if (dia >= 1000){
        printf("1\n");
    }

    else{
        printf("0\n");
    }

    return 0;
}
*/

