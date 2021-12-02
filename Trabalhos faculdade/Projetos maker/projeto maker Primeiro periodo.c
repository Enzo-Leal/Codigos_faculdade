#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


struct Produtos{ 
 char nomeProd[30], categoria[20], descricao[70]; 
 int codigo, qtdEst, qtdMinEst; 
 float valor; 
};

struct Carrinho { // struct carrinho de compras
char nomeCliente[50];
int codProduto, qtdDesejada;
float valTotal;
};


int MENU_CLIENTE(){
	struct Produtos cadProduto[5];
	struct Carrinho pedido;
	int i, pesqProd,achei=0, posicao, compra, codDesejo, posicaoC, acheiC=0, qtdCompra ;
	
	printf("\n\n-------------------- Lista de Produtos ---------------------\n");
printf("\nCodigo \t Valor \tEstoque \n");
for (i=0; i<3; i++)
{
printf("%d \t %.2f \t %d \n", cadProduto[i].codigo, cadProduto[i].valor, cadProduto[i].qtdEst);
}
printf("\n-------------------------------------------------------------------\n");
printf("Informe o codigo do produto que deseja..: ");
scanf("%d", &codDesejo);
// Pesquisando se o codigo do produto está cadastrado
for (i=0; i<3;i++)
{
if (cadProduto[i].codigo == codDesejo)
{
posicaoC = i;
acheiC = 1;
break;
}
}
if (acheiC ==1)
{
printf("\nQuantidade desejada..: ");
scanf("%d", &qtdCompra);
pedido.codProduto = codDesejo;
pedido.qtdDesejada = qtdCompra;
pedido.valTotal = qtdCompra * cadProduto[posicaoC].valor;
printf("\n--------------- Dados da Compra -------------------\n");
printf("Codigo do produto..: %d", pedido.codProduto);
printf("\nQuantidade Desejada..: %d", pedido.qtdDesejada);
printf("\nValor Total..: %.2f", pedido.valTotal);
printf("\n-----------------------------------------------------------------\n");

 }
else
{
printf("\n Produto nao disponivel");
}
	
	
}



