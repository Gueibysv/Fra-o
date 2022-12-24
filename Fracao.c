#include<stdio.h>
#include<stdlib.h>
#include "Fracao.h"
//criação da estrutura
typedef struct fracao{
	int numerador;
	int denominador;
}Fracao;
 //criação de acesso Criar e eliminar
Fracao*fraCriar(int n, int d){     //criação da função
	Fracao*f=(Fracao*)malloc(sizeof(Fracao));
	if(f!=NULL){
		f->numerador=n;
		while(d== 0){
			printf("Digite outro Denominador que não seja 0: ");
			scanf("%d", &d);
		}
		f->denominador=d;
	}
	else{
		printf("Alocação invalida");
	}
	return f;
}
void eliminar(Fracao*f){ //libera a fração
	free(f);
	printf("Eliminada com sucesso");
}
 // criação de acesso e retorno
 void fraImprimir(Fracao*f){ //impressao da fração 
 	int n=fraNum(f);
	int d=fraDen(f);
 	if(d==1){
 		printf("%i",n);
	 }
	 else {
	 	printf("%i\n--\n%i",n,d);
	 }
 }
int fraNum(Fracao*f){ 	//retorna numerador
	return f->numerador;
}
int fraDen(Fracao*f){	//retorna denominador
	return f->denominador;
}
	//funções e operações
Fracao fraMult(Fracao *f1, Fracao *f2){	//multiplicação de duas frações
	Fracao*resultado;
	int n,d;
	n=fraNum(f1)*fraNum(f2);
	d=fraDen(f1)*fraDen(f2);
	resultado=fraCriar(n,d);
	fraImprimir(resultado);
}

Fracao fraSoma(Fracao *f1, Fracao *f2){// Soma de frações
	Fracao *resultado;
	int aux1,aux2,aux3;
	if(f1->denominador==f2->denominador){
		resultado->numerador= f1->numerador+f2->numerador;
	}
	else{
	 aux1=f1->numerador*f2->denominador;
	 aux2=f2->numerador*f1->denominador;
	 aux3=f1->denominador*f2->denominador;
	 resultado->numerador=aux1+aux2;
	 resultado->denominador=aux3;
	}
	fraCriar(resultado->numerador, resultado->denominador);
	fraImprimir(resultado);

}
Fracao fraComp(Fracao *f1, Fracao *f2){
		if( fraNum(f1)/fraDen(f1)>fraNum(f1)/fraDen(f2)){
			printf("\nA maior FRACÇÃO é: \n");
			fraImprimir(f1);
		}
		if( fraNum(f1)/fraDen(f1)<fraNum(f1)/fraDen(f2)){
			printf("\nA maior FRACÇÃO é: \n");
			fraImprimir(f2);
		}
		if(fraNum(f1)/fraDen(f1)==fraNum(f1)/fraDen(f2)){
			printf("\nSão iguais");
		}
}
void fraReal(Fracao *f){
	float n=fraNum(f);
	float d=fraDen(f);
	float resultado;
	resultado=n/d;
	printf("%.2f",resultado);
	free(f);

} 

