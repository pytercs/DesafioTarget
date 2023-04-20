#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main() {
    setlocale(LC_ALL, "portuguese");
	int numero, a = 0, b = 1, proximo = 0;
    int pertence = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    while (proximo < numero) {
        proximo = a + b;
        a = b;
        b = proximo;
    }

    if (proximo == numero) {
        pertence = 1;
    }

    if (pertence) {
        printf("O número %d pertence à sequência de Fibonacci!\n", numero);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
