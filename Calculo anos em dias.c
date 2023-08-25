#include <stdio.h>

int main() {
    double anos, dias;

    // ANOS
    puts("Insira a quantidade de anos: ");
    scanf("%lf", &anos);

    // DIAS
    dias = anos * 365;

    // RESULTADO
    printf("%lf anos correspondem a %lf dias\n", anos, dias);

    return 0;
}
