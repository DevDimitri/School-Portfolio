#include <stdio.h>
#include <stdlib.h>

float main(){
	float x, y, z, media;
	media = 0;
	printf("Digite a 1� Nota: ");
	scanf("%d", &x);
	printf("O valor digitado foi: %d", x);
	printf("Digite a 2� Nota: ");
	scanf("%d", &y);
	printf("O valor digitado foi: %d", y);
	printf("Digite a 3� Nota: ");
	scanf("%d", &z);
	printf("O valor digitado foi: %d", z);
	media = (x * 2 + y * 3 + z * 5) /10;
	printf(media);
}
