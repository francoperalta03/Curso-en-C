#include <stdio.h>

int main () {
	
	string a;
	int cont= 1;
	int repes;
	
	printf("Que frase queres repetir?\n");
	scanf("%s", &a);
	
	while (cont < repes){
		cont ++;
		printf("%s \n", a);
		
	}	
	
	return 0;
}
