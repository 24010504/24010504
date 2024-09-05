1- Erros comuns em C
  
  a)#include <stdio.h>
  int main() {
  float n = 4000000000;
  printf("%f\n", n);
  return 0;
  }

  b) #include <stdio.h>
 int main (){
 int a;
 printf ("%d\n",a);
 return 0;
 }


  c)#include <stdio.h>
  int main () {
  printf("%i",4);
  printf("%i",2);
  return 0;
  }


  d)#include <stdio.h>
  int main() {
  char a;
  scanf("%c", &a);  
  printf("%c\n", a);  
  return 0;
  }




2- Variaveis

  a) #include <stdio.h>
  int main() {
  int numero1, numero2, numero3;
  printf("Digite 3 numeros:\n");
  printf("numero 1: ");
  scanf("%i", &numero1);
  printf("numero 2: ");
  scanf("%i", &numero2);
  printf("numero 3: ");
  scanf("%i", &numero3);
  printf("\nos numeros na ordem inversa sao:\n");
  printf("%i\n", numero3);
  printf("%i\n", numero2);
  printf("%i\n", numero1);
  return 0;
  }
 

 b) #include <stdio.h>
 int main() {
 char nome[50];
 printf("Ola, eu sou o Numero 1. Como e seu nome? ");
 scanf("%50s", nome);
 printf("Bem-vindo ao clube, %s!\n", nome);
 return 0;
 }
 
 
 c) #include <stdio.h>
 int main() {
 char nome[100];
 int idade;
 int dias_de_vida;
 printf("Digite o seu nome:\n ");
 scanf("%s",nome)
 printf("Digite a sua idade:\n ");
 scanf("%d", &idade);
 dias_de_vida = idade * 365;
 printf("Olá, %s! Você tem aproximadamente %d dias de vida.\n", nome, dias_de_vida);
 return 0;
 }
 
 
 d) #include <stdio.h>
 #include <math.h>
 #define PI 3.14
 int main() {
 float raio, area;
 printf("Digite o raio do circulo: \n");
 scanf("%f", &raio);
 area= PI*pow(raio,2);
 printf("A area do circulo e: %.2f\n", area);
 return 0;
 }
 
 
 e) #include <stdio.h>
 #include <math.h>
 int main() {
 float Consumo_M2 = 300;   
 float Quant_Tinta_Lata_ML = 2000;  
 float largura, altura,area, quant_tinta, quant_latas
 printf("Digite a largura da parede em metros: %.2f\n ");
 scanf("%f", &largura);
 printf("Digite a altura da parede em metros: %.2f\n");
 scanf("%f", &altura);
 area = largura * altura;
 printf("A area da parede e de : %.2f\n", area);
 quant_tinta=area*Consumo_M2;
 printf("A quantidade de tinta e de : %.2f\n",quant_tinta);
 float quant_latas = quant_tinta / Quant_Tinta_Lata_ML;
 printf("Quantidade necessária de latas de tinta e de : %.2f\n", quant_latas);
 return 0;
 }


 f) #include <stdio.h>
 #include <math.h>
 int main() {
 float Tfa, Tce;
 printf("Didite a temperatura em graus Fahrenheit: \n");
 scanf("%f", &Tfa);
 Tce(5/9)*(F-32);
 printf("A temperatura em Celcius e de: %.2f\n", Tce);
 return 0;
 }

 
 g) #include <stdio.h>
 int main() {
 float P, V, T, M;
 printf("Digite a pressão do pneu: \n");
 scanf("%f", &P);
 printf("Digite o volume do pneu:\n ");
 scanf("%f", &V);
 printf("Digite a temperatura do pneu:\n ");
 scanf("%f", &T);
 M = (P*V)/(0.3*(T+460));
 printf("A massa de ar do pneu é de: %.2f unidades de massa\n", M);
 return 0;
 }


 h) #include <stdio.h>
 int main() {
 float primeiro_termo, razao, N_esimo;
 int N;
 printf("Digite o primeiro termo da PA:\n ");
 scanf("%f", &primeiro_termo);
 printf("Digite a razão da PA:\n ");
 scanf("%f", &razao);
 printf("Digite um número N: \n");
 scanf("%d", &N);
 N_esimo =primeiro_termo+(N - 1)*razao;
 printf("O N_esimo termo da PA e:%f \n", N,N_esimo);
 return 0;
 }


 i) #include <stdio.h>
 #include <math.h>
 int main() {
 float a, b, c;
 float delta, raiz1, raiz2;
 printf("Digite o coeficiente a: ");
 scanf("%f", &a);
 printf("Digite o coeficiente b: ");
 scanf("%f", &b);
 printf("Digite o coeficiente c: ");
 scanf("%f", &c);
 if (a == 0) {
 printf("O coeficiente 'a' não pode ser zero:\n");
 return;
  }
 delta =b*b-4*a*c;
 if (delta>0) {
 raiz1 =(-b+sqrt(delta))/(2*a);
 raiz2 =(-b-sqrt(delta))/(2*a);
 printf("As raízes da equação são:%f e %f\n", raiz1, raiz2);
 } else if (delta == 0) {
 raiz1 = -b/(2*a);
 printf("A raiz da equação é: %f\n", raiz1);
 } else {
 printf("A equação não possui raízes reais:\n");
 }
 return 0;
 }


