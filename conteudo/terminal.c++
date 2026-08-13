#include "terminal.h"
#include <cstdlib>

void limparTerminal() {

#ifdef _WIN32
    system("cls");

#elif __linux__
    system("clear");

#elif __APPLE__
    system("clear");

#else
    // Sistema operacional não identificado
    system("clear");
#endif

}