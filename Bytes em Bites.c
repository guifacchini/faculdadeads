#include <stdio.h>

int main() {
    double bytes, bits;

    // BYTES
    printf("Insira a quantidade de bytes: ");
    scanf("%lf", &bytes);

    // BITS
    bits = bytes * 8;

    // RESULTADO
    printf("%lf bytes correspondem a %lf bits\n", bytes, bits);

    return 0;
}
