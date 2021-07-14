#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"Portuguese");
	
	printf("----------- BEM VINDO AO GAME HYPER TEXT -----------\n");
	printf("\nVamos começar escolhendo o tipo do seu personagem!\n");
	printf("\nComo opções temos os seguintes tipos de personagem:\n");
	printf("1 - Ladrão\n2 - Guerreiro\n3 - Mago\n");
	int perso;
	scanf("%d", &perso);
	
	switch(perso){
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
	
	char nome[25];
	printf("\nDigite o nome para o seu personagem:\n");
	scanf("%s", &nome);
	
	
	return 0;
}
