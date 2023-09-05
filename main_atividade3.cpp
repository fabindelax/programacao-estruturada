ATIVIDADE AVALIATIVA 3

1)

#include <stdio.h>

int main() {
    int matriz[SIZE][SIZE];

        int contador = 1;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = contador++;
        }
    }

    int opcao;
    printf("Digite 0 para ver os n�meros pares ou 1 para ver os n�meros �mpares: ");
    scanf("%d", &opcao);

    printf("N�meros %s da matriz:\n", opcao == 0 ? "pares" : "�mpares");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if ((opcao == 0 && matriz[i][j] % 2 == 0) || (opcao == 1 && matriz[i][j] % 2 != 0)) {
                printf("%d ", matriz[i][j]);
            }
        }
    }

    return 0;
}


2)


#include <stdio.h>

struct st_alunos {
    char nome[100];
    int matricula;
};

int main() {
    struct st_alunos alunos[MAX_ALUNOS];

    printf("Informe os dados dos %d alunos:\n", MAX_ALUNOS);

    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        
        printf("Matr�cula: ");
        scanf("%d", &alunos[i].matricula);
        
        printf("\n");
    }

    printf("Dados dos alunos:\n");
    printf("------------------------------\n");
    printf("   Nome\t\tMatr�cula\n");
    printf("------------------------------\n");

    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("%d. %s\t\t%d\n", i + 1, alunos[i].nome, alunos[i].matricula);
    }

    return 0;
}

