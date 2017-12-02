#include<stdio.h>
#include<stdlib.h>
		/*quando eu nao coloco { chaves } em if, for etc ele pega somente a proxima linha de comando (so uma linha de comando) eu tenho mania
		de fazer assim, economiza linhas*/
int main() 
{  
	int jogo[9][9],i,j;
	
	for(i=0;i<9;i++)
	for(j=0;j<9;j++)
	jogo[i][j]=0;   //colocar zero em todos itens da matriz
	int linha[30]={0,0,0,1,1,1,1,2,2,2,3,3,3,4,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8};
	int coluna[30]={0,1,4,0,3,4,5,1,2,7,0,4,8,0,3,5,8,0,4,8,1,6,7,3,4,5,8,4,7,8};
	int valor[30]={5,3,7,6,1,9,5,9,8,6,8,6,3,4,8,3,1,7,2,6,6,2,8,4,1,9,5,8,7,9}; //numeros e localizacao de cada um
	
	for(i=0;i<30;i++)
	jogo[ linha[i] ] [ coluna[i] ]= valor[i]; //implementar os numeros
	printf("...............................\n.");	//pontilhados de cima 
	
	for(i=0;i<9;i++)
	{
	for(j=0;j<9;j++)
		{	
		printf(" %d ", jogo[i][j]);  //imprimir os numeros da matriz (um de espaco no inicio e um no fim)
		if(j==2||j==5)   //separar a cada 3x3 vertical
		printf(".");
		}
	if(i==2||i==5||i==8)  //separar a cada 3x3 horizontal
	printf(".\n..............................");
	if(i<8)   //tava sobrando pontos no fim, por isso criei esse if
	printf(".\n.\t  .\t    .\t      .\n.");
	}
	printf(".");
}
