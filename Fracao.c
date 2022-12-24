#include<stdio.h>
#include<stdlib.h>
#include "Fracao.h"
//cria��o da estrutura
typedef struct fracao{
	int numerador;
	int denominador;
}Fracao;
 //cria��o de acesso Criar e eliminar
Fracao*fraCriar(int n, int d){     //cria��o da fun��o
	Fracao*f=(Fracao*)malloc(sizeof(Fracao));
	if(f!=NULL){
		f->numerador=n;
		while(d== 0){
			printf("Digite outro Denominador que n�o seja 0: ");
			scanf("%d", &d);
		}
		f->denominador=d;
	}
	else{
		printf("Aloca��o invalida");
	}
	return f;
}
void eliminar(Fracao*f){ //libera a fra��o
	free(f);
	printf("Eliminada com sucesso");
}
 // cria��o de acesso e retorno
 void fraImprimir(Fracao*f){ //impressao da fra��o 
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
	//fun��es e opera��es
Fracao fraMult(Fracao *f1, Fracao *f2){	//multiplica��o de duas fra��es
	Fracao*resultado;
	int n,d;
	n=fraNum(f1)*fraNum(f2);
	d=fraDen(f1)*fraDen(f2);
	resultado=fraCriar(n,d);
	fraImprimir(resultado);
}

Fracao fraSoma(Fracao *f1, Fracao *f2){// Soma de fra��es
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
			printf("\nA maior FRAC��O �: \n");
			fraImprimir(f1);
		}
		if( fraNum(f1)/fraDen(f1)<fraNum(f1)/fraDen(f2)){
			printf("\nA maior FRAC��O �: \n");
			fraImprimir(f2);
		}
		if(fraNum(f1)/fraDen(f1)==fraNum(f1)/fraDen(f2)){
			printf("\nS�o iguais");
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

