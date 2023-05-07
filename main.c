#include <stdio.h>
#include "functions.h"
#include <string.h>

int main() {
    char opcao;

    AbrirMenu();
    scanf(" %c", &opcao);

    printf("%c", opcao);
}