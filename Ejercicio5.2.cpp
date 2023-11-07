//--------------------------------------------------------------------------------------------
	//(subalgoritmo) hacer nuestras propias funciones
	/*
	
	tipo nombre (lista de parametros){
	
		bloque de acciones
		
		return valor
	}
	*/
	
#include <stdio.h>

int suma(int a, int b){
	
	int c = a + b;
		
	return c;
}

int main(){
	
	int x = 5;
	int y = 6;
	int resultado = suma(x,y);
	
	printf("%d", resultado);
	
	return 0;
}


