#include <stdio.h>
int main() {
	double p1,p2,media;
	
	puts("Digite a primeira nota");
	scanf("%lf", &p1);
	
	puts("Digite a segunda nota");
	scanf("%lf", &p2);	
	
	media = (p1+p2) / 2;
	
	printf("A media dos alunos e: %lf", media);
	
}
