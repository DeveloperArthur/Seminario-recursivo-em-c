#include <stdio.h>
#include <conio.h>
#include <time.h>
int main(){
system("color 0A");
	int menu;
	int opPotencia;
	int opTabuada;
	int opFibonacci;
	
	for(;;){
	
	printf("\n\n\t Programas recursivos \n ");
	printf("\n 1 - Potencia");
	printf("\n\n 2 - Tabuada");
	printf("\n\n 3 - Fibonacci ");
	printf("\n\n 4 - Sair \n");
	printf("\n\n escolha uma opcao:  ");
	scanf("%i", &menu);
	system("cls");

	
	switch (menu){
		case 1:
			printf("\n\n\t Potencia \n ");
			printf("\n 1 - Potencia recursiva \n");
			printf("\n 2 - Potencia nao recursiva \n\n");
			scanf("%i", &opPotencia);
			if (opPotencia == 1){
				system("cls");
			potencia();
			
			}
			else if (opPotencia == 2){
				system("cls");
			potenciaNaoRecursiva();
				
			}
			else printf("\n\nERRO 002 -  Opcao invalida | Enter para voltar para o menu");
			getch();
			system("cls");
			break;
			
		case 2 : 
			printf("\n\n\t Tabuada \n" );
			printf("\n 1 - Tabuada recursiva \n");
			printf("\n 2 - Tabuada nao recursiva \n\n");
			scanf("%i", &opTabuada);
			if (opTabuada == 1){
			system("cls");
			tabuada();
			}
			else if (opTabuada == 2){
			system("cls");
			tabuadaNaoRecursiva ();
		}
			else printf("\n\nERRO 002 - Opcao invalida | Enter para voltar para o menu");
		getch();
		system("cls");
		break;
		
		case 3 : 
		    printf ("\n\n\t a sequencia de Fibonacci \n");
			printf("\n 1 - Fibonacci recursivo \n");
			printf("\n 2 - Fibonacci nao recursivo \n\n");
			scanf("%i", &opFibonacci);
			if (opFibonacci == 1){
				system("cls");
				fibonacci();
			
			
			}
			else if (opFibonacci == 2){
				system("cls");
				fibonacciNaoRecursivo();
				
			}
			else printf("\n\nERRO 002 Opcao invalida | Enter para voltar para o menu");
			getch();
			system("cls");
			break;
		break;	
		
		case 4 : 
		printf("\n\n \tTHE END" );
		getch();
		system("cls");
		return 0;
		
		default:
		printf("\n\nERRO 001 - Opcao invalida |  Enter para voltar para o menu" );
		getch();
		system("cls");
		break;
		
		}
	}
	
}

//potencia recursiva
void potencia(){
	long int base, expoente;
 	double resultado;
 	clock_t inicio, fim;
    float tempo;
    
 printf ("\n\n\t Potencia recursiva \n");
 printf("\n Digite um valor inteiro para da base: ");
 scanf("%li",&base);
 printf ("\n Digite um valor inteiro para o expoente : ");
 scanf("%li" ,&expoente);
 inicio = clock();
 resultado = potenciaRecursiva(base,expoente);
 printf(" \n %li elevado a %li = %0.lf", base, expoente,resultado);
  fim = clock();
  tempo=((float)fim-(float)inicio)/1000000.0;
  printf("\n\n Tempo de execucao do programa = %f ms", tempo);
 
}
int potenciaRecursiva(int base, int expoente){
/*
printf("\n base = %i" ,base);
printf("\n expoente = %i" ,expoente);
printf("\n resultado = %i" ,potenciaRecursiva);
*/
 if(expoente == 0)
 return 1;

 else
 return (base * potenciaRecursiva(base, expoente-1));
 
}
//fim potencia recursiva

