//criacao e destrui��o
typedef struct fracao Fracao;
Fracao*fraCriar(int n, int d); //Cria uma nova fra�a� e retorna NULL se falta mem�ria
void eliminar(Fracao*f);  // Elimina a fra��o
//Acesso e retorno
int fraNum(Fracao*f); //acessa numerador
int fraDen(Fracao*f); // acessa denominador
void fraImprimir(Fracao*f); // imprimir a fra��o
//Fun��es e opera��es
Fracao fraMult( Fracao *f1, Fracao *f2); // Multiplica duas fra��es
Fracao frSoma(Fracao *f1, Fracao *f2,char sinal); // Soma de fra��es
Fracao fraComp(Fracao *f1, Fracao *f2); //Compara duas fra��es
void fraReal(Fracao *f); // retorna o valor real da fra��o
