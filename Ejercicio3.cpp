#include <stdio.h>


int main (){
//EJER 1	
/* 	int dist;
	int vel;
	int tiempo;
	
	printf("tiempo?\n");
	scanf("%i", &tiempo);
	
	printf("velocidad?\n");
	scanf("%i", &vel);
	
	dist = vel * tiempo;
	
	printf("la distancia es: %d\n", dist);					*/
//------------------------------------------------------------------------------------------
//EJER 2
/*	char toto = 127;
	
	printf("%d\n %c\n ", toto, toto);
	
	toto++;
	
	printf("%d\n %c\n ", toto, toto);
														*/
//------------------------------------------------------------------------------------------	
//EJER 3
/*	int num1;
	int num2;
	
	printf("num1?\n");
	scanf("%d", &num1);
	
	printf("num2?\n");
	scanf("%d", &num2);
	
	
	if (num1 < num2){
		printf("num1 es menor a num2");
	}
	else {
		printf("num1 es mayor o igual a num2");
	};                                                  */
//------------------------------------------------------------------------------------------	
//EJER 4
/*	int a = 246864;
	
	(a < 5)? printf("es menor"):printf("NO LO ES!!!!!");
															*/
//------------------------------------------------------------------------------------------	
//EJER 5
/*
int a = 126;
int x;

x = (a == 126)? ++a : --a;
printf("%d ", x);*/

//------------------------------------------------------------------------------------------	
//EJER 6 
/*
int a;
int contador = 0;

printf("repeticiones?\n");
scanf("%i", &a);

printf("tus numeros son:\n");

while (contador <= a){
	printf("%d\n", contador);
	contador++;
};

*/
//-----------------------------------------------------------------------------------------
//EJER 7 (esta mal corregir)
 
int a;
int contador = 0;

printf("repeticiones?\n");
scanf("%i", &a);

printf("tus numeros son:\n");

while (1){
	if (a <= repeticiones){
		printf("%d\n", contador);
	contador++;
	}
	else {
		break
	}
};

	
	
return 0;
}
