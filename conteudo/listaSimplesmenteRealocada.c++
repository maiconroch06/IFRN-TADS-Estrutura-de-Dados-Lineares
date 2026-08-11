#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct No {
    int val;
    struct No* prox;
} No;

void imprimir(No* head);
void inserir_inicio(No** head, int val);
void inserir_antes(No** head, int onde, int val);
void inserir_depois(No** head, int onde, int val);
void inserir_fim(No** head, int val);
void somar_valores(No* head);
void contar_valores(No* head);
int som_valores(No* head);
int cont_valores(No* head);
void med_valores(No* head);
void excluir(No** head, int val);
void limpar_lista(No** head);
void teste(No** head);

int main() {
    No *head = nullptr;
    int escolha, onde, valor;

    do {
        system("clear");
        printf("\n  ============= LISTA ENCADEADA ============\n");
        printf("  | [1] Adicionar no inicio                |\n");
        printf("  | [2] Adicionar antes de um valor        |\n");
        printf("  | [3] Adicionar depois de um valor       |\n");
        printf("  | [4] Adicionar no fim                   |\n");
        printf("  | [5] Visualizar                         |\n");
        printf("  | [6] Somar valores                      |\n");
        printf("  | [7] Contar valores                     |\n");
        printf("  | [8] Media valores                      |\n");
        printf("  | [9] Excluir valor                      |\n");
        printf("  | [10] Excluir tudo                      |\n");
        printf("  | [0] Sair                               |");
        printf("\n  ==========================================\n");
        printf("  | Qtd elementos: %i | Soma elementos: %i   |", cont_valores(head), som_valores(head));
        printf("\n   Endereco de head (&head): %p", &head);
        printf("\n  ==========================================\n\n");
        printf("  -> Escolha: ");
        cin >> escolha;

        switch (escolha) {
            case 1:
                printf("\n Novo numero (ini)-> ");
                cin >> valor;
                inserir_inicio(&head, valor);
            break;
            
            case 2:
                printf("\n Valor -> ");
                cin >> valor;
                printf("\n Onde -> ");
                cin >> onde;
                inserir_antes(&head, onde, valor);
            break;
            
            case 3:
                printf("\n Valor -> ");
                cin >> valor;
                printf("\n Onde -> ");
                cin >> onde;
                inserir_depois(&head, onde, valor);
            break;

            case 4:
                printf("\n Novo numero (fim)-> ");
                cin >> valor;
                inserir_fim(&head, valor);
            break;
            
            case 5:
                printf("\n Lista ->");
                imprimir(head);
                cin.ignore();
                cin.get();
                //system("pause");
                break;
                
            case 6:
                printf("\n Lista somada -> ");
                somar_valores(head);
                cin.ignore();
                cin.get();
                //system("pause");
            break;
            
            case 7:
                printf("\n Lista ->");
                contar_valores(head);
                cin.ignore();
                cin.get();
                //system("pause");
            break;
            
            case 8:
                med_valores(head);
                cin.ignore();
                cin.get();
                //system("pause");
            break;
                
            case 9:
                printf("\n Novo numero -> ");
                cin >> valor;
                excluir(&head, valor);
            break;
                
            case 10:
                limpar_lista(&head);
                cin.ignore();
                cin.get();
                //system("pause");
            break;
            
            case 99:
                teste(&head);
                cin.ignore();
                cin.get();
                //system("pause");
            break;
            
            case 0:
                limpar_lista(&head);
            return 0;
            
            default:
                printf(" #Erro: Tente Novamente!");
            break;
        }

    } while (escolha > 0);

}

void imprimir(No* head) {
    while (head != nullptr) {
        printf(" %i", head->val);
        head = head->prox;
    }
    printf("\n");
    printf(" - Endereco do head na funcao: %p\n", (void*)&head);
}

void inserir_inicio(No** head, int val) {
    No* novo = (No*) malloc(sizeof(No));
    novo->val = val;
    novo->prox = *head;
    *head = novo;
}

void inserir_antes(No** head, int onde, int val) {
    if (*head == nullptr) {
        printf(" #ERRO: Lista vazia.\n");
        return;
    }

    No* aux = *head;
    No* ant = nullptr;

    while (aux != nullptr && aux->val != onde) {
        ant = aux;
        aux = aux->prox;
    }

    if (aux == nullptr) {
        printf(" #ERRO: Valor nao encontrado.\n");
        return;
    }

    No* novo = (No*) malloc(sizeof(No));
    novo->val = val;

    if (ant == nullptr) {
        novo->prox = *head;
        *head = novo;
    } else {
        novo->prox = aux;
        ant->prox = novo;
    }
}

