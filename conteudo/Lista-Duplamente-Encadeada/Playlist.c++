#include <iostream>
#include <stdlib.h>
#include <string>
#include "terminal.h"

using namespace std;

typedef struct No { // ou fila de espera
    struct No* prox = nullptr;
    struct No* ant = nullptr;
    string nome;
} No;

void adicionarMusica(No** playlist);
void mostrarPlaylist(No* playlist);
void mostrarPlaylistReversa(No* playlist);
void removerMusica(No** playlist);

int main(void) {
    No* playlist = nullptr;
    int escolha;

    do {
        limparTerminal();
        cout << ".========== PLAYLIST ==========." << endl;
        cout << "| 1 - Adicionar Musica         |" << endl;
        cout << "| 2 - Mostrar Playlist         |" << endl;
        cout << "| 3 - Mostrar Playlist Reversa |" << endl;
        cout << "| 4 - Remover Musica           |" << endl;
        cout << "| 5 - Sair                     |" << endl;
        cout << "*==============================*" << endl;
        cout << "  -> Escolha: ";
        cin >> escolha;
        
        switch (escolha) {
            case 1:
                adicionarMusica(&playlist);
                break;
            
            case 2:
                mostrarPlaylist(playlist);
                cin.ignore();
                cin.get();
                break;
            
            case 3:
                mostrarPlaylistReversa(playlist);
                cin.ignore();
                cin.get();
                break;
                
            case 4:
                removerMusica(&playlist);
                cin.ignore();
                cin.get();
                break;
            
            case 5:
                return 0;
        
        default:
            cout << "ERRO: Opcao invalida..." << endl;
            cin.ignore();
            cin.get();
            break;
        }

    } while(true);
    
}

void adicionarMusica(No** playlist) {
    string musica;
    cout << "\n - Insira uma musica: ";
    cin >> musica;

    No* novaMusica = new No;
    novaMusica->nome = musica;
    
    if (*playlist == nullptr) {
        *playlist = novaMusica;
        return;
    }

    No* aux = *playlist;
    while (aux->prox != nullptr) {
        aux = aux->prox;
    }

    novaMusica->ant = aux;
    aux->prox = novaMusica;

}

void mostrarPlaylist(No* playlist) {
    if (playlist == nullptr) {
        cout << "  - Lista vazia..." << endl;
        cin.ignore();
        cin.get();
        return;
    }

    int i = 1;
    limparTerminal();
    cout << "=========== MUSICAS ===========" << endl;
    while(playlist != nullptr) {
        cout << i << ". ";
        cout << playlist->nome << endl;
        playlist = playlist->prox;
        i++;
    }
    cout << "===============================" << endl;
    
}

void mostrarPlaylistReversa(No* playlist) {
    if (playlist == nullptr) {
        cout << "  - Lista vazia..." << endl;
        cin.ignore();
        cin.get();
        return;
    }
    
    int i = 1;
    while (playlist->prox != nullptr) {
        playlist = playlist->prox;
        i++;
    }
    
    No* aux = playlist;
    limparTerminal();
    cout << "=========== MUSICAS ===========" << endl;
    while (aux != nullptr) {
        cout << i << ". ";
        cout << aux->nome << endl;
        
        aux = aux->ant;
        i--;
    }
    cout << "===============================" << endl;
    
}

void removerMusica(No** playlist) {
    string musica;
    cout << "\n - Insira uma musica: ";
    cin >> musica;

    No* aux = *playlist;
    while (aux != nullptr && aux->nome != musica) {
        aux = aux->prox;
    }

    if (aux == nullptr) {
        cout << " Nenhuma musica encontrada..." << endl;
        return;
    }
    
    if (aux->ant == nullptr) {
        (aux->prox)->ant = nullptr;
        *playlist = aux->prox;

        if (*playlist != nullptr) {
            (*playlist)->ant = nullptr;
        }
    
    } else if (aux->prox == nullptr) {
        aux->ant->prox = nullptr;
    
    } else {
        (aux->ant)->prox = aux->prox;
        (aux->prox)->ant = aux->ant;
        
    }

    delete aux;
    cout << "  Musica removida";

}