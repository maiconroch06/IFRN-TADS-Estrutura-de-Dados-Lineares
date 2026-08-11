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
        cout << "| 1 - Adicionar Música         |" << endl;
        cout << "| 2 - Mostrar Playlist         |" << endl;
        cout << "| 3 - Mostrar Playlist Reversa |" << endl;
        cout << "| 4 - Remover Música           |" << endl;
        cout << "| 5 - Sair                     |" << endl;
        cout << "*==============================*" << endl;
        cout << "  -> Escolha: " << endl;
        cin >> escolha;
        
        switch (escolha) {
            case 1:
                cout << "Insira uma musica: " << endl;
                cin >> nomeMusica;
                adicionarMusica(&playlist, nomeMusica);
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
                removerMusica(&playlist, nomeMusica);
                break;
            
            case 5:
                return 0;
        
        default:
            cout << "ERRO: Opção inválida..." << endl;
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
    novaMusica->ant = *playlist;
    (*playlist)->prox = novaMusica;

}

void mostrarPlaylist(No *playlist) {


}

void mostrarPlaylistReversa(No *playlist) {


}

void removerMusica(No **playlist, string musica) {

    
}