void inserir_depois(No** head, int onde, int val) {
    if (*head == nullptr) {
        printf(" #ERRO: Lista vazia.\n");
        return;
    }

    No* aux = *head;

    while (aux != nullptr && aux->val != onde) {
        aux = aux->prox;
    }

    if (aux == nullptr) {
        printf(" #ERRO: Valor nao encontrado.\n");
        return;
    }

    No* novo = (No*) malloc(sizeof(No));
    novo->val = val;

    novo->prox = aux->prox;
    aux->prox = novo;
}

void inserir_fim(No** head, int val) {
    No* novo = (No*) malloc(sizeof(No));
    novo->val = val;
    novo->prox = nullptr;
    
    if (*head == nullptr) {
        *head = novo;
        return;
    }

    No* aux = *head;
    while (aux->prox != nullptr) {
        aux = aux->prox;
    }
    aux->prox = novo;
}

void somar_valores(No* head) {
    int som = 0;
    No* aux = head;
    while (aux != nullptr) {
        som += aux->val;
        aux = aux->prox;
    }
    printf("%i\n", som);
}

void contar_valores(No* head) {
    int cont = 0;
    No* aux = head;
    while (aux != nullptr) {
        cont++;
        aux = aux->prox;
    }
    if(cont == 0) {
        printf(" Lista vazia");
    } else {
        printf("%i\n", cont);
    }
    
}

int som_valores(No* head) {
    int som = 0;
    No* aux = head;
    while (aux != nullptr) {
        som += aux->val;
        aux = aux->prox;
    }
    return som;
}

int cont_valores(No* head) {
    int cont = 0;
    No* aux = head;
    while (aux != nullptr) {
        cont++;
        aux = aux->prox;
    }

    return cont;
}

void med_valores(No* head) {
    //float som = 0;
    //int cont = 0;

    //while (head != nullptr) {
    //    som += head->val;
    //    cont++;
    //    head = head->prox;
    //}
    //printf(" Media dos valores: %.2f\n", cont == 0 ? 0 : som/cont);
    printf(" Media dos valores: %.2f\n", (float) cont_valores(head) == 0.0 ? 0.0 : (float)som_valores(head)/cont_valores(head));
}

void excluir(No** head, int val) {
    No* aux = *head;
    No* ant = nullptr;

    while (aux != nullptr && aux->val != val) {
        ant = aux;
        aux = aux->prox;
    }
    
    if (aux == nullptr) return;

    if (ant == nullptr)
        *head = aux->prox; // era o primeiro
    else
        ant->prox = aux->prox;

    free(aux);
}

void limpar_lista(No** head) {
    No* atual = *head;
    No* proximo;

    while (atual != nullptr) {
        proximo = atual->prox; // Salva o endereço do próximo nó
        free(atual);           // Deleta o nó atual com segurança
        atual = proximo;       // Pula para o próximo que salvamos
    }

    *head = nullptr; // Define o head original como null para indicar lista vazia
    printf("\n Memoria liberada com sucesso!\n");
}

void teste(No** head) {
    printf("\n  ================ TESTE DE PONTEIROS ================\n");

    printf("  | Endereco de head (head):        %p |\n", (void*)head); // Endereço do head no main (head)
    printf("  | Conteudo de head (*head):       %p |\n", (void*)(*head)); // Endereço que head guarda (No seguinte)/(*head)
    printf("  |                                                  |\n");
    printf("  | Endereco de head copia (&head): %p |\n", (void*)&head); // Endereço da copia de head que a funcao amazena o endereço de head no main (&head)
    printf("  | Conteudo de head copia (*head): %p |\n", (void*)(*(&head))); 
    printf("  |                                                  |\n");

    if (*head != nullptr) {
        printf("  | Valor do primeiro no (**head):                 %d |\n", (*head)->val); // Valor dentro do No (**head)
        printf("  | Endereco do prox ((*head)prox): %p |\n", (void*)(*head)->prox);
    } else {
        printf("  | Lista vazia (*head == NULL)                      |\n");
    }

    printf("  ====================================================\n");
}
