#include <stdio.h>

int main() {
	double celsius, fahrenheit;
	
	puts("INSIRA A TEMPERATURA EM CELSIUS: ");
	scanf("%lf", &celsius);
	
	fahrenheit = (celsius * 9 / 5) + 32;
	
	printf("%.2f Celsius totaliza a %.2f Fahrenheit\n", celsius, fahrenheit);
	
}

