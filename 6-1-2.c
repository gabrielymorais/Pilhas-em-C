#include <stdio.h>
#include <string.h>

void inverterPalavra(char *inicio, char *fim) {
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}


void inverterPalavrasFrase(char *frase) {
    char *inicio = frase;  
    char *atual = frase;  

    while (*atual != '\0') {
        if (*atual == ' ') {
            inverterPalavra(inicio, atual - 1);  
            inicio = atual + 1;                  
        }
        atual++;
    }
  
    inverterPalavra(inicio, atual - 1);
}

int main() {
    char frase[] = "AMU MEGASNEM ATERCES";  

    printf("Original: %s\n", frase);

    inverterPalavrasfrase(frase);  

    printf("Invertida: %s\n", frase);

    return 0;
}
