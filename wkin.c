#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SENTINELA 0.0

int main(int argc, char *argv[]) {
	
	int num,numApostado,auxRandom; 
	int reverse=0,i=0,sumRandom=0;
	float valor=1,pago,lucro=0,perda=0;
	float perdat=0,lucrot=0,dif=0; 

	while(valor!=SENTINELA){		
		srand(time(NULL));
		int random=1+rand()%50;
		random=20;
						
		printf("----------------INTRODUZIR OS DADOS----------------\n");
		printf("\nEntre com o valor da aposta: Kz "); 
		scanf("%f",&valor);		
			// Verificar se o numero apostado esta no intervalo certo
		if(valor<0){
			printf("\nERRO: valor de aposta invalido.\n");
			printf("\n---------------------------------------------------\n\n");
		}else if(valor>0){
				printf("\nEntre com o numero da aposta [1-50]:");
				scanf("%d",&numApostado);
				if(numApostado>50){ 	
					printf("\nErro: numero apostado invalido\n");
					printf("\n---------------------------------------------------\n\n");
				}
				else{
					if(numApostado<=0){
						printf("\nERRO: numero apostado invalido\n");
						printf("\n---------------------------------------------------\n\n");
					} 
					else{
						// Calcular o inverso do numero apostado
							num=numApostado;
							while(num!=0){ 
								reverse=(reverse*10)+(num%10);
								num=num/10; 
							}
							// Calcular a soma dos digitos do numero aleatorio
							auxRandom=random;
							while(auxRandom!=0){	
								sumRandom=sumRandom+(auxRandom%10);
								auxRandom=auxRandom/10;
							}		
							i++;
							printf("\n___________________________________________________\n");
							printf("JOGADA %d\n\n",i);
							printf("Quantia apostada: %.2f\n",valor);
							printf("Numero apostado: %d\n",numApostado);
							printf("Numero sorteado: %d\n",random);	
								// Verificar se o numero apostado eh igual ao numero sorteado
							if(numApostado==random){
								pago=5*valor;
								lucro=pago-valor;
								printf("\nJogador acertou o numero sorteado\n");
								printf("---------------------------------------------------");
								printf("\nCassino pagou: Kz %.2f",pago);
								printf("\nJogador ganhou Kz %.2f",lucro);
							} 
								// Verificar se o inverso do numero apostado eh igual ao numero sorteado
							else if(random==reverse){
									if(numApostado%10!=0){               
										if (random%10!=0){
											pago=3*valor;
											lucro=pago-valor;
											printf("\nJogador acertou na ordem inversa\n");
											printf("---------------------------------------------------");
											printf("\nCassino pagou: Kz %.2f",pago);
											printf("\nJogador ganhou Kz %.2f",lucro);
										}else{
											perda=valor;
											printf("\nJogador nao acertou no numero sorteado\n");
											printf("---------------------------------------------------");
											printf("\nCassino pagou %.2f",pago*0);
											printf("\nJogador perdeu: Kz %.2f",perda);	
										}
									}else{
										perda=valor;
										printf("\nJogador nao acertou no numero sorteado\n");
										printf("---------------------------------------------------");
										printf("\nCassino pagou %.2f",pago*0);
										printf("\nJogador perdeu: Kz %.2f",perda);
									}
								}
									// Verificar se os numeros sao iguais na dezena 
								else if(numApostado/10==random/10){       
										if(numApostado/10!=0){     
												pago=2*valor;
												lucro=pago-valor;
												printf("\nJogador acertou na dezena\n");
												printf("---------------------------------------------------");
												printf("\nCassino pagou: Kz %.2f",pago);
												printf("\nJogador ganhou Kz %.2f",lucro);
										}else{
											perda=valor;
											printf("\nJogador nao acertou no numero sorteado\n");
											printf("---------------------------------------------------");
											printf("\nCassino pagou %.2f",pago*0);
											printf("\nJogador perdeu: Kz %.2f",perda);	
										}					
									}
										// Verificar se os numeros sao iguais na unidade 
									else if(numApostado%10==random%10){ 
											pago=2*valor;
											lucro=pago-valor;
											printf("\nJogador acertou na unidade\n");
											printf("---------------------------------------------------");
											printf("\nCassino pagou: Kz %.2f",pago);
											printf("\nJogador ganhou Kz %.2f",lucro);	
										}	
											// Verificar se o numero apostado eh igual a dezena do sorteado
										else if(numApostado==random/10){
												pago=2*valor;
												lucro=pago-valor;
												printf("\nJogador acertou na dezena do numero sorteado\n");
												printf("---------------------------------------------------");
												printf("\nCassino pagou: Kz %.2f",pago);
												printf("\nJogador ganhou Kz %.2f",lucro);
											}
												// Verificar se o numero apostado eh igual a soma do sorteado
											else if(numApostado==sumRandom){
													pago=2*valor;
													lucro=pago-valor;
													printf("\nJogador acertou na soma dos numeros sorteados\n");
													printf("---------------------------------------------------");
													printf("\nCassino pagou: Kz %.2f",pago);
													printf("\nJogador ganhou Kz %.2f",lucro);
												}
												else{
														// Verificar se os numeros sao iguais na paridade 
													if(numApostado%2==random%2){
														pago=valor;
														lucro=pago-valor;
														printf("\nJogador acertou na paridade\n");
														printf("---------------------------------------------------");
														printf("\nCassino pagou: Kz %.2f",valor);
														printf("\nJogador ganhou Kz %.2f",lucro);							
													}else{
														perda=valor;
														printf("\nJogador nao acertou no numero sorteado\n");
														printf("---------------------------------------------------");
														printf("\nCassino pagou %.2f",pago*0);
														printf("\nJogador perdeu: Kz %.2f",perda);			
													}
												}
							printf("\n---------------------------------------------------\n\n");						
							perdat+=perda;
							lucrot+=lucro;
							if(lucrot>perdat){
								dif=lucrot-perdat;
								printf("Ate agora o jogador tem um lucro de %.2f\n",dif);		
							}else if(lucrot<perdat){
									dif=perdat-lucrot;
									printf("Ate agora o jogador tem um prejuizo de %.2f\n",dif);
								}else 
									printf("Ate agora o jogador nao tem lucro nem prejuizo\n");	
							printf("\n---------------------------------------------------\n\n");
							lucro=perda=sumRandom=reverse=0;	
						}
				}
			}	
	}
	printf("\n---------------------------------------------------\n\n");
	printf("Apos uma sequencia de %d jogadas, o jogador ",i);	
	if(lucrot>perdat)
		printf("tem um lucro de %.2f\n",dif);
	else if(lucrot<perdat)
			printf("tem um prejuizo de %.2f\n",dif);	
		else
			printf("nao tem lucro nem prejuizo\n");
	printf("\n");		
	system("PAUSE");
	return 0;
}
