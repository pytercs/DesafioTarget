#include<stdio.h>
#include<stdlib.h>  
#include<string.h>  
#include <iostream>

char string[50],auxiliar[50];
int a,b;

int main(){
    setlocale(LC_ALL, "portuguese");
	
       printf("Digite qualquer palavra: ");
       gets(string); 
       b=strlen(string)-1;  
       
       for(a=0;string[a]!='\0';a++){        
       		
			auxiliar[b]=string[a];
       		b--;     
       }
       
       auxiliar[a]='\0';     
       strcpy(string,auxiliar);    
       printf("\nA palavra inversa é: %s",string);
       
return(0);
}
