#include <stdio.h>
#include "functions.h"
#include <string.h>

int main() {
    char opcao;

    while (opcao != '0'){
        AbrirMenu();
        scanf(" %c", &opcao);

        switch (opcao)
        {
        case '1':
            AdicionarUsuario();
            break;
        
        default:
            break;
        }
    }
}