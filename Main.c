#include<stdio.h>
#include<stdlib.h>
#include"Fracao.c"
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
		int num, den, menu;
		Fracao *fc= NULL;
		
	
	printf("----------------SEJA BEM VINDO A APLICAÇÃO DE FRACÇÃO------------\n");
	do{ 
		printf("\n");
		printf("\n----------------O que deseja fazer com a aplicação FRACÇÃO?\n");
		printf("--------------Digite uma das opções abaixo:\n");
		printf(" 1- Criar Fracção\n 2- Eliminar Fracção\n 3- Ver o Numerador\n 4- Ver o Denominador\n 5- Imprimir a Fracção\n 6- Somar\n 7- Multiplicar\n 8- Ver o valor o Real\n 9- Comparar com outra Fracção\n 10-Limpar Menu \n 0- Sair\n");
		printf("\n");
		printf("Digite a aqui a opção: ");
		scanf("%d", &menu);
		
		//Opções do menu
		switch(menu){
			//CRIAR A FRACÇÃO
			case 1 :
				if(fc== NULL){
					printf("\nDigite o Numerador: ");
					scanf("%d", &num);
					printf("\nDigite o Denominador: ");
					scanf("%d", &den);
					system("cls");
					fc= fraCriar(num, den);
					printf("CRIADO COM SUCESSO!");
				}
				else{
					system("cls");
					printf("\nElimine primeiro a fracção que já criaste (2)");
				}
	  		break;
			//ELIMINAR FRACÇÃO	
			case 2 :
				system("cls");
				if(fc!= NULL){
					eliminar(fc);
					fc= NULL;
				}
				else{
					printf("\nNão há fracção para Eliminar");
				}
			break;
			//MOSTRAR NUMERADOR	
			case 3:
				system("cls");
				if(fc!= NULL){
					printf("\nNumerador: %d", fraNum(fc));
				}
				else{
					printf("\nAinda não digitaste um Numerador (1)");
				}	
			break;
			//MOSTRAR DENOMINADOR
			case 4:
				system("cls");
				if(fc!= NULL){
					printf("\nDenominador: %d", fraDen(fc));	
				}
				else{
					printf("\nAinda não digitaste um Denominador (1)");
				}
			break;
			//IMPRIMIR 
			case 5:
				system("cls");
				if(fc!= NULL){
					fraImprimir(fc);
				}
				else{
					printf("Ainda NÃO DIGITASTE UMA FRACÇÃO (1)");
				}
			break;
			//SOMA
			case 6:
				system("cls");
				printf("\n-------------------------Menu de Soma-----------------------");
				if(fc!= NULL){
					int num1, den1;
					Fracao *r;
				
					printf("\nDigite outro numerador: ");
					scanf("%d", &num1);
					printf("\nDigite outro denominador:");
					scanf("%d", &den1);
					system("cls");
					Fracao *f1=fraCriar(num1,den1);
					fraSoma(fc,f1);
				}
				else{
					printf("\nAinda NÃO CRIASTE UMA FRACÇÃO (1)");
				}
			break;
			//MULTIPLICAÇÃO
			case 7:
				system("cls");
				printf("\n-------------------------Menu de Multiplicação-----------------------");
				if(fc!= NULL){
					int num1, den1;
					printf("\nDigite outro numerador: ");
					scanf("%d", &num1);
					printf("\nDigite outro denominador:");
					scanf("%d", &den1);
					system("cls");
					Fracao *f1=fraCriar(num1,den1);
					fraMult(fc,f1);
				
				}
				else{
					printf("\nAinda não digitaste uma Fracção (1)");
				}
			break;
			//VALOR REAL DA FRACÇÃO
			case 8:
				system("cls");
				if(fc!= NULL){
					fraReal(fc);	
				}
				else{
					printf("\nAinda não digitaste uma Fracção (1)");
				}
			break;
			//COMPARAR FRACÇÕES
			case 9:
				system("cls");
				printf("\n-------------------------Menu de Comparação-----------------------");
				if(fc!= NULL){
					int num1, den1;
					printf("\nDigite um Numerador: ");
					scanf("%d", &num1);	
					printf("\nDigite um Denominador: ");
					scanf("%d", &den1);
					Fracao *f1=fraCriar(num1,den1);
					printf("\n");
					fraComp(fc,f1);
					
					
				}
				else{
					printf("\nAinda não criaste uma Fracção (1)");
				}
			break;
			case 10:
				system("cls");
			break;
			default:
				if(menu!=0){
					system("cls");
					printf("OPERAÇÃO INVÁLIDA!!!!");
				}
				else{
					printf("PROGRAMA ENCERRADO COM SUCESSO!");
				}
		}
	}while(menu!= 0);
	
free(fc);

				
}
