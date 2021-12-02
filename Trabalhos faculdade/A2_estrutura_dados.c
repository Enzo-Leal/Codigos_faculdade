#include <stdio.h>
#include <stdlib.h>
#include "locale.h"
#include <malloc.h>
#include <string.h>

#define VERD 1
#define FALSO 0


typedef struct Item {
    int codCliente, consumo, dia, mes, ano; 
    float precoUnit, valorTot; 
	char nome[40];
    struct Item *anterior;
} Elemento; 

int  EstaVazia(Elemento **topo) {
   if(*topo == NULL)  
      return VERD;  
   else  
      return FALSO;  
}

void Inicializar(Elemento **topo) {
   *topo = NULL;
}

void Empilhar(Elemento **topo) {
	
	int codCliente, consumo, dia, mes, ano;
	float precoUnit, valorTot;
	char nome[40];
    Elemento *novo;
    novo = (Elemento *) malloc(sizeof(Elemento)); 
      
    printf( "Digite o codigo do cliente: ");
    scanf("%d", &codCliente);
    printf( "Digite o nome do Cliente: ");
    scanf("%s", &nome);
    printf( "Digite o consumo do Cliente: ");
    scanf("%d", &consumo);
    printf( "Digite o valor unitario: ");
    scanf("%f", &precoUnit);
    valorTot = precoUnit * (float)consumo;
    printf( "Digite o dia do vencimento: ");
    scanf("%d", &dia);
    printf( "Digite o mes do vencimento: ");
    scanf("%d", &mes);
    printf( "Digite o ano do vencimento: ");
    scanf("%d", &ano);

    novo->codCliente = codCliente;
    novo->consumo = consumo;
    novo->dia = dia;
    novo->mes = mes;
    novo->ano = ano;
    strcpy(novo->nome, nome);
    novo->precoUnit = precoUnit;
    novo->valorTot = valorTot;
    
    novo->anterior = *topo; 
	*topo = novo;
}


int Desempilhar(Elemento **topo) {
   
   Elemento *antigo;
   antigo = *topo;
   
   if(EstaVazia(topo)) { 
        printf("\n A Pilha Esta Vazia! \n"); 
   }
   else {   
        
        *topo = antigo->anterior;
        free(antigo); 
   }  
   
}

void MostrarPilha(Elemento *topo) {
     int i = 0; 
    Elemento *item;
    printf("===================================\n\n");
    printf("\n\n Listando contas\n\n");

    if (EstaVazia(&topo)) {
        printf ("A Pilha esta vazia!\n\n\n");
    }
    else { 
        item = topo;
        while(item != NULL) {
            i++;
            printf("\nConta     	Item		  Valor         Endereco Ativo: %p Endereco Anterior: %p \n", item, item->anterior);
            printf("[Conta %2d] Codigo do cliente: -> %2d \n", i, item->codCliente);
            printf("[Conta %2d] Nome do Cliente:   -> %s \n", i, item->nome);
            printf("[Conta %2d] Consumo:           -> %.2d \n", i, item->consumo);
            printf("[Conta %2d] Valor Unitário:    -> %.2lf \n", i, item->precoUnit);
            printf("[Conta %2d] Valor Total:	      -> %.2lf \n", i, item->valorTot);
            printf("[Conta %2d] Data Vencimento:   -> %2d/%2d/%2d  \n", i, item->dia, item->mes, item->ano);   
            printf("\n\n\n");
            
            item = item->anterior;
        }
    }
}

void Menu() {
	printf("===================================\n");
	printf("PILHA DE CONTAS DE LUZ\n");
	printf("===================================\n\n");
    printf( "Digite a sua escolha: \n"
        "1 - Empilhar nova conta\n"
        "2 - Desempilhar conta\n"
        "3 - Listar contas \n"
        "4 - Sair\n\n\n"
        );
}
 
int main(){
  setlocale(LC_ALL, "Portuguese");
    Elemento *topo;
	Inicializar(&topo);
	
    int opcao;
        
    Menu();
    scanf("%d", &opcao);
    
    
    while (opcao != 4) {
        switch (opcao) {
            case 1: 
            
                Empilhar(&topo);
                MostrarPilha(topo);
                break;	
					
            case 2: 
            
            	printf("Ultima conta retirada da pilha!\n\n\n");
                Desempilhar(&topo);
                break;
                
            case 3:
            	MostrarPilha(topo);
        }
        
        Menu();
        scanf("%d", &opcao);   
        
        
    } 
    
    return 0;
} 



  

