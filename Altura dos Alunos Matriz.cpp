#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<time.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int i,qtd,acima=0,abaixo=0;
	
	printf("\nInforme a quantidade de pessoas:");
	scanf("%i",&qtd);
	
	float altura[qtd];
	
	for(i=0;i<qtd;i++){
		
		printf("\nInforme a altura das %i pessoa:",i+1);
		scanf("%f",&altura[i]);
	
		if(altura[i]>1.70){
		
		acima++;
		}
		if(altura[i]<=1.70){
		
			abaixo++;
		}
		

}
printf("\n A quantidade de pessoas acima de 1,70 é:%i",acima);
		printf("\n A quantidade de pessoas abaixo ou igual de 1,70 é:%i",abaixo);
}
