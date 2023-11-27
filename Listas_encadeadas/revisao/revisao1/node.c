#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "node.h"
typedef struct _snode{
    int val;
    struct _snode *next;
};

typedef struct _linked_list{
    Snode *begin;
};

Snode *snode_criar(int val){
    Snode *novo = (Snode*) calloc(1,sizeof(Snode));
    novo->val = val;
    novo->next = NULL;

    return novo;   
}

LinkedList *LinkedList_criar(){
    LinkedList *L = (LinkedList *) calloc(1, sizeof(LinkedList));
    L->begin = NULL;

    return L;
}


void adicinoar_inicio(LinkedList *L,int val){
        Snode *p = snode_criar(val);
        p->next = L->begin;
        L->begin = p;

}