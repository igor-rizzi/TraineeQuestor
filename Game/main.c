#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"Portuguese");
	
	printf("----------- BEM VINDO AO GAME HYPER TEXT -----------\n");
	printf("\nVamos come�ar escolhendo o tipo do seu personagem!\n");
	printf("\nComo op��es temos os seguintes tipos de personagem:\n");
	printf("1 - Ladr�o\n2 - Guerreiro\n3 - Mago\n");
	int perso;
	scanf("%d", &perso);
	
	switch(perso){
		case 1: 
			printf("\nVoc� escolheu o personagem ladr�o e os seus atributos s�o:\n");
			printf("For�a: 7\n");
			printf("Destreza: 13\n");
			printf("Inteligencia: 11\n");
			printf("Vitalidade: 5\n");
		break;
		
		case 2:
			printf("\nVoc� escolheu o personagem guerreiro e os seus atributos s�o:\n");
			printf("For�a: 14\n");
			printf("Destreza: 9\n");
			printf("Inteligencia: 7\n");
			printf("Vitalidade: 15\n");
		break;
		
		case 3:
			printf("\nVoc� escolheu o personagem mago e os seus atributos s�o:\n");
			printf("For�a: 9\n");
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
