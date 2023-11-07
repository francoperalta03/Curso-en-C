#include <stdio.h>
#define false 0
#define true !false
#define begin {
#define end }

int main ( ){
	// sentencia for:
	
	// int a = 1, acum = 0;
	
	/* manera 1
	
	for(;a<=10;a++){
		printf("%d    ", a);
		acum = acum + a;
		printf("%d\n", acum);
	}
//--------------------------------------------------------------------------------------------------	
	*/
	//manera 2
	/*
	for(a = 1; acum < 55;a++){
		printf("%d    ", a);
		acum = acum + a;
		printf("%d\n", acum);
	
	}
	
	printf("la suma es: %d", acum);
	*/
	//-------------------------------------------------------------------------------------------------
	//manera 3 (metemos las acciones adentro del for y tenemos ue cerrar la sentencia con ;)
	/*
	for(a=1,acum=0;a<=10;acum+=a,a++);
	
		printf("la suma es: %d", acum);
		
	*/	
	//---------------------------------------------------------------------------------------------	
	// diviciones de dos enteros para  te den con coma
	//tenian q ser aunque sea una float
	// si son 2 int porque vienen de anda a saber donde: hacemos lo siguiente
	/*
	int a = 3;
	int b = 4;
	
	float c = (float)b/a;
	
	printf("%f", c);
	*/
	//-----------------------------------------------------------------------------------------
	// cambiar nombres de las llaves
	/*
	int a = 3;
	
	if (a == 3)	begin
			printf("es igual");
		end
	*/
	//---------------------------------------------------------------------------------------------
	// sentencia do while
	/* do{
			acciones
		}while (condicion)
	ES COMO EL WHILE SOLO UE PRIMERO HACE LA ACCION Y DESP PREGUNTA LA CONDICION
	*/
	/*
	int a;
	
	do{
		printf("ingrese un numero: \n");
		scanf("%d", &a);
	}while (a<10 || a>20);
	*/
	
	
	return 0;
}



