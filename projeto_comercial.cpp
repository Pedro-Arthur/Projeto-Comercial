/* Trabalho de Algotítmos e Técnicas de Programação */
/* Tema: Loja de Filmes */
/* Primeiro Período de Sistemas de Informação - UNIPAM */
/* Professor: Sandro de Paula Matias */
/* Aluno: Pedro Arthur Simeão */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
	// CONFIGURAÇÕES
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	// DECLARAÇÃO DAS VARIÁVEIS
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
	
	// INICIALIZAÇÃO DAS VARIÁVEIS
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
	
	// MENU DE INTERAÇÃO
	while(sair == 2)
	{
		printf("\n\tMENU DE INTERAÇÃO\n\n");
		printf("\t1 - Cadastrar\n");
		printf("\t2 - Consultar\n");
		printf("\t3 - Sobre\n");
		printf("\t4 - Sair\n");
		printf("\n\tEscolha uma opção: ");
		scanf("%d",&opcao);
		
		// OPÇÕES
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
					
					printf("\n  - Digite o preço do filme: ");
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
					printf("\n Código de cadastro: %d\n\n",contador);
				}
				
				printf(" Digite o código do cadastro que deseja consultar: ");
				scanf("%d",&consultar);
				
				printf("\n Nome do filme: %s \n",nomeFilme[consultar]);
				printf(" Diretor do filme: %s \n",diretorFilme[consultar]);
				printf(" Produtor do filme: %s \n",produtorFilme[consultar]);
				printf(" Preço do filme: %s \n\n",precoFilme[consultar]);
				
			system("pause");
			break;
			
			case 3:
				printf("\n\n === SOBRE === \n\n");
				printf(" * Trabalho de Algotítmos e Técnicas de Programação\n");
				printf(" * Tema: Loja de Filmes\n");
				printf(" * Primeiro Período de Sistemas de Informação - UNIPAM\n");
				printf(" * Professor: Sandro de Paula Matias\n");
				printf(" * Aluno: Pedro Arthur Simeão\n\n");
				
			system("pause");
			break;
			
			case 4:
				printf("\n\n === SAIR === \n");
				printf("\n Deseja mesmo sair? (1-SIM, 2-NÃO) ");
				scanf("%d",&sair);
			break;
			
			default:
    			printf ("\n Opção inválida!\n");
    			
		} // FIM DO SWITCH

	} // FIM DO WHILE
	
	// MOLDURA FINAL
	printf("\n Até mais!\n\n");
	printf("================================================================================");
	printf("================================================================================");

	return 0;
	system("pause");
	
} // FIM DO PROGRAMA
