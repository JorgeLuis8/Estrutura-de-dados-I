#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"

struct book{
    int id,ano;
    char nome[100], autor[100];
    struct book *proximo;
    int qtd;
};
Book *criar_lista_livro(){
    return NULL;
}
Book *inserirLivroOrdenadoCircular(Book *lista_livro) {
    int valor;
    Book *novo = (Book *)malloc(sizeof(Book));
    
    printf("Informe o id: ");
    scanf("%d", &valor);
    printf("Informe o nome do autor: ");
    scanf("%s",novo->autor);
    printf("Informe o nome do livro:");
    scanf("%s", novo->nome);
    printf("Informe ano de lancamento: ");
    scanf("%d", &novo->ano);
    novo->id = valor;

    if (lista_livro == NULL) {
        novo->proximo = novo;
        lista_livro = novo;

    } else {
        Book *auxiliar;
        auxiliar = lista_livro;

        if (valor < auxiliar->id) {
            novo->proximo = auxiliar;
            while (auxiliar->proximo != lista_livro) {
                auxiliar = auxiliar->proximo;
            } 
            auxiliar->proximo = novo;
            lista_livro = novo;
         
        } else {
            while (auxiliar->proximo != lista_livro && valor > auxiliar->proximo->id) {
                auxiliar = auxiliar->proximo;
            }

            novo->proximo = auxiliar->proximo;
            auxiliar->proximo = novo;
        }
    }
    return lista_livro;
}

void imprimir_lista(Book *lista_livro){
    Book *auxiliar = lista_livro;
    do{
        printf("ID: %d\n", auxiliar->id);
        printf("\n");
        auxiliar = auxiliar->proximo;
    }while (auxiliar != lista_livro);
}
int quantidadeLivrosListaCircular(Book *lista_livro) {
    Book *auxiliar = lista_livro;
    int quantidade = 0;

    if (lista_livro != NULL) {
        do {
            quantidade++;
            auxiliar = auxiliar->proximo;
        } while (auxiliar != lista_livro);
    }

    printf("Quantidade de livros: %d\n", quantidade);
    return quantidade;
}
int quantidadeLivrosPorAutorListaCircular(Book *lista_livro) {
    char autor_remover[100]; 
    printf("Digite o nome do autor: ");
    scanf("%s", autor_remover);  

    Book *auxiliar = lista_livro;
    int quantidade = 0;

    do{
        if(strcmp(auxiliar->autor, autor_remover) == 0) {
            quantidade++;
        }
        auxiliar = auxiliar->proximo;

    }while(auxiliar != lista_livro);

    printf("O autor %s possui: %d livros na lista\n", autor_remover, quantidade);
    return quantidade;
}

Book *removerLivroListaCircular(Book *lista_livro){
    int id;
    Book* auxiliar = lista_livro;
    Book* removido = NULL;

    if(auxiliar == NULL){
        printf("Lista vazia");
    }else{
        printf("Informe o id a remover: ");
        scanf("%d",&id);
        if(id == auxiliar->id){
            while (auxiliar->proximo != lista_livro){
                auxiliar = auxiliar->proximo;
            }
            auxiliar->proximo = lista_livro->proximo;
            free(lista_livro);
            lista_livro = auxiliar->proximo;
        }else{
            while (auxiliar->proximo != lista_livro && id != auxiliar->proximo->id){
                auxiliar = auxiliar->proximo;
            }
            if(auxiliar->proximo != lista_livro){
                removido = auxiliar->proximo;
                auxiliar->proximo = auxiliar->proximo->proximo;
                free(removido);
            }
        }
    }
    return lista_livro;
}

void liberarListaCircular(Book *lista_livro){
    Book *auxiliar = lista_livro;
    do{
        free(auxiliar);
        auxiliar = auxiliar->proximo;
    }while (auxiliar != lista_livro);
}