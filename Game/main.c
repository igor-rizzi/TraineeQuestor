#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"Portuguese");
	
	printf("----------- BEM VINDO AO GAME HYPER TEXT -----------\n");
	printf("\nVamos come�ar escolhendo o tipo do seu personagem!\n");
	printf("\nComo op��es temos os seguintes tipos de personagem:\n");
	printf("1 - Ladr�o\n2 - Guerreiro\n3 - Mago\n");
	int personagem;
	scanf("%d", &personagem);
	
	switch(personagem){
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
	
	int idade;
	char nome[25], genero[9], next, direcao;
	printf("\nDigite o nome para o seu personagem:\n");
	scanf("%s", &nome);
	printf("\nInforme a idade do seu personagem:\n");
	scanf("%d", &idade);
	printf("\nInforme o g�nero do seu personagem:\n");
	scanf("%s", &genero);
	
	printf("\nTUDO PRONTO VAMOS COME�AR.....\n");
	
	do{
		printf("\nVoc� est� aqui no TEMPLO INCIAL!!!");
		printf("\nDigite qualquer tecla e aperte enter para sair do TEMPLO!\n");
		scanf("%s", &next);
	
		printf("\nVoc� chegou no p�tio agora tens algumas dire��o que pode escolher:\n");
		printf("S - SUL (Vai para o port�o do castelo)\n");
		printf("L - LESTE (Vai para o quarto)\n");
		printf("O - OESTE (Vai para a cozinha)\n");
		printf("N - NORTE (Volta para o TEMPLO INICIAL)\n");
		scanf("%s", &direcao);
		
		
		//	switch(direcao){
		//		case 'S':
		//			printf("Voc� est� no port�o do castelo!");
		//		break;
		//		case 'L':
		//			printf("Voc� est� no quarto!\n");
		//		break;
		//		case 'O': 
		//			printf("Voc� est� na cozinha!");		
		//		break;
		//		case 'N':
		//			printf("Voc� retornou ao TEMPLO!");
		//		break;
		//		default: 
		//			printf("Op��o inv�lida!!!");
		//		break;
		//	}
		
		if(direcao == 'L'){
			printf("\nEntrando no quarto....\n");
			printf("\nObserve que este quarto possui, uma cama, um arm�rio, um ba�, uma janela com vista para o p�tio e um espelho!\n");
			printf("Dentro do ba� e do arm�rio, existem itens que voc� pode pegar!!\n");
		} else if (direcao == 'O'){
			printf("\nEntrando na cozinha....\n");
			printf("\nNeste ambiente voc� pode pegar alimentos e armas brancas!");
			printf("\nObserve que neste ambiente existem, uma pia, uma mesa de jantar, uma janela com vista para o pantano, uma geladeira e um fog�o!");
		} else if (direcao == 'S'){
			printf("\nIndo para o port�o....\n");
			printf("\nVoc� est� saindo do castelo, pode escolher qual dire��o vai pegar:\n");
		} else if(direcao == 'N'){
			printf("\nVOLTANDO PARA O TEMPLO INICIAL....\n");
		}
	} while(direcao == 'N');
		
	
	return 0;
}
