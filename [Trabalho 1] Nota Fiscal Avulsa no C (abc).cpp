#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	char produto_1 [18], produto_2 [18], produto_3 [18], produto_4 [18], produto_5 [18], produto_6 [18], produto_7 [18], produto_8 [18];
	float valor_1, valor_2, valor_3, valor_4, valor_5, valor_6, valor_7, valor_8;
	float prt1, prt2, prt3, prt4, prt5, prt6, prt7, prt8;
	int cdg1 = 100, cdg2 = 110, cdg3 = 120, cdg4 = 130, cdg5 = 140, cdg6 = 150, cdg7 = 180, cdg8 = 190;
	int qtd_1, qtd_2, qtd_3, qtd_4, qtd_5, qtd_6, qtd_7, qtd_8;
	float preco_total;
	
	printf("Crie um programa que leia as seguintes informações de 8 produto: Código, Quantidade,Descrição (Nome do Produto), Preço Unitário, Preço Total\n\n");
	printf("\nNOME DO PRODUTO: ");
	gets(produto_1);
	printf("VALOR DO PROUTO: ");
	scanf("%f", &valor_1);
	printf("QUANTIDADE DO PRODUTO: ");
	scanf("%d", &qtd_1);	
	fflush(stdin);
	
	printf("\nNOME DO PRODUTO 2: ");
	gets(produto_2);
	printf("VALOR DO PROUTO 2: ");
	scanf("%f", &valor_2);
	printf("QUANTIDADE DO PRODUTO 2: ");
	scanf("%d", &qtd_2);
	fflush(stdin);
	
	printf("\nNOME DO PRODUTO: ");
	gets(produto_3);
	printf("VALOR DO PROUTO: ");
	scanf("%f", &valor_3);
	printf("QUANTIDADE DO PRODUTO: ");
	scanf("%d", &qtd_3);
	fflush(stdin);
	
	printf ("\nNOME DO PRODUTO 4: ");
	gets (produto_4);
	printf ("VALOR DO PROUTO 4: ");
	scanf (" %f", &valor_4);
	printf ("QUANTIDADE DO PRODUTO 4: ");
	scanf ("%d", &qtd_4);
	fflush (stdin);
	
	printf("\nNOME DO PRODUTO 5: ");
	gets(produto_5);
	printf("VALOR DO PROUTO 5: ");
	scanf("%f", &valor_5);
	printf("QUANTIDADE DO PRODUTO 5: ");
	scanf("%d", &qtd_5);
	fflush(stdin);
	
	printf("\nNOME DO PRODUTO 6: ");
	gets(produto_6);
	printf("VALOR DO PROUTO 6: ");
	scanf("%f", &valor_6);
	printf("QUANTIDADE DO PRODUTO 6: ");
	scanf("%d", &qtd_6);
	fflush(stdin);
	
	printf("\nNOME DO PRODUTO 7: ");
	gets(produto_7);
	printf("VALOR DO PROUTO 7: ");
	scanf("%f", &valor_7);
	printf("QUANTIDADE DO PRODUTO 7: ");
	scanf("%d", &qtd_7);
	fflush(stdin);
	
	printf("\nNOME DO PRODUTO 8: ");
	gets(produto_8);
	printf("VALOR DO PROUTO 8: ");
	scanf("%f", &valor_8);
	printf("QUANTIDADE DO PRODUTO 8: ");
	scanf("%d", &qtd_8);
	fflush(stdin);
	
    prt1 = valor_1 * qtd_1; 
	prt2 = valor_2 * qtd_2; 
	prt3 = valor_3 * qtd_3;
    prt4 = valor_4 * qtd_4; 
    prt5 = valor_5 * qtd_5;
	prt6 = valor_6 * qtd_6;
	prt7 = valor_7 * qtd_7; 
	prt8 = valor_8 * qtd_8;
	
	preco_total = prt1 + prt2 + prt3 + prt4 + prt5 + prt6 + prt7 + prt8;
		
	system ("cls");
	
	printf("%-8s| %-8s| %-10s |%-10s| %-10s\n","Codigo", "Quantidade", "Discriminacao", "Preco Unitario", "Preco Total");
	printf("%-8d| %-8d| %-10s |R$ %12.2f |R$ %12.2f|\n", cdg1, qtd_1, produto_1, valor_1, prt1);
	printf("%-8d| %-8d| %-10s |R$ %12.2f |R$ %12.2f|\n", cdg2, qtd_2, produto_2, valor_2, prt2);
	printf("%-8d| %-8d| %-10s |R$ %12.2f |R$ %12.2f|\n", cdg3, qtd_3, produto_3, valor_3, prt3);
	printf("%-8d| %-8d| %-10s |R$ %12.2f |R$ %12.2f|\n", cdg4, qtd_4, produto_4, valor_4, prt4);
	printf("%-8d| %-8d| %-10s |R$ %12.2f |R$ %12.2f|\n", cdg5, qtd_5, produto_5, valor_5, prt5);
	printf("%-8d| %-8d| %-10s |R$ %12.2f |R$ %12.2f|\n", cdg6, qtd_6, produto_6, valor_6, prt6);
	printf("%-8d| %-8d| %-10s |R$ %12.2f |R$ %12.2f|\n", cdg7, qtd_7, produto_7, valor_7, prt7);
	printf("%-8d|%-8d |%-10s  |R$ %12.2f |R$ %12.2f|\n", cdg8, qtd_8, produto_8, valor_8, prt8);
	printf("%-8s| %-8s| %-10s |%-10s |R$ %10.2f|\n", "", "", "", "Total", preco_total);
	
    system ("pause");

	return 0;
}
	
