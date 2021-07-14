#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"Portuguese");
	
	printf("----------- BEM VINDO AO GAME HYPER TEXT -----------\n");
	printf("\nVamos começar escolhendo o tipo do seu personagem!\n");
	printf("\nComo opções temos os seguintes tipos de personagem:\n");
	printf("1 - Ladrão\n2 - Guerreiro\n3 - Mago\n");
	int personagem;
	scanf("%d", &personagem);
	
	switch(personagem){
		case 1: 
			printf("\nVocê escolheu o personagem ladrão e os seus atributos são:\n");
			printf("Força: 7\n");
			printf("Destreza: 13\n");
			printf("Inteligencia: 11\n");
			printf("Vitalidade: 5\n");
		break;
		
		case 2:
			printf("\nVocê escolheu o personagem guerreiro e os seus atributos são:\n");
			printf("Força: 14\n");
			printf("Destreza: 9\n");
			printf("Inteligencia: 7\n");
			printf("Vitalidade: 15\n");
		break;
		
		case 3:
			printf("\nVocê escolheu o personagem mago e os seus atributos são:\n");
			printf("Força: 9\n");
			printf("Destreza: 11\n");
			printf("Inteligencia: 15\n");
			printf("Vitalidade: 8\n");	
		break;
	}
	
	int idade;
	char nome[25], genero[9], next, direcao;
	printf("\nDigite o nome para o seu personagem:\n");
	scanf("%s", &nome);
	printf("\nInforme a idade do seu personagem:\n");
	scanf("%d", &idade);
	printf("\nInforme o gênero do seu personagem:\n");
	scanf("%s", &genero);
	
	printf("\nTUDO PRONTO VAMOS COMEÇAR.....\n");
	printf("\nVocê está aqui no TEMPLO INCIAL!!!");
	printf("\nDigite qualquer tecla e aperte enter para sair do TEMPLO!\n");
	scanf("%s", &next);
	
	printf("\nVocê chegou no pátio agora tens algumas direção que pode escolher:\n");
	printf("S - SUL (Vai para o portão do castelo)\n");
	printf("L - LESTE (Vai para o quarto)\n");
	printf("O - OESTE (Vai para a cozinha)\n");
	printf("N - NORTE (Volta para o TEMPLO INICIAL)");
	scanf("%s", &direcao);
	
	switch(direcao){
		case 'S':
			printf("Você está indo para portão do castelo!");
		break;
		
		case 'L':
			printf("Você está indo para o quarto!");
		break;
		
		case 'O': 
			printf("Você está indo para a cozinha!");
		break;
		
		case 'N':
			printf("Você está retornando ao TEMPLO!");
		break
		default: 
			printf("Opção inválida!!!");
		
	}
	
	
	
	return 0;
}
