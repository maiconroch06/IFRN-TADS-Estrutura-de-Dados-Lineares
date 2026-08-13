#include <iostream>
#include <string>
#include "terminal.h"

using namespace std;

typedef struct No {
    int ID;
    string titulo;
    string descricao;
    int prioridade;
    char status = 'P';
    No* ant = nullptr;
    No* prox = nullptr;
} No;

void adicionarTarefa(No** lista);
void listarTarefas(No* lista);

No* criarNo();

int main(void) {
    No* listaTarefas = nullptr;
    int opcao;
    do {
        cout << ".===== GERENCIADOR DE TAREFAS =====." << endl;
        cout << "| 1 - Adicionar tarefa            |" << endl;
        cout << "| 2 - Remover tarefa              |" << endl;
        cout << "| 3 - Buscar tarefa               |" << endl;
        cout << "| 4 - Alterar status              |" << endl;
        cout << "| 5 - Listar tarefas              |" << endl;
        cout << "| 6 - Listar tarefas ao contrário |" << endl;
        cout << "| 7 - Mostrar primeira tarefa     |" << endl;
        cout << "| 8 - Mostrar última tarefa       |" << endl;
        cout << "| 9 - Ordenar por prioridade      |" << endl;
        cout << "| 10 - Sair                       |" << endl;
        cout << "*=================================*" << endl;
        cout << " -> Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarTarefa(&listaTarefas);

                cin.get();
                cin.ignore();
                break;
            
            case 4:
                listarTarefas(listaTarefas);

                cin.get();
                cin.ignore();
                break;

            case 10:
                return 0;
                
        default:
            cout << " #Opcao invalida...";
            cin.get();
            cin.ignore();
            break;
        }
    
    } while(true);
    
}

No* criarNo() {
    string titulo, descricao;
    int prioridade, status;
    
    cout << " -> Insira o titulo: ";
    cin >> titulo;
    cout << " -> Insira a descricao: ";
    cin >> descricao;
    cout << " -> Insira a prioridade: ";
    cin >> prioridade;
    cout << " -> Insira o status: ";
    cin >> status;
    No* novoNo = new No;

    novoNo->titulo = titulo;
    novoNo->descricao = descricao;
    novoNo->prioridade = prioridade;
    novoNo->status = status;

    return novoNo;
}

void adicionarTarefa(No** lista) {
    No* novaTarefa = criarNo();

    if (*lista == nullptr) {
        *lista = novaTarefa;
        return;

    }
    
    No* aux = *lista;
    while (aux->prox != nullptr) {
        aux = aux->prox;

    }

    novaTarefa->ant = aux;
    aux->prox = novaTarefa;

}



void listarTarefas(No* lista) {
    atualizarLista();
    
    while (lista != nullptr) {
        /* code */
    }
    
}