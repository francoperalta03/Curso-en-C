//punteros
#include <stdio.h>

int main (){
/*
char *p;
char a = 'A';
p = &a;
char c;
char b;
c = a;
b = *p;

printf(" %c %c",b,c);

*/
/*
int x = 5;
int *q = &x;

printf("contenido de x: %d %d \n",x,*q);
printf("dieccion de x: %d %d \n",&x,q);
printf("dieccion de q: %d \n",&q);
printf("tamaño de x: %d\n",sizeof(x));
printf("tamaño de q: %d\n",sizeof(q));

x = ++(*q);
printf("%d\n",x);

q++;
printf("%d %d\n",q,*q);
*/
/*
int i = 0;
int a [5] = {10,10,10,10,10};
int sum = 0;
float x;

printf("%d \n", sizeof(a));
printf("%d \n", sizeof(int));


//sacar promedio de a

for(i = 0;i <= (sizeof(a)/sizeof(int ));i++){
	sum = sum + a[i];
	}

x = (float)sum / (sizeof(a) / sizeof(int));

printf("%f", x);
*/
//------------------------------------------------------

char cadena [10];
int i = 0;
char x;

x = getchar();

while(x!='\n'){
	cadena[i]= x;
	i++;
	x = getchar();
}

printf("%s", cadena);











return 0;
}
