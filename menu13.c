#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
 
 int main(){
 	int opcao;
    int retorno;
 	printf("bem vindo ao menu do jogo");
 	printf("\nqual jogo voce escolhe\n 1 para perguntas e respostas.\n 2 para advinhe o numero.\n 3 olho de cobra.\n");
 	scanf("%d",&opcao);
 	switch(opcao){
 		case 1:
 			do{
 				
 					int a,b,c;
 	
 	char re,se,ri;
 	
	
 	  printf("Bem vindo ao jogo de perguntas\n");
	  printf("escolhar uma categoria:\n1 para filme\n2 para serie; ");
	
 	 scanf("%d",&re);
 	 
 	 switch(re){//perguntas de filmes.
 	  case 1:
 	  
			printf("Em star wars qual o nome da nave do han solo?");//pergunta 1 inicio
			 fflush(stdin);
				printf("\n a)estrela da morte\n b)uss enterprise\n c)Millennium Falcon\n");
				scanf("%c",&c);
				switch(c){
				
		    
			case 'c':
		    	printf("a forca e poderosa nele\n");
				break;
		
			 default:
			printf("treine mais jovem padawan c)Millennium Falcon\n");
			break;//final da pergunta 1
		}
			printf("\nquantos filmes do shaknado existem\n");//pergunta 2
			printf(" 7\n 8\n 6\n");
			scanf("%d",&a);
			switch(a){
				
		    
			case 6:
		    	printf("arruma uma namorada\n");
				break;
		
			default:
			printf("parabens voce tem bom gosto sao 6 filmes\n ");
			break;//final pergunta 2
			
			}
				printf("Em De volta para o futuro,qual a velocidade que DeLorean tem que atingir ;\n");//pergunta 3
				printf(" a)87 milhas por hora.\n b)89 milhas por hora.\n c)88 milhas por hora.\n");
				fflush(stdin);
				scanf("%c",&b);
				switch(b){
				
		    
			case 'c':
		    	printf("boa viagem\n");
				break;
				
				
			default:
			printf("volte no tempo assista\nc)88 milhas por hora. ");
			break;//pergunta 3 final
			
	}
	break;//para o programa de filmes
		case 2://perguntas de series.
		
			printf("\nqual alternativa correta;\nNa serie vikings quantos filhos Ragnar lothbrok teve?");
			printf(" \n a)3\n b)4\n c)5\n");
			fflush(stdin);
			scanf("%c",&se);
			switch(se)
			{
				case 'b':
					printf("acertou !!!!!");
					break;
				
					default:
			printf("voce nao vai para valhalla\nsao 4 filhos\n");
			break;//pergunta 1 final
			}
				printf("\nNa serie breaking bad qual droga professor de quimica fabricava?\n");
			printf(" a)Maconha\n b)Crack\n c)Metanfetamina\n");
			fflush(stdin);
			scanf("%c",&se);
			switch(se)
			{
				case 'c':
					printf("acertou!!!!!!!");
					break;
						default:
			printf("voce esta viajando c)Metanfetamina\n");
			break;//pergunta 2 final
			}
				printf("\nQual o numero do protagonista da serie Round6?\n");
			printf(" a)456\n b)465\n c)455\n");
			fflush(stdin);
			scanf("%c",&se);
			switch(se)
			{
				case 'a':
					printf("acertou!!!!!!!");
					break;
						default:
			printf("Batatinha frita 1,2,3 e errou a)456");
			break;//pergunta 3 final
			}
			break;
		
	 	default:
			printf("nao sabe ler");
			break;
	}
	   	printf("\n////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n"); 
		printf("\n1 para retornar ao menu\n2 para jogar novamente\n\n");
   	scanf("%d", &retorno);
    
    
    if(retorno == 1)
	{
		return main();
	}
 	
 }while(retorno != 1);
	break;
	//-----------------------------------------jogo 2------------------------------------------------------
	case 2:
	do{
	 int numero,sorte,chance;
	
    char s;
    srand(time(NULL));
    sorte = rand() % 1001;
    chance=1;
    
    	
	    printf("\nAdivinhe o numero entre 0 e 1000\n");
	  
	    
	    
    do
	{
	    printf(" \n    numero de chances \n          >%d<\n", chance);
		printf("\nDigite um numero.\n>>");	
    	scanf("%d", &numero);
    	
    	if(numero > sorte)
		{ 
		    
			printf(" >Tente um numero MENOR que %d\n", numero);  
			
	    }
		else 
		{
			if(numero < sorte)       
			                                                
                printf(">Tente um numero MAIOR que %d\n", numero);
                
            else
			{
				
                printf("voce acertou!!O número era: %d", sorte);
			}    
			
		}
		
		chance++;
			
    } 
    while (numero != sorte && chance <= 5);
    
    if (chance> 5) 
	{
    printf("\n\nSuas chances acabaram!!");
    printf("O numero era:%d\n", sorte);
    
    
    }
    
        
   	printf("\n///////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\."); 
	printf("\n1 para retornar ao menu\n2 para jogar novamente\n\n");
   	scanf("%d", &retorno);
    
    
    if(retorno == 1)
	{
		return main();
	}
		
	}while(retorno != 1);
	break;
//	----------------------------------------jogo 3------------------------------------------------------
	case 3:
		do
	{

{
	
int retorno;	
char nome1[30], nome2[30];
 int p1,i, dado1, dado2, r,j; 
 int p2=0;
 int pontos1=0;//resultado player 1
 int va;
  // j=jogada r = rodada va=0; j=0;
 int resultado;
 int condicao=0;
 
printf("insira o nome do usuario 1:\n"); 
scanf("%s", nome1);
printf("insira o nome do usuario 2:\n");
scanf("%s", nome2);
printf("Digite 1 para o usuario 1 iniciar primeiro, digite 2, para o usuario 2, iniciar primeiro.\n");
scanf("%i", &p1);
 switch(p1)
  {
  case 1://ja tava
  
  
  	  
	
   printf("%s e o primeiro a jogar!\n", nome1);
    j=1; 
	srand(time(0)); 
	while(1){
	
	 dado1=rand() %6+1;
	 dado2=rand() %6+1; 
	  va=dado1+dado2;
	  p2=p2+va;
	 
	 
	  printf("valor encontrado no dado 1: %d\n", dado1); 
	  printf("valor encontrado no dado 2: %d\n", dado2); 
	  
	  printf("valor da soma:%i.\n",p2);
	  	pontos1 =pontos1+p2;
	  printf("Para continuar jogada, digite 1. Para finalizar  turno digite 2.\n");
     scanf("%i", &r);
     if(r==2)
	 {
	 	break;
	 }
	  	 
	 }
	 
     
     
     	printf("\n///////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\."); 
	printf("\n1 para retornar ao menu\n2 para jogar novamente\n\n");
   	scanf("%d", &retorno);
    
    
    if(retorno == 1)
	{
		return main();
	}
		
	
 }

}
		
		
     

}while(retorno != 1);
	 break;
 }
 
}
 	
 
