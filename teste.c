#include <stdio.h>
#include <stdlib.h>

signed char RA, RB, RX, PC;

int main(){
	/*Funçao dados
	int aux;
	int i = 0;
	int vet[256];

	FILE *memoria = fopen("a.txt","r");
	if(memoria == NULL)
		printf("Erro no arquivo!");
	
	fscanf(memoria,"%d",&aux);
	RA = aux;
	fscanf(memoria,"%d",&aux);
	RB = aux;
	fscanf(memoria,"%d",&aux);
	RX = aux;
	fscanf(memoria,"%d",&aux);
	PC = aux;

	while(!feof(memoria)){
		fscanf(memoria,"%d",&vet[i]);
		i++;
	}
	for(i=0;i<256;i++){
		printf(" %d ",vet[i]);
	}
	printf("\n%d\n%d\n%d\n%d\n",RA,RB,RX,PC);
	*/
	char vet[23];
	signed char a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21;
	int c;
	FILE *instrucao = fopen("aa.txt","r");
	if(instrucao == NULL)
		printf("Erro no arquivo!");

	while(!feof(instrucao))
		fgets(vet,sizeof(vet),instrucao);
					
	printf("%s",vet);
	a1 = vet[0];
	a2 = vet[1];
	a3 = vet[2];
	a4 = vet[3];
	a5 = vet[4];
	a6 = vet[5];
	a7 = vet[6];
	a8 = vet[7];
	a9 = vet[8];
	a10 = vet[9];
	a11 = vet[10];
	a12 = vet[11];
	a13 = vet[12];
	a14 = vet[13];
	a15 = vet[14];
	a16 = vet[15];
	a17 = vet[16];
	a18 = vet[17];
	a19 = vet[18];
	a20 = vet[19];
	a21 = vet[20];
	printf("%d\n%d\n",vet[0],vet[1]);
	
	for(c=0;c<21;c++)
		printf("vet[%d]:%d\n",c,vet[c]-48);
	//RB = fgetc(memoria);
	//fgets(RA,15, memoria);
	//fgets(RB, sizeof(RB),memoria);
	//fgets(RX, sizeof(RX),memoria);
	//fgets(PC, sizeof(PC),memoria);
	//fscanf(memoria,"%c",&RA);
	
	//aux = fgetc(memoria);
	//fscanf(memoria,"%c",&aux);
	//fgets(RB, sizeof(RB),memoria);
	//itoa(,RA,2);
	//fscanf(memoria,"rx %c\n",&RX);
	//fscanf(memoria,"pc %c\n",&PC);
	//while(!feof(memoria)){
	//}

	//printf("%c\n\n",aux);
	//printf("%c\n\n",RB);
	//short int ch;
	//while( (ch=fgetc(arq))!= EOF )
	//	putchar(ch);

	//fgets(info, sizeof(info), arq)
}
