#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

typedef struct No { // ou fila de espera
    struct No* prox = nullptr;
    struct No* ant = nullptr;
    string nome;
} No;

void adicionarMusica(No** playlist, string musica);
void mostrarPlaylist(No* playlist);
void mostrarPlaylistReversa(No* playlist);
void removerMusica(No** playlist, string musica);

int main(void) {
    No* playlist = nullptr;
    int escolha;
    string nomeMusica;

    do {
        system("clear");
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
                cout << "\n - Insira uma musica: ";
                cin >> nomeMusica;
                adicionarMusica(&playlist, nomeMusica);
                break;
            
            case 2:
                if (playlist == nullptr) {
                    cout << "  - Lista vazia..." << endl;
                    cin.ignore();
                    cin.get();
                    break;
                }
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
                cout << "\n - Insira uma musica: ";
                cin >> nomeMusica;
                removerMusica(&playlist, nomeMusica);
                cout << "Musica removida";
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

void adicionarMusica(No** playlist, string musica) {
    No* novaMusica = new No;
    novaMusica->nome = musica;
    novaMusica->prox = nullptr;
    
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
    int i = 1;
    system("clear"); // clear / cls
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
    int i = 1;
    while (playlist->prox != nullptr) {
        playlist = playlist->prox;
        i++;
    }
    
    No* aux = playlist;
    system("clear"); // clear / cls
    cout << "=========== MUSICAS ===========" << endl;
    while (aux != nullptr) {
        cout << i << ". ";
        cout << aux->nome << endl;
        aux = aux->ant;
        i--;
    }
    cout << "===============================" << endl;
    
}

void removerMusica(No** playlist, string musica) {
    No* aux = *playlist;
    while (aux != nullptr) { // No meio
        if(aux->nome == musica) {
            (aux->ant)->prox = aux->prox;
            if (aux->prox != nullptr && aux->ant != nullptr) { // entra quando não é o ultimo enem o primeiro
                (aux->prox)->ant = aux->ant;
            }
            free(aux);
            return;
        }
        aux = aux->prox;
    }
    cout << " Nenhuma musica encontrada..." << endl;

}