j) #include <stdio.h>
int main() {
int notas1real , notas10reais, notas50reais, notas100reais;
int valortotal;
printf("Digite a quantidade de notas de 1 real: \n");
scanf("%d", & notas1real);
printf("Digite a quantidade de notas de 10 reais: \n");
scanf("%d", &notas10reais);
printf("Digite a quantidade de notas de 50 reais: \n");
scanf("%d", &notas50reais);
printf("Digite a quantidade de notas de 100 reais: \n");
scanf("%d", &notas100reais);
valortotal=(notas1real*1)+(notas10reais*10)+(notas50reais*50)+(notas100reais*100);
printf("O valor total em dinheiro e: %d reais\n", valortotal);
return 0;
}


 l) int main() {
 int valortotal;
 int notas100, notas50, notas10, notas5, notas1;
 printf("Digite o valor total em reais:\n ");
 scanf("%d", &valortotal);
 notas100= valortotal/100;
 valortotal %= 100; 
 notas50= valortotal/50;
 valortotal %= 50; 
 notas10= valortotal/10;
 valortotal %= 10; 
 notas5= valortotal 5;
 valortotal %= 5; 
 notas1= valortotal;
 printf("Notas necessárias:\n");
 printf("Notas de 100 reais: %d\n", notas100);
 printf("Notas de 50 reais: %d\n", notas50);
 printf("Notas de 10 reais: %d\n", notas10);
 printf("Notas de 5 reais: %d\n", notas5);
 printf("Notas de 1 real: %d\n", notas1);
 return 0;
 }



3- Desafio
  
 #include <stdio.h>
 #include <stdio.h>
 int main() {
 float precoacao1 = 24.13;    
 float precoacao2 = 11.00;
 float precoacao3 = 38.65;
 float dividendosacao1 = 17.00;
 float dividendosacao2 = 35.00;
 float dividendosacao3 = 25.00;
 float valorinvestido = 1000.00;
 float dyacao1,dyacao2,dyacao3;
 int quantidadeacao1, quantidadeacao2, quantidadeacao3;
 quantidadeacao1 = valorinvestido/precoacao1;
 quantidadeacao2 = valorinvestido/precoacao2;
 quantidadeacao3 = valorinvestido/precoacao3;
 dyacao1= (dividendosacao1/precoacao1)*100;
 dyacao2= (dividendosacao2/precoacao2)*100;
 dyacao3= (dividendosacao3/precoacao3)*100;
 printf("Quantidade de acoes compradas com R$1000,00:\n");
 printf("Acao 1: %d acoes\n", quantidadeacao1);
 printf("Acao 2: %d acoes\n", quantidadeacao2);
 printf("Acao 3: %d acoes\n", quantidadeacao3);
 printf("\nDividend Yield (DY) para cada acao:\n");
 printf("Acao 1: %.2f%%\n", dyacao1);
 printf("Acao 2: %.2f%%\n", dyacao2);
 printf("Acao 3: %.2f%%\n", dyacao3);
 return 0;
 }

