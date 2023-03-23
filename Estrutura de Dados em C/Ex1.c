#include <stdio.h>

void ex01()
{
  float m, cm, mm;

  printf("Digite o valor em metros: \n");
  scanf("%f", &m);
  cm = m * 100;
  mm = cm * 1000;
  printf("O valor em centimetro eh: %.0f cm\n", cm);
  printf("O valor em milimetro eh: %.0f mm\n", mm);

}       

void ex02()
{
	float f, c;
	int ca;

   	printf("Digite o valor da temperatura em Fahrenheit para ser transformado em Celsius\n");
   	scanf("%f", &f);

   	c = ((f-32.0) * (5.0/9.0));
   	ca = (f - 32) * ((float)5/9);
   	printf("A temperatura em Celsius na variavel float eh: %.2f\n", c);
   	printf("A temperatura em Celsius na variavel int eh: %d\n", ca);
}

void ex03()
{
	float imc, peso, altura;
	
	printf("Digite seu peso:\n");
	scanf("%f", &peso);
	printf("Digite sua altura:\n");
	scanf("%f", &altura);
	imc = peso / (altura * altura);
	printf("Seu IMC eh: %.2f\n", imc);
}

void ex04()
{
	float n1, n2, n3, p1, p2, p3, mp;
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
	mp = (n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
	
	printf("A media ponderada foi: %.2f\n", mp);
}

void ex05()
{
	float req, r;
	char resp;
	
	printf("Digite as informações para calcular Associação de Resistores em Série: \n");
	do{
		printf("Digite o valor da resistencia: \n");
		scanf("%f", &r);
		req += r;
		printf("Deseja inserir mais resistores? (s) ou (n)\n");
		scanf("%s", &resp);
	}while(resp != 'n');
	printf("O valor das resistências dos resistores ligados em série é: \n%.2f", req);
}

void ex06()
{
	float sal, nsal, ajuste;
	printf("Digite o valor do seu salario: \n");
	scanf("%f", &sal);
	ajuste = sal * 33.7 / 100;
	nsal = sal + ajuste;
	printf("Seu novo salario com um aumento de 33,7 por cento, eh de: %.2f \n", nsal);	
}

void ex07()
{
	float real, cot, dol;
	printf("Digite a quantidade de real: \n");
	scanf("%f", &real);
	printf("Digite a cotação do dolar: \n");
	scanf("%f", &cot);
	dol = real / cot;
	printf("A quantidade de dolar eh: %.2f\n", dol);
}

void ex08()
{
	int x, ant, suc, soma;
	printf("Digite um numero inteiro: \n");
	scanf("%i", &x);
	ant = (x * 3) - 1;
	printf("%d\n", ant);
	suc = (x * 2) + 1;
	printf("%d\n", suc);
	soma = ant + suc;
	printf("A soma do antecessor do seu triplo com o sucessor do seu dobro. %i", soma);
}

void ex09()
{
  	int a, b, c, d;

  	printf("Entre com um número de 4 digitos: \n");
  	scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
  	printf("%i\n%i\n%i\n%i\n", a, b, c, d);
}

void ex10()
{
	int valor = 1000;
	int res = 0;
	printf("1ºDia: Seu patrimonio caiu 12,4. E agr vc tem investido: \n");
	res = valor * (12.4/100);
	valor -= res;
	printf("%d\n", valor);
	printf("2ºDia: Seu patrimonio subiu 1,8. E agr vc tem investido: \n");
	res = valor * (1.8/100);
	valor += res;
	printf("%d\n", valor);
	printf("3ºDia: Seu patrimonio subiu 5,6. E agr vc tem investido: \n");
	res = valor * (5.6/100);
	valor += res;
	printf("%d\n", valor);
	printf("4ºDia: Seu patrimonio caiu 4,5. E agr vc tem investido: \n");
	res = valor * (4.5/100);
	valor -= res;
	printf("%d\n", valor);	
}

// void ex10()
// {
// 	int valor;
// 	float cot;
// 	int res;
// 	char resp;
// 	printf("Digite o valor do seu patrimonio:\n");
// 	scanf("%d", &valor);
// 	printf("O dia de hoje foi positivo(p) ou negativo(n)?\n");
// 	while(getchar() != '\n');	
// 	scanf("%c", &resp);
// 	if(resp == 'p')
// 	{
// 		printf("Digite o valor da cotação:\n");
// 		scanf("%f", &cot);
// 		res = valor * (cot/100);
// 		valor += res;
// 		printf("%d\n", valor);	
// 		printf("Seu patrimonio subiu %.2f E agr vc tem investido: %d\n", cot, valor);			
// 	}else
// 	{
// 		printf("Digite o valor da cotação:\n");
// 		scanf("%f", &cot);
// 		res = valor * (cot/100);
// 		valor -= res;
// 		printf("Seu patrimonio caiu %.2f E agr vc tem investido: %d\n", cot, valor);
// 	}
	
// }
// void ex10()
// {
// 	int valor;
// 	float cot;
// 	int res;
// 	char resp, resposta;
// 	printf("Digite o valor do seu patrimonio:\n");
// 	scanf("%d", &valor);
//	do{
// 		printf("O dia de hoje foi positivo(p) ou negativo(n)?\n");
// 		while(getchar() != '\n');	
// 		scanf("%c", &resp);
// 		if(resp == 'p')
// 		{
// 			printf("Digite o valor da cotação:\n");
// 			scanf("%f", &cot);
// 			res = valor * (cot/100);
// 			valor += res;
// 			printf("%d\n", valor);	
// 			printf("Seu patrimonio subiu %.2f E agr vc tem investido: %d\n", cot, valor);			
// 		}else
// 		{
// 			printf("Digite o valor da cotação:\n");
// 			scanf("%f", &cot);
// 			res = valor * (cot/100);
// 			valor -= res;
// 			printf("Seu patrimonio caiu %.2f E agr vc tem investido: %d\n", cot, valor);
// 		}
//		}while(resposta != 'n');
// }
void ex11()
{
	float h, m, f;
	
	printf("Digite sua altura: \n");
	scanf("%f", &h);
	m = (72.7*h) - 58;
	f = (62.1*h) - 44.7;
	printf("O peso ideal para Homens eh: %.2f\n", m);
	printf("O peso ideal para Mulheres eh: %.2f\n", f);
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
  printf("Digite 8 para o ex8; \n");
  printf("Digite 9 para o ex9; \n");
  printf("Digite 10 para o ex10; \n");
  printf("Digite 11 para o ex11; \n");

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
    	  case 6	:
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
    	  case 11:
                ex11();
    	    break;    	        	       	         	         	      
 		}
	}while(opcao != 0);
}
