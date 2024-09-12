#include <stdio.h>

#define MAX 100  

int p[MAX];  
int t = -1;  

int pilhaCheia() {
    return t == MAX - 1;
}

int pilhaVazia() {
    return t == -1;
}

void empilhar(int elemento) {
    if (pilhaCheia()) {
        printf("Erro: Pilha cheia!\n");
        return;
    }
    printf("Elemento %d empilhado!\n", elemento);
}

void desempilhar() {
    if (pilhaVazia()) {
        printf("Erro: Pilha vazia!\n");
        return;
    }
    printf("Elemento %d desempilhado!\n", p[t--]); 
}


int comeco() {
    if (pilhaVazia()) {
        printf("Erro: Pilha vazia!\n");
        return -1;
    }
    return p[t];
}

void imprimirPilha() {
    if (pilhaVazia()) {
        printf("Pilha vazia!\n");
        return;
    }
    printf("Pilha: ");
    for (int i = 0; i <= t; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}

int main() {
    empilhar(20);  
    empilhar(30);  

    imprimirPilha(); 

    desempilhar();  
    imprimirPilha();  

    printf("Elemento no topo: %d\n", comeco());  

    return 0;
}
