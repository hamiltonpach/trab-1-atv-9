#include <stdio.h>

// Função que ordena os valores e verifica se são iguais
int ordenar(int *a, int *b, int *c) {
    int temp;

    // Ordenação simples (3 valores)
    if(*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if(*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if(*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    // Verifica se são todos iguais
    if(*a == *b && *b == *c) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x, y, z;
    int resultado;

    // Leitura dos valores
    printf("Digite tres valores inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);

    // Chamada da função (por referência)
    resultado = ordenar(&x, &y, &z);

    // Exibição dos valores ordenados
    printf("\nValores ordenados:\n");
    printf("Primeiro: %d\n", x);
    printf("Segundo: %d\n", y);
    printf("Terceiro: %d\n", z);

    // Exibição do retorno da função
    if(resultado == 1) {
        printf("\nTodos os valores sao iguais.\n");
    } else {
        printf("\nExistem valores diferentes.\n");
    }

    return 0;
}