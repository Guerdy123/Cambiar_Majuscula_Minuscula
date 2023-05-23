#include <stdio.h>
#include <string.h>

void pedirDatos(char *cad);
void cambiarCarac(char *frase, int tam);

int main() {
    char frase[50];
    int tam;
    pedirDatos(frase);
    puts(frase);
    tam = strlen(frase);
    printf("Frase cambiada: ");
    cambiarCarac(frase, tam);
    printf("%s", frase);

    return 0;
}

void pedirDatos(char *cad) {
    printf("Digite una frase: ");
    fflush(stdin);
    fgets(cad, 50, stdin);
}

void cambiarCarac(char *cad, int tamano) {
    int i = 0;
    while (cad[i] != '\0') {
        if (cad[i] >= 'A' && cad[i] <= 'Z')
            cad[i] += 32;
        else if (cad[i] >= 'a' && cad[i] <= 'z')
            cad[i] -= 32;
        i++;
    }
}
