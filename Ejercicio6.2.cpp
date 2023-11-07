#include <stdio.h>

int acumulador (int a, int b){
	
	int c = 0;

	while (a <= b){
		c= c+a;
		a++;		
	}
	

	for(;a<=b;c= c+a,a++);

	return c;

}

int main (){
	
	int x = 1;
	int y;
	int final;
	
	printf("hasta cual numero desea sumar?: \n");
	scanf("%d", &y);
	
	final = acumulador(x,y);
	
	printf("%d", final);
	return 0;
}
