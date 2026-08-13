#include <iostream>
#include <string>
#include <cctype>
#include <limits>
#include "../terminal.h"

using namespace std;

typedef struct No {
    int ID;
    string titulo;
    string descricao;
    int prioridade;
    char status;
    No* ant = nullptr;
    No* prox = nullptr;
} No;

void adicionarTarefa(No** lista, int proximoID);
void listarTarefas(No* lista);

No* criarNo(int proximoID);

int main(void) {
    No* listaTarefas = nullptr;
    int opcao, proximoID = 1;

    do {
        limparTerminal();
        cout << ".===== GERENCIADOR DE TAREFAS =====." << endl;
        cout << "|  1 - Adicionar tarefa            |" << endl;
        cout << "|  2 - Remover tarefa              |" << endl;
        cout << "|  3 - Buscar tarefa               |" << endl;
        cout << "|  4 - Alterar status              |" << endl;
        cout << "|  5 - Listar tarefas              |" << endl;
        cout << "|  6 - Listar tarefas ao contrario |" << endl;
        cout << "|  7 - Mostrar primeira tarefa     |" << endl;
        cout << "|  8 - Mostrar ultima tarefa       |" << endl;
        cout << "|  9 - Ordenar por prioridade      |" << endl;
        cout << "| 10 - Sair                        |" << endl;
        cout << "*==================================*" << endl;
        cout << " - Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarTarefa(&listaTarefas, proximoID);
                break;
            
            case 4:
                listarTarefas(listaTarefas);

                cin.get();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;

            case 10:
                return 0;
                
        default:
            cout << " #Opcao invalida...";
            cin.get();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
    
    } while (true);
    
}

No* criarNo(int proximoID) {
    string titulo, descricao;
    int prioridade;
    char status;
    
    limparTerminal();

    cout << " ============= ADICIONAR TAREFA ==============" << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "  -> Insira o titulo: ";
    getline(cin, titulo);

    cout << " ---------------------------------------------" << endl;
    cout << "  -> Insira a descricao: ";
    getline(cin, descricao);

    cout << " ----------------- PRIORIDADE ----------------" << endl;
    cout << "  Alta(1)     -     Media(2)    -    Baixa(3)" << endl;
    cout << " ---------------------------------------------" << endl;
    
    do {
        cout << "Insira a prioridade: ";
        cin >> prioridade;
    } while (prioridade < 1 || prioridade > 3);

    cout << " ------------------- STATUS ------------------" << endl;
    cout << "  Em andamento(E) - Pendente(P) - Concluido(C)" << endl;
    cout << " ---------------------------------------------" << endl;

    do {
        cout << "Insira o status: ";
        cin >> status;

        status = toupper(status);
    } while (status != 'E' && status != 'P' && status != 'C');

    cout << " =============================================" << endl;
    
    No* novoNo = new No;

    novoNo->ID = proximoID++;
    novoNo->titulo = titulo;
    novoNo->descricao = descricao;
    novoNo->prioridade = prioridade;
    novoNo->status = status;

    return novoNo;

}

void adicionarTarefa(No** lista, int proximoID) {
    No* novaTarefa = criarNo(proximoID);

    if (*lista == nullptr) {
        *lista = novaTarefa;
        return;

    }
    
    No* aux = *lista;
    while (aux->prox != nullptr && novaTarefa->prioridade != aux->prioridade) {
        aux = aux->prox;

    }

    if (aux->prox != nullptr) {
        novaTarefa->prox = aux->prox;
        (aux->prox)->ant = novaTarefa;
    }

    aux->prox = novaTarefa;
    novaTarefa->ant = aux;
    novaTarefa->ID += proximoID;

}



void listarTarefas(No* lista) {
    if (lista == nullptr) {
        cout << " # Lista vazia..." << endl;
        cin.ignore();
        cin.get();
        return;
    }

    cout << "---------------------------------" << endl;

    while (lista != nullptr) {
        cout << lista->ID << endl;
        cout << lista->titulo << endl;
        cout << lista->descricao << endl;
        cout << lista->prioridade << endl;
        cout << lista->status << endl;
        
        lista = lista->prox;

        if ((lista->ant)->prioridade != lista->prioridade) {
            cout << "---------------------------------" << endl;
        }

    }
    
}

