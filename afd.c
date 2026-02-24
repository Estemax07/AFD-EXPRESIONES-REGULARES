#include <stdio.h>
#include <string.h>
#include <ctype.h>

int es_id(char *cadena) {
    int estado = 0;
    int i = 0;

    while (cadena[i] != '\0') {
        if (estado == 0) {
            if (isupper(cadena[i])) {
                estado = 1;
            } else {
                return 0;
            }
        } 
        else if (estado == 1) {
            if (islower(cadena[i]) || isdigit(cadena[i])) {
                estado = 1;
            } else {
                return 0;
            }
        }
        i++;
    }

    return estado == 1;
}

void reconocer_token(char *token) {
    if (strcmp(token, "++") == 0) {
        printf("%s -> INCR\n", token);
    } 
    else if (strcmp(token, "+") == 0) {
        printf("%s -> SUMA\n", token);
    } 
    else if (es_id(token)) {
        printf("%s -> ID\n", token);
    } 
    else {
        printf("%s -> NO ACEPTA\n", token);
    }
}

int main() {
    FILE *archivo;
    char token[100];

    archivo = fopen("entrada.txt", "r");

    if (archivo == NULL) {
        printf("No se pudo abrir entrada.txt\n");
        return 1;
    }

    while (fscanf(archivo, "%s", token) != EOF) {
        reconocer_token(token);
    }

    fclose(archivo);
    return 0;
}