int MENU_FUNCIONARIO(){
	struct Produtos cadproduto[5];
	
	int OPCAO_FUNCIONARIO, i, pesqprod, achei=0, posicao,compra;
	
	
	printf("digite a opçao desejada: \t  1 - cadastrar produtos \t  2 - Sair\n");
	scanf("%d", &OPCAO_FUNCIONARIO);
	if(OPCAO_FUNCIONARIO == 1){
	
		for(i=0;i< 3; i++) 
 	{ 
 	printf("Codigo..: "); 
 	scanf("%d", &cadproduto[i].codigo); 
 	printf("Valor..: "); 
 	scanf("%f", &cadproduto[i].valor); 
 	printf("Quantidade em Estoque..: "); 
 	scanf("%d", &cadproduto[i].qtdEst); 
	printf("Quantidade Mínima de Estoque..: "); 
	scanf("%d", &cadproduto[i].qtdMinEst); 
	printf("\n--------------------------------------------------\n"); 
 	} 
	
		
		printf("\n\n ----------------------------PESQUISANDO PRODUTO----------------------\n");
		//printf("\n Produtos em estoque: \n");
		printf("Lista de produtos cadastrados\n");
                    for(i=0;i<3;i++){
                        printf("Produto %d \n",i+1);
                        printf("+++++++++++++++++++++++\n");
                        printf("Codigo do produto:     %d\n",cadproduto[i].codigo);
                        printf("Quantidade no estoque: %d\n",cadproduto[i].qtdEst);
                        printf("Quantidade minima no estoque:  %d\n",cadproduto[i].qtdMinEst);
                        printf("Preço do produto:      %.2f\n",cadproduto[i].valor);
                        printf("+++++++++++++++++++++++\n");
                    }
        return 1;
		
	}else if(OPCAO_FUNCIONARIO == 2){
		MENU_FUNCIONARIO();
	}else{
		printf("opcao invalida, tente novamente!");
		MENU_FUNCIONARIO();
	}
		
}
int main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	int MENU_INICIAL;
	struct Produtos cadproduto[5];
	
	int OPCAO_FUNCIONARIO, i, pesqprod, achei=0, compra;
	
	struct Produtos cadProduto[5];
	struct Carrinho pedido;
	int pesqProd, posicao, codDesejo, posicaoC, acheiC=0, qtdCompra ;
	
	printf("Bem vindo a Select Auto, se é  nosso cliente digite 1 se é nosso funcionario aperte 2\n");
	scanf("%d", &MENU_INICIAL);
	
	switch(MENU_INICIAL)
	{
		case 1:
		struct Produtos cadProduto[5];
		struct Carrinho pedido;
		int i, pesqProd,achei=0, posicao, compra, codDesejo, posicaoC, acheiC=0, qtdCompra ;
	
		printf("\n\n-------------------- Lista de Produtos ---------------------\n");
	printf("\nCodigo \t Valor \tEstoque \n");
	for (i=0; i<3; i++)
	{
	printf("%d \t %.2f \t %d \n", cadProduto[i].codigo, cadProduto[i].valor, cadProduto[i].qtdEst);
	}
	printf("\n-------------------------------------------------------------------\n");
	printf("Informe o codigo do produto que deseja..: ");
	scanf("%d", &codDesejo);
	// Pesquisando se o codigo do produto está cadastrado
	for (i=0; i<3;i++)
	{
	if (cadProduto[i].codigo == codDesejo)
	{
	posicaoC = i;
	acheiC = 1;
	break;
	}
	}
	if (acheiC ==1)
	{
	printf("\nQuantidade desejada..: ");
	scanf("%d", &qtdCompra);
	pedido.codProduto = codDesejo;
	pedido.qtdDesejada = qtdCompra;
	pedido.valTotal = qtdCompra * cadProduto[posicaoC].valor;
	printf("\n--------------- Dados da Compra -------------------\n");
	printf("Codigo do produto..: %d", pedido.codProduto);
	printf("\nQuantidade Desejada..: %d", pedido.qtdDesejada);
	printf("\nValor Total..: %.2f", pedido.valTotal);
	printf("\n-----------------------------------------------------------------\n");

 	}
	else
	{
	printf("\n Produto nao disponivel");
	}
	
	break;
	
	case 2:
		
		
		struct Produtos cadproduto[5];
	
	int OPCAO_FUNCIONARIO, i, pesqprod, achei=0, posicao,compra;
	
	
	printf("digite a opçao desejada: \t  1 - cadastrar produtos \t  2 - Sair\n");
	scanf("%d", &OPCAO_FUNCIONARIO);
	if(OPCAO_FUNCIONARIO == 1){
	
		for(i=0;i< 3; i++) 
 	{ 
 	printf("Codigo..: "); 
 	scanf("%d", &cadproduto[i].codigo); 
 	printf("Valor..: "); 
 	scanf("%f", &cadproduto[i].valor); 
 	printf("Quantidade em Estoque..: "); 
 	scanf("%d", &cadproduto[i].qtdEst); 
	printf("Quantidade Mínima de Estoque..: "); 
	scanf("%d", &cadproduto[i].qtdMinEst); 
	printf("\n--------------------------------------------------\n"); 
 	} 
	
		
		printf("\n\n ----------------------------PESQUISANDO PRODUTO----------------------\n");
		//printf("\n Produtos em estoque: \n");
		printf("Lista de produtos cadastrados\n");
                    for(i=0;i<3;i++){
                        printf("Produto %d \n",i+1);
                        printf("+++++++++++++++++++++++\n");
                        printf("Codigo do produto:     %d\n",cadproduto[i].codigo);
                        printf("Quantidade no estoque: %d\n",cadproduto[i].qtdEst);
                        printf("Quantidade minima no estoque:  %d\n",cadproduto[i].qtdMinEst);
                        printf("Preço do produto:      %.2f\n",cadproduto[i].valor);
                        printf("+++++++++++++++++++++++\n");
                    }
        return 1;
		
	}else if(OPCAO_FUNCIONARIO == 2){
		MENU_FUNCIONARIO();
	}else{
		printf("opcao invalida, tente novamente!");
	}
	
	break;
	
	
		
	}
}

