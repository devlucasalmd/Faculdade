#include <stdio.h>
#include <stdlib.h>

void ex01(void)
{
	int n[20];
	int i = 0;
	for(i; i < 20; i++)
	{
		printf("Digite um numero: \n");
		scanf("%d", &n[i]);
	}
	system("clear");
	printf("Matriz na ordem inversa\n");
	for(i = 19; i >= 0; i--)
	{		
		printf("%d\n", n[i]);
	}

}

void ex02(void)
{
		int m[10] = {0};
		int face = 0;
		int n;
		
		printf("Quantas vezes quer jogar o dado?\n");
		scanf("%d", &n);
		m[n];
		srand(time(NULL));
		printf("\n");
		for (int i=0; i<n; i++)
		{
			face = rand() % 6 + 1;
			m[face]++;  
			printf("%d vez jogada: %d\n", i+1,face);			
		}
		printf("\n");
		for(int i=1;i<=6;i++)
		{
			printf("Face %d: %d ocorrências\n", i, m[i]);
		}			
}

#define TAM 5
void ex03(void)
{
	int m[TAM][TAM] = {0};
	int i, j;
	for (i=0; i<TAM; i++)
	{
		for(j=0;j<TAM;j++)
		{
			if(m[i] == m[j])
			{
				m[i][j] = 1;
			}
			printf("[%d][%d]=%d ", i, j, m[i][j]);
			if(j == TAM - 1)
				printf("\n");
		}
	}
	
}
#define X 100
void ex04(void)
{
	int m[X][X] = {0};
	int i, j, c, l;
	float media = 0;
	int par = 0;
	do{
		printf("Em qual dimensão gostaria de trabalhar?\n");
		scanf("%d%d", &l,&c);
		m[l][c];
		if(l > X  || c > X)
			printf("Limite excedido da Matriz\n");
	}while(l > X  || c > X);
	for(i=0; i<l; i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Digite o valor que quer inserir no elemento: \n");
			scanf("%d", &m[i][j]);
		}
	}
	//Calcular média
	for(i=0; i<l; i++)
	{
		for(j=0;j<c;j++)
		{
			media += m[i][j];
		}
	}
	media = media / (l+c);
	printf("Media: %f\n", media);

	//Calcular se o elemento par é maior que o valor da Media
	for(i=0; i<l; i++)
	{
		for(j=0;j<c;j++)
		{
			if(m[i][j] % 2 == 0 && m[i][j] > media)
			{
				printf("Elemento %d eh maior que a Media\n", m[i][j]);
			}
		}
	}
	printf("Sua matriz preenchida:\n");
	//Imprimindo Matriz preenchida
	for(i=0; i<l; i++)
	{
		for(j=0;j<c;j++)
		{
			printf("[%d][%d] = %d\t", i,j,m[i][j]);
		}
		printf("\n");
	}
	printf("Sua matriz transposta:\n");
	//Imprimindo Matriz transposta
	for(j=0; j<c; j++)
	{
		for(i=0;i<l;i++)
		{
			printf("[%d][%d] = %d\t", i,j,m[i][j]);
		}
		printf("\n");
	}
}
	


int menu(){

  int opcao;
  printf("----------MENU----------\n");
  printf("Digite 0 para SAIR; \n");
  printf("Digite 1 para o ex1; \n");
  printf("Digite 2 para o ex2; \n");
  printf("Digite 3 para o ex3; \n");
  printf("Digite 4 para o ex4; \n");
  scanf("%d", &opcao);
  return opcao;
}


int main(){

    int opcao;
    do{
      opcao = menu();
      while(getchar() != '\n');
      switch (opcao){
      	  case 0:
      	  	printf("Obrigado!\n");
    	  case 1:
                ex01();
    	    break;
    	  case 2:
                ex02();
    	    break;
    	  case 3:
                ex03();
    	    break;
    	  case 4:
                ex04();
    	    break;       	        	    
   		  default:
    	    printf("Digite um numero valido: ");
        }
      }while(opcao != 0);
}
