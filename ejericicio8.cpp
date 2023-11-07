#include <stdio.h>

void intercambio (int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
	
}

int main (){
	int x = 5;
	int y = 7;
	
	printf("%d  %d \n",x,y);
	
	intercambio (&x,&y);
	
	printf("%d  %d \n",x,y);
	
	return 0;
}
