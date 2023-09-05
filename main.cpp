ex 1: 

#include <stdio.h>

int main() {
    int A, B, C, D, diferenca;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    diferenca = A * B - C * D;

    printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D);
    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}

ex 2:

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", distancia);

    return 0;
}

ex 3:

#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0/3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;

    printf("�rea da superf�cie: %f\n", area);
    printf("Volume da esfera: %f\n", volume);

    return 0;
}

ex 4:

#include <stdio.h>

int main()
{
    float x, y;

    printf("Digite as coordenadas do ponto (x,y): ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("Origem\n");
    }
    else if (x == 0)
    {
        printf("Eixo Y\n");
    }
    else if (y == 0)
    {
        printf("Eixo X\n");
    }
    else
    {
        if (x > 0)
        {
            if (y > 0)
            {
                printf("Q1\n");
            }
            else
            {
                printf("Q4\n");
            }
        }
        else
        {
            if (y > 0)
            {
                printf("Q2\n");
            }
            else
            {
                printf("Q3\n");
            }
        }
    }

    return 0;
}

ex 5:

#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um n�mero positivo: ");
    scanf("%d", &num);

    printf("Os divisores do n�mero %d s�o: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

ex 6:

#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma de todos os n�meros naturais abaixo de 1.000 que s�o m�ltiplos de 3 ou 5 �: %d\n", soma);

    return 0;
}

ex 7:

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fib1 = 0, fib2 = 1, fib_atual = 0;

    printf("Digite um n�mero inteiro n�o negativo: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O termo de ordem zero da sequ�ncia de Fibonacci � 0.\n");
    } else if (n == 1) {
        printf("O termo de ordem um da sequ�ncia de Fibonacci � 1.\n");
    } else {
        for (i = 2; i <= n; i++) {
            fib_atual = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib_atual;
        }
        printf("O termo de ordem %d da sequ�ncia de Fibonacci � %llu.\n", n, fib_atual);
    }

    return 0;
}


ex 8:

#include <stdio.h>

int main() {
    int num, maior, menor;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    while (num >= 0) {
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }

        printf("Digite outro n�mero inteiro: ");
        scanf("%d", &num);
    }

    printf("O maior n�mero digitado foi: %d\n", maior);
    printf("O menor n�mero digitado foi: %d\n", menor);

    return 0;
}

ex 9:

#include <stdio.h>

int main() {
    int opcao, quantidade, continuar;
    float preco, total = 0;

    do {
        printf("Escolha a fruta desejada:\n");
        printf("1 => ABACAXI � 5,00 a unidade\n");
        printf("2 => MA�A � 1,00 a unidade\n");
        printf("3 => PERA � 4,00 a unidade\n");
        printf("Op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                preco = 5.0;
                printf("Voc� escolheu ABACAXI.\n");
                break;
            case 2:
                preco = 1.0;
                printf("Voc� escolheu MA�A.\n");
                break;
            case 3:
                preco = 4.0;
                printf("Voc� escolheu PERA.\n");
                break;
            default:
                printf("Op��o inv�lida!\n");
                continue;
        }

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade);

        total += preco * quantidade;

        printf("Deseja continuar comprando? (1 - sim / 0 - n�o) ");
        scanf("%d", &continuar);
    } while (continuar == 1);

    printf("O valor total da compra �: %.2f\n", total);

    return 0;
}


ex 10:


#include <stdio.h>

int main() {
    int num, i, soma = 0;
    float media;

    printf("Digite 10 n�meros inteiros:\n");

    for (i = 1; i <= 10; i++) {
        scanf("%d", &num);
        soma += num;
    }

    media = (float) soma / 10;

    printf("A m�dia dos 10 n�meros digitados �: %.2f\n", media);

    return 0;
}

