#include <stdio.h>

void ex01(){

    float num;
    int i=0;
    float numMenor;
    float numMaior;

    printf("Digite um numero real: \n");
    scanf("%f", &num);
    numMenor = numMaior = num;

    while(i <= 10){
    	printf("Digite um numero real: \n");
    	scanf("%f", &num);
    if (num > numMaior){
     	numMaior = num;
     }
    else if(num < numMenor){
    	numMenor = num;
     }
    i++;
  }
    printf("O menor numero eh: %.2f e o maior numero eh: %.2f\n", numMenor, numMaior);
}

void ex02(){

    int i = 0;
    int num = 1;
    int den = 1;
    float soma;
    float res = 0;

    while (i < 50){
    	printf("%d/%d \n", num, den);
      	num += 2;
      	den += 1;
      	soma = num/den;
      	res += soma;
      	i++;
    }
    printf("%.2f", res);
}

void ex03(){

    float opc = 1;
    float soma = 0;

    do{
	printf("Digite o número a ser somado ou digite 0 para sair\n");
	scanf("%f", &opc);
	soma = soma + opc;
   }while(opc != 0);
  	printf("%.2f\n", soma);
  	//for(;opc!=0;)
  	//{
		//printf("Digite o número a ser somado ou digite 0 para sair\n");
		//scanf("%f", &opc);
		//soma = soma + opc;
   	//}
  	
}


void ex04(){

    int i = 1000;
    int resto;

    while(i <= 2000)
    {
    	if (i % 12 == 5)
    	{
      		printf("%d\n", i);
     	}
     	i++;
    }
}

void ex05(){

    int ant = 0;
    int suc = 0;
    int atual = 1;
    int i = 0;
    int n;

    printf("Quantos termos quer gerar na sequência de Fibonacci?\n");
    scanf("%d", &n);
    for(i=0; i<= n; i++){
    	suc = ant + atual;
    	ant = atual;
    	atual = suc;
    	printf("%d\n", suc);
    }
}


void ex06(){

    int n;
    int resto;
    int i;
    int somap = 0;
    int somai = 0;



    for (i=0; i <= 11; i++){
    	do{
    	   printf("Digite um número positivo: \n");
    	   scanf("%d", &n);
    	   if(n < 0)
    	       printf("Seu número está invalido\n");
    	   } while(n < 0);
    	resto = n % 2;
    	if (resto == 0){
      	    somap = somap + n;
      	}
    	else{
      	    somai = somai + n;
    	}
    }
  	printf("A soma dos números pares eh: %d\n", somap);
  	printf("A soma dos números impares eh: %d\n", somai);
}

void ex07(){

    int i;
    float nota;
    float soma = 0;
    float media;

    for (i=0; i <=4; i++){
    	printf("Digite a nota:\n");
    	scanf("%f", &nota);
    	soma = soma + nota;
    }

    media = soma/5;
    printf("A media obtida foi: %.2f\n", media);
}

void ex08(){

    int n;
    int qntd = 1;
    int res = 1;
    
    printf("Digite a quantidade de numeros pares divisiveis por 4 e por 7 quer achar: \n");
    scanf("%d", &n);

    for(int i=1; qntd <= n; i++)
    {
    	if (i % 2 == 0)
    	{
      		if(i % 4 == 0 && i % 7 == 0)
      		{
    			printf("o numero par %d eh divisivel por 4 e 7\n", i);
    			qntd++;
    	    }
    	}
    }
}

void ex09(){

    float alturaJ = 1.35;
    float alturaR = 1.07;

    int anos = 0;

    printf("Josevaldo tem 1.35m de altura, e Rafonildo tem 1,07m de altura. Quanto tempo será necessario para que Rafonildo seja maior que Josevaldo?\n");
    printf("\n");
    printf("Aguarde....\n");
    printf("\n");

    while(alturaR < alturaJ)
    {
    	alturaJ += 0.02;
		alturaR += 0.03;
   		anos += 1;
  }
  printf("Será necessario %d anos para Rafonildo ser maior que Josevaldo\n", anos);

}


void ex10(){

    int base;
    int base2;
    int expoente;
    int i = 0;
    int res;

    printf("Entre com uma base inteira: ");
    scanf("%d", &base);
    printf("Entre com um expoente inteiro: ");
    scanf("%d", &expoente);
    base2 = base;
    while(i < expoente){
    	res = base * base2;
    	base = res;
    	i++;
  }
    printf("%d\n", base);
}



int menu(){

  int opcao;
  printf("----------MENU----------\n");
  printf("Digite 0 para SAIR; \n");
  printf("Digite 1 para o ex1; \n");
  printf("Digite 2 para o ex2; \n");
  printf("Digite 3 para o ex3; \n");
  printf("Digite 4 para o ex4; \n");
  printf("Digite 5 para o ex5; \n");
  printf("Digite 6 para o ex6; \n");
  printf("Digite 7 para o ex7; \n");
  printf("Digite 8 para o ex8; \n");
  printf("Digite 9 para o ex9; \n");
  printf("Digite 10 para o ex10; \n");
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
    	  case 5:
                ex05();
    	    break;
    	  case 6:
                ex06();
    	    break;
          case 7:
                ex07();
       	    break;
       	  case 8:
                ex08();
       	    break;
       	  case 9:
                ex09();
       	    break;
       	  case 10:
                ex10();
       	    break;
       	  default:
    	    printf("Digite um numero valido: ");
        }
      }while(opcao != 0);
}
