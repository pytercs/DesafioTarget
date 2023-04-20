#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main() {
    setlocale(LC_ALL, "portuguese");
	int numero, a = 0, b = 1, proximo = 0;
    int pertence = 0;

    printf("Digite um n�mero: ");
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
        printf("O n�mero %d pertence � sequ�ncia de Fibonacci!\n", numero);
    } else {
        printf("O n�mero %d N�O pertence � sequ�ncia de Fibonacci.\n", numero);
    }

    return 0;
}
