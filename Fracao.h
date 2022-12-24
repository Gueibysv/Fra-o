//criacao e destruição
typedef struct fracao Fracao;
Fracao*fraCriar(int n, int d); //Cria uma nova fraçaõ e retorna NULL se falta memória
void eliminar(Fracao*f);  // Elimina a fração
//Acesso e retorno
int fraNum(Fracao*f); //acessa numerador
int fraDen(Fracao*f); // acessa denominador
void fraImprimir(Fracao*f); // imprimir a fração
//Funções e operações
Fracao fraMult( Fracao *f1, Fracao *f2); // Multiplica duas frações
Fracao frSoma(Fracao *f1, Fracao *f2,char sinal); // Soma de frações
Fracao fraComp(Fracao *f1, Fracao *f2); //Compara duas frações
void fraReal(Fracao *f); // retorna o valor real da fração
