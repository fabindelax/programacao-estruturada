QUESTÃO 1

#include <stdio.h>
#include <stdlib.h>

int main() {
	
float n1, n2, n3, n4, n5, media, nota; 

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);
     
        printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);
     
         printf("Digite a terceira nota do aluno: ");
    scanf("%f", &n3);
     
         printf("Digite a quarta nota do aluno: ");
    scanf("%f", &n4);
     
         printf("Digite a quinta nota do aluno: ");
    scanf("%f", &n5);
    
     media = n1, n2, n3, n4, n5) /5;
     printf ("a media e %f", media);

   return 0;
}

QUESTÃO 2

int main() {
float n1, nota; 

    printf("Digite sua nota:");
    fflush(stdout);
    scanf("%f", &nota);    

if (nota <0 || nota > 10)
{
printf("numero invalido");}

    else if (nota >= 0 && nota < 5);{
	}
     printf("aluno reprovado");
	 
	      else if (nota >= 5 && nota < 7);{
	 }
      printf("aluno em recuperacao");
      
      else if (nota >= 7 && nota <= 10);{
	  }
       printf("aluno aprovado ");

	return 0;
}

QUESTÃO 3


#include <stdio.h>
#include <stdlib.h>

int main() {
   float menor, quintaParte;
   int n1,n2,n3,n4;
   
   printf ("Digite 4 numeros:");
   scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
 
 if (n1 <n2 || n1 < n3 ){
 menor =n1;
 }else if (n2 < n1 || n2 < n3){
menor =n2;
}else if(n3 < n1) || n3 < n2){
menor =n3;
 }else if(n4 < n1) || n3 < n4){
menor =n4;
 }
 quintaparte = menor/5;
 
   printf ("A quinta parte do numero e: %d", quintaParte);
   
   return 0;
}



