#include <stdio.h>

int main() {
   double peso, altura, imc;

    //INSERIR PESO
    printf("Insira o peso em kg: ");
    scanf("%lf", &peso);
   
    //INSERIR ALTURA   
    printf("Insira a altura em metros: ");
    scanf("%lf", &altura);

    // Cálculo IMC
    imc = peso / (altura * altura);

    // Resultado do IMC
    printf("Seu IMC: %.lf\n", imc);

}
