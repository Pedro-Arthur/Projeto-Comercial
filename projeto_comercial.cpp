/* Trabalho de Algot�tmos e T�cnicas de Programa��o */
/* Tema: Loja de Filmes */
/* Primeiro Per�odo de Sistemas de Informa��o - UNIPAM */
/* Professor: Sandro de Paula Matias */
/* Aluno: Pedro Arthur Sime�o */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
	// CONFIGURA��ES
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	// DECLARA��O DAS VARI�VEIS
	int sair;
	int opcao;
	int contador = 1;
	int cadastrar;
	char nomeFilme[30][40];
	char diretorFilme[30][40];
	char produtorFilme[30][40];
	char precoFilme[30][40];
	int armazenar;
	int consultar;
	
	// INICIALIZA��O DAS VARI�VEIS
	sair = 2;
	armazenar = 0;
	
	// MOLDURA INICIAL
	printf("================================================================================");
	printf("================================================================================");
	
	// MENSAGEM DE BOAS VINDAS
	printf("\n\t\t*----------------------------------------*",201,187);
	printf("\n\t\t|                BEM VINDO               |\n");
	printf("\t\t*----------------------------------------*\n",200,188);
	
	// DESENHO DE TEMA
	printf("\n\t..........................................................");
	printf("\n\t..........................................................");
	printf("\n\t............:=====================:..........-:...........");
	printf("\n\t...........+WWWWWWWWWWWWWWWWWWWWWWW*......+@WW+...........");
	printf("\n\t...........+WWWWWWWWWWWWWWWWWWWWWWW*..-=WWWWWW+...........");
	printf("\n\t...........+WWWW@WWWWWWWWWWWWWWWWWW*.:WWWW@WWW+...........");
	printf("\n\t...........+W@@@@@@@@@@@@@@@@@@@@@@*-+W@@@@@@W+...........");
	printf("\n\t...........+W@@@@@@@@@@@@@@@@@@@@@@*.:@@@@@@@W+...........");
	printf("\n\t...........+WWWWWWWWWWWWWWWWWWWWWWW*.:WWWWWWWW+...........");
	printf("\n\t...........+WWWWWWWWWWWWWWWWWWWWWWW*....+@WWWW+...........");
	printf("\n\t...........-WWWWWWWWWWWWWWWWWWWWWWW:.......-=W+...........");
	printf("\n\t..........................................................");
	printf("\n\t..........................................................\n\n");
	
	// MENU DE INTERA��O
	while(sair == 2)
	{
		printf("\n\tMENU DE INTERA��O\n\n");
		printf("\t1 - Cadastrar\n");
		printf("\t2 - Consultar\n");
		printf("\t3 - Sobre\n");
		printf("\t4 - Sair\n");
		printf("\n\tEscolha uma op��o: ");
		scanf("%d",&opcao);
		
		// OP��ES
		switch(opcao)
		{
			case 1:
				printf("\n\n === CADASTRO === \n");
				printf("\n Quantos cadastros deseja fazer? ");
				scanf("%d",&cadastrar);
				
				for(contador=0; contador<cadastrar; contador++)
				{
					printf("\n  - Digite o nome do filme: ");
					fflush(stdin);
					scanf("%[^\n]s",&nomeFilme[armazenar]);
					
					printf("\n  - Digite o nome do diretor do filme: ");
					fflush(stdin);
					scanf("%[^\n]s",&diretorFilme[armazenar]);
					
					printf("\n  - Digite o nome do produtor do filme: ");
					fflush(stdin);
					scanf("%[^\n]s",&produtorFilme[armazenar]);
					
					printf("\n  - Digite o pre�o do filme: ");
					fflush(stdin);
					scanf("%[^\n]s",&precoFilme[armazenar]);
					
					printf("\n Cadastro realizado com sucesso!\n\n");
				armazenar++;
				}
			system("pause");
			break;
			
			case 2:
				printf("\n\n === CONSULTA === \n");
				for(contador=0; contador<armazenar; contador++)
				{
					printf("\n C�digo de cadastro: %d\n\n",contador);
				}
				
				printf(" Digite o c�digo do cadastro que deseja consultar: ");
				scanf("%d",&consultar);
				
				printf("\n Nome do filme: %s \n",nomeFilme[consultar]);
				printf(" Diretor do filme: %s \n",diretorFilme[consultar]);
				printf(" Produtor do filme: %s \n",produtorFilme[consultar]);
				printf(" Pre�o do filme: %s \n\n",precoFilme[consultar]);
				
			system("pause");
			break;
			
			case 3:
				printf("\n\n === SOBRE === \n\n");
				printf(" * Trabalho de Algot�tmos e T�cnicas de Programa��o\n");
				printf(" * Tema: Loja de Filmes\n");
				printf(" * Primeiro Per�odo de Sistemas de Informa��o - UNIPAM\n");
				printf(" * Professor: Sandro de Paula Matias\n");
				printf(" * Aluno: Pedro Arthur Sime�o\n\n");
				
			system("pause");
			break;
			
			case 4:
				printf("\n\n === SAIR === \n");
				printf("\n Deseja mesmo sair? (1-SIM, 2-N�O) ");
				scanf("%d",&sair);
			break;
			
			default:
    			printf ("\n Op��o inv�lida!\n");
    			
		} // FIM DO SWITCH

	} // FIM DO WHILE
	
	// MOLDURA FINAL
	printf("\n At� mais!\n\n");
	printf("================================================================================");
	printf("================================================================================");

	return 0;
	system("pause");
	
} // FIM DO PROGRAMA
