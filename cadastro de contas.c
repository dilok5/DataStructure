#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a estrutura de uma conta bancária
typedef struct {
    int numero;
    int agencia;
    float saldo;
    char tipo[10]; 
} Conta;

typedef struct No {
    Conta conta; // Dados da conta
    struct No* proximo;
} No;

// inicio e fim da fila
No* inicio = NULL; 
No* fim = NULL;    

int main() {
    int opcao;

    do {
        // Exibe o menu de opções
        printf("\nEscolha a opção:\n");
        printf("0. Sair\n");
        printf("1. Zerar FILA\n");
        printf("2. Exibir FILA\n");
        printf("3. Enqueue - Inserir Conta\n");
        printf("4. Dequeue - Excluir conta\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) { 
            // Zerar a fila
            if (inicio == NULL) {
                printf("A fila já está vazia!\n");
            } else {
                No* atual = inicio;
                while (atual != NULL) {
                    No* temp = atual;
                    atual = atual->proximo;
                    free(temp);
                }
                inicio = NULL;
                fim = NULL;
                printf("Fila zerada com sucesso!\n");
            }
        }

        else if (opcao == 2) {
            // Exibir contas na fila
            if (inicio == NULL) {
                printf("Fila vazia!\n");
            } else {
                No* atual = inicio;
                printf("Contas na fila:\n");
                while (atual != NULL) {
                    printf("Numero: %d, Agencia: %d, Saldo: %.2f, Tipo: %s\n",
                           atual->conta.numero, atual->conta.agencia, atual->conta.saldo, atual->conta.tipo);
                    atual = atual->proximo;
                }
            }
        }


        else if (opcao == 3) {
            // Inserir conta na fila
            No* novo = (No*)malloc(sizeof(No));
            printf("Digite o numero da conta: ");
            scanf("%d", &novo->conta.numero);
            printf("Digite a agencia: ");
            scanf("%d", &novo->conta.agencia);
            printf("Digite o saldo: ");
            scanf("%f", &novo->conta.saldo);
            printf("Digite o tipo da conta (Corrente/Poupanca/Salario): ");
            scanf("%s", novo->conta.tipo);
            novo->proximo = NULL;

            if (inicio == NULL) {
                inicio = novo;
            } else {
                fim->proximo = novo;
            }
            fim = novo;
            printf("Conta adicionada à fila!\n");

        } else if (opcao == 4) {
            // Remover conta da fila
            if (inicio == NULL) {
                printf("Fila vazia! Nada a remover.\n");
            } else {
                No* temp = inicio;
                printf("Conta removida: Numero: %d, Agencia: %d, Saldo: %.2f, Tipo: %s\n",
                       temp->conta.numero, temp->conta.agencia, temp->conta.saldo, temp->conta.tipo);
                inicio = inicio->proximo;
                free(temp);
                if (inicio == NULL) {
                    fim = NULL;
                }
            }
        }
    } while (opcao != 0);

    // Limpar a fila ao sair
    while (inicio != NULL) {
        No* temp = inicio;
        inicio = inicio->proximo;
        free(temp);
    }

    printf("Programa encerrado.\n");
    return 0;
}
