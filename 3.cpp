#include <stdio.h>
#include <iostream>

int i, num,num1, num2, proximo ;

int main() {
    setlocale(LC_ALL, "portuguese");
	
	//Letra A
	printf("Letra A)");
	for (i=1; i <= 5; i++ ){
		printf(" %d ", 2*i-1);	
	}
	printf("\n\n");
	
	//Letra B
	printf("Letra B)");
	num=1;
	for (i=1; i <= 7; i++ ){
		num *=2;
		printf(" %d ", num);	
	}
	printf("\n\n");	
	
	//Letra C
	printf("Letra C)");
	for (i=0; i <= 7; i++ ){
		num = i*i;
		printf(" %d ", num);	
	}
	printf("\n\n");	
	
	//Letra D
	printf("Letra D)");
	for(i = 1; i <= 5; i++) {
      printf(" %d ", (2*i)*(2*i));
   }
	printf("\n\n");	
	
	//Letra E
	printf("Letra E)");
	num1=0;
	num2=1;
	for(i = 0; i <= 5; i++) {
      proximo = num1 + num2;
      printf(" %d ", proximo);
      num1 = num2;
      num2 = proximo;
   }
   printf("\n\n");
   
   //Letra F
   printf("Letra F) 2  10  12  16  17  18  19  200 ");
   
}
