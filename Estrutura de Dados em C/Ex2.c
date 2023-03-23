#include <stdio.h>
#include <math.h>

void ex01()
{
	
  int ht;
  float vh, pd, td, sb, sl;
  
  printf("Digite a quantidade de horas trabalhadas na semana: \n");
  scanf("%d", &ht);
  
  printf("Digite o valor da hora trabalhada: \n");
  scanf("%f", &vh);
  
  printf("Digite o percentual de desconto: \n");
  scanf("%f", &pd);

  sb = (ht * 4.5) * vh;
  td = (pd/100) * sb;
  sl = sb - td;
  
  printf("Seu salario liquido eh: %.2f\n", sl);

}

void ex02()
{
  float n, n1, n2, n3, n4, n5, p, p1, p2, p3, p4, p5, md, mp, mdf, mpf;
 
  
  printf("Digite um numero: \n");
  scanf("%f", &n1);
  printf("Digite o peso do numero digitado acima: \n");
  scanf("%f", &p1);
    
  printf("Digite um numero: \n");
  scanf("%f", &n2);
  printf("Digite o peso do numero digitado acima:\n");
  scanf("%f", &p2);

  printf("Digite um numero: \n");
  scanf("%f", &n3);
  printf("Digite o peso do numero digitado acima: \n");
  scanf("%f", &p3);

  printf("Digite um numero: \n");
  scanf("%f", &n4);
  printf("Digite o peso do numero digitado acima: \n"); 
  scanf("%f", &p4);

  printf("Digite um numero: \n");
  scanf("%f", &n5);
  printf("Digite o peso do numero digitado acima: \n"); 
  scanf("%f", &p5);
  
  printf("Laço de repetição pro n\n");
    

  for(int i = 0; i < 5; i++)
  {
  	  printf("Digite um numero: \n");
  	  scanf("%f", &n);
  	  mdf += n;
  }
  
  printf("Laço de repetição pro p\n");
  
  for(int i = 0; i < 5; i++)
  {
  	  printf("Digite um peso: \n");
  	  scanf("%f", &p);
  	  mpf += p;
  }

  md = (n1 + n2 + n3 + n4 + n5) / 5;
  mdf = mdf / 5;
  mp = (p1 + p2 + p3 + p4 + p5) / 5;
  mpf = mpf / 5;
  printf("A media dos numeros foi: %.2f\n", md);
  printf("A media dos pesos foi: %.2f\n", mp);
  printf("A media dos numeros dentro do for foi: %.2f\n", md);
  printf("A media dos pesos dentro do for foi: %.2f\n", mp);
}

void ex03()
{
  int n;
  
  printf("Digite um numero: \n");
  scanf("%d", &n);
  if(n==0)
          printf("O numero digitado foi zero\n");
  
  else if(n < 0)
  {
    n = n*2;
    printf("O numero digitado é menor que zero, e o numero inserido multiplicado por dois eh: %i\n", n);
  }
  
  else
  {
    n =  sqrt(n);    
    printf("O numero digitado é maior que zero, e a raiz quadrada eh: %i\n", n);
  }

}

void ex04()
{
  int min, vm, dt;
  
  printf("Digite quantos minutos percorreu: \n");
  scanf("%d", &min);
  printf("Digite a velocidade media: \n");
  scanf("%d", &vm);
  dt = vm * min;
  printf("A distancia percorrida foi de: %d\n", dt);

}

void ex05()
{
  int n;

  printf("Digite um numero: \n");
  scanf("%d", &n);

  if(n % 4 == 0 && n % 5 ==0) printf("O numero é divisivel por 4 e 5\n ");
  else if(n % 4 == 0)
  {
    printf("O numero é divisivel somente por 4\n");  
  }
  else printf("O numero é divisivel somente por 5\n");

}

void ex06()
{
  int a, b, c, delta, x1 , x2;   
  printf("\nDigite o valor de A: ");
  scanf("%d", &a);

  printf("\nDigite o valor de B: ");
  scanf("%d", &b);

  printf("\nDigite o valor de C: ");
  scanf("%d", &c);

  delta = pow(-b,2) - (4*a*c);

  if(delta > 0)
  {
    x1 = -b + sqrt(delta / (2*a));
    x2 = -b - sqrt(delta / (2*a));

    printf("\nResultado X': %d", x1);
    printf("\nResultado X'': %d", x2);
  }

  if(delta < 0)
  {
    printf("\nNao adimite solucao real");
  }

  if (delta == 0)
  {
     x1 = -b + sqrt(delta / (2*a));
     printf("\nResultado X: %d", x1);
  }
}


void ex07()
{
	char letra;
	
	printf("Digite uma letra: \n");
	letra = getchar();
	printf("O codigo da letra digitada em decimal eh: %d\n", letra);
	printf("O codigo da letra digitada em hexadecimal eh: %x \n", letra);
}
int menu(){

  int opcao;
  printf("\n----------MENU----------\n");
  printf("Digite 0 para SAIR; \n");
  printf("Digite 1 para o ex1; \n");
  printf("Digite 2 para o ex2; \n");
  printf("Digite 3 para o ex3; \n");
  printf("Digite 4 para o ex4; \n");
  printf("Digite 5 para o ex5; \n");
  printf("Digite 6 para o ex6; \n");
  printf("Digite 7 para o ex7; \n");
  scanf("%d", &opcao);
  return opcao;
}


int main()
{

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
 		}
	}while(opcao != 0);
}
