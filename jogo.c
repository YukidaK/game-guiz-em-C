#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(){
	int x=0, op=0, z=0, y=0, i=0;
	
	while(i<1){
		while(x<3){
	
			system("cls");
			printf("\t Total de erros: %i/3",z);
			printf("\nQual desses numeros e multiplo de 3");
			printf("\n[1] - 597413");
			printf("\n[2] - 987462");
			printf("\n[3] - 96481");
			printf("\n[4] - 87418");
			printf("\n[5] - 8754");
			printf("\nSua escolha: ");
			scanf("%i",&op);
			fflush(stdin);
			
			if(op >= 1 && op <= 5){
				switch(op){
					case 2:
						printf("\n OPCAO CORRETA!");
						getchar();
						x+=3;
						break;
					default:
						printf("\n OPCAO INCORRETA");
						getchar();
						x++;
						z++;
				}
			}
			else{
				printf("\nInformacao Invalida!");
				getchar();
			}
		}
		y=z;
		while(y<3){
			system("cls");
			printf("\t Total de erros: %i/3",z);
			printf("\n Qual e o nome dado ao elemento Na tem?");
			printf("\n[1] - Nitrogenio");
			printf("\n[2] - Enxofre");
			printf("\n[3] - Ouro");
			printf("\n[4] - Sodio");
			printf("\n[5] - Carbono");
			printf("\nSua escolha: ");
			scanf("%i",&op);
			fflush(stdin);
			
			if(op >= 1 && op <= 5){
				switch(op){
					case 4:
						printf("\n OPCAO CORRETA!");
						getchar();
						y+=3;
						break;
					default:
						printf("\n OPCAO INCORRETA");
						getchar();
						y++;
						z++;
				}
			}
			else{
				printf("\nInformacao Invalida!");
				getchar();
			}
		}
		x=z;
		while(x<3){
			system("cls");
			printf("\t Total de erros: %i/3",z);
			printf("\nQual e a sigla dado ao elemento ouro na tabela periodica?");
			printf("\n[1] - Si");
			printf("\n[2] - Y");
			printf("\n[3] - Go");
			printf("\n[4] - Au");
			printf("\n[5] - Ni");
			printf("\nSua escolha: ");
			scanf("%i",&op);
			fflush(stdin);
			
			if(op >= 1 && op <= 5){
				switch(op){
					case 4:
						printf("\n OPCAO CORRETA!");
						getchar();
						x+=3;
						break;
					default:
						printf("\n OPCAO INCORRETA");
						getchar();
						x++;
						z++;
				}
			}
			else{
				printf("\nInformacao Invalida!");
				getchar();
			}
		}
		y=z;
		while(y<3){
			system("cls");
			printf("\t Total de erros: %i/3",z);
			printf("\n Qual e o terceiro e setimo numero de PI depois da virgula?");
			printf("\n[1] - 4 e 6");
			printf("\n[2] - 1 e 5");
			printf("\n[3] - 1 e 4");
			printf("\n[4] - 4 e 4");
			printf("\n[5] - 1 e 6");
			printf("\nSua escolha: ");
			scanf("%i",&op);
			fflush(stdin);
			
			if(op >= 1 && op <= 5){
				switch(op){
					case 5:
						printf("\n OPCAO CORRETA!");
						getchar();
						y+=3;
						i++;
						break;
					default:
						printf("\n OPCAO INCORRETA");
						getchar();
						y++;
						z++;
				}
			}
			else{
				printf("\nInformacao Invalida!");
				getchar();
			}
		}
		while(z>2){
			system("cls");
			printf("\t total de erros: %i/3",z);
			printf("\n DERROTA!");
			printf("\n CONTINUAR? ");
			printf("\n[1] - SIM");
			printf("\n[2] - NAO");
			printf("\nEscolha uma opcao: ");
			scanf("%i",&op);
			fflush(stdin);
		
			switch(op){
				case 1:
					system("cls");
					printf("\nCarregando...");
					y=0;
					x=0;
					z=0;
					getchar();
					break;
				case 2:
					system("cls");
					printf("\nFinalizando...");
					getchar();
					return(0);
				default:
					printf("\nOpcao invalida");
			}
		}	
	}
	system("cls");
	printf("\t Vitoria!");
	printf("\n Voce acerto todas as perguntas");
	getchar();
}