// potencia não recursiva
void potenciaNaoRecursiva(){
  double potencia;
  long int base, expoente, contador; 
  clock_t inicio, fim;
  float tempo;
  
  
  printf("\n\n\t Potencia nao recursiva\n");
  printf("\n Digite um valor inteiro para a base: ");
  scanf("%li", &base);
  printf("\n Digite um valor inteiro para o expoente : ");
  scanf("%li", &expoente);
  inicio = clock();
  potencia = 1;
  contador = 0;
  while (contador != expoente) {
    potencia = potencia * base;
    contador = contador + 1;
  }
  
  printf("\n  %i elevado a %i: %.0lf\n", base, expoente, potencia);
  fim = clock();
  tempo=((float)fim-(float)inicio)/1000000.0;
  printf("\n\n Tempo de execucao do programa = %lf ms", tempo);
}
//fim potencia não recursiva

//tabuado recursiva
int tabuada(){
	int mult,num,result;
	clock_t inicio, fim;
    float tempo;
    
	mult = 1;
	printf("\n\n\t Tabuada recursiva\n");
    printf("\n Digite um numero : ");
	scanf("%i",&num);
	inicio = clock();
	result = num;
	tabuadaRecursiva(mult,result,num);
	fim = clock();
    tempo=((float)fim-(float)inicio)/1000000.0;
    printf("\n\n Tempo de execucao do programa = %f ms", tempo);
}
void tabuadaRecursiva(int mult, int result, int num) {
printf("\n  %i X %i : ",num,mult);
if (mult < 10){
 printf(" %i ", result);
tabuadaRecursiva(mult+1,result+num,num);
}
else 
 printf("%i ", result);
}
//fim tabuada recursiva 

//tabuada não recursiva
void tabuadaNaoRecursiva(){
   int tab,num,res;
   clock_t inicio, fim;
   float tempo;
   
   printf("\n\n\t Tabuada nao recursiva\n");
   printf("\n Digite um numero : "); 
   scanf("%d",&num);
   printf("\n");
   inicio = clock();
   for (tab=1; tab<=10; tab++){
   printf("  %d X %d = %d\n",num,tab,num*tab);
}
   fim = clock();
   tempo=((float)fim-(float)inicio)/1000000.0;
   printf("\n\n Tempo de execucao do programa = %f ms", tempo);
   
}
//fim tabuada não recursiva

//fibonacci recursiva
int  fibonacci() {

   long int pos,max;
   clock_t inicio, fim;
   float tempo;
   
   printf ("\n\n\t a sequencia de Fibonacci recursivo \n");
   printf("\n digite o numero maximo da sequencia: ");
   scanf("%li", &max);
   inicio = clock();
   for (pos = 0; pos < max ; pos++) {
   printf("\n%li", fibonacciRecursiva(pos));
}
   fim = clock();
   tempo=((float)fim-(float)inicio)/1000000.0;
   printf("\n\n Tempo de execucao do programa = %f ms", tempo);
   
	
   return 0;
}
int fibonacciRecursiva(int pos) {

   if(pos == 0) {
      return 0;
   }
	
   if(pos == 1) {
      return 1;
   }
   return fibonacciRecursiva(pos-1) + fibonacciRecursiva(pos-2);
}
//fim fibonacci recursiva

//fibonacci nao recursiva
int fibonacciNaoRecursivo(void) {
    
	double result, anterior1, anterior2, numlinhas, max;
    clock_t inicio, fim;
    float tempo;
    
	
	printf ("\n\n\t a sequencia de Fibonacci nao recursivo \n");
    printf("\n digite o numero maximo da sequencia: ");
    scanf("%lf", &max);
    anterior2 = 0;
    printf ("\n %0.lf", anterior2);
    
    anterior1 = 1;
    printf ("\n %0.lf", anterior1);
    inicio = clock();
    for (numlinhas = 2; numlinhas < max; ++numlinhas){
        result = anterior2 + anterior1;
        printf ("\n %0.lf", result);
        anterior2 = anterior1;
        anterior1 = result;
    }
        fim = clock();
        tempo=((float)fim-(float)inicio)/1000000.0;
        printf("\n\n Tempo de execucao do programa = %f ms", tempo);
    
    }
//fim fibonacci nao recursiva
