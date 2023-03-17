#include "stack.h"
#include<stdlib.h>
#define MAX 10
/**
* OBS: Este código aparesenta erro. Não usar jamais em produção, trata-se de um 
* exercício.
* Problema: o código abaixo aparenta estar com problema.
* Encontre o problema e proponha uma solução. 
*/
struct Stack{
    int qty; //qty significa quantidade atual na pilha
    int data[MAX]; //vetor para armazenamento dos dados
};


struct Stack* Stack_create(){
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if(stack != NULL){
        stack->qty = 0;
    }
    return stack;
}

bool Stack_push(struct Stack* stack, int data){
    if(stack->qty < MAX){
        //começar as inserir os dados a partir do índice 1
        stack->qty++;
        //inserir os dados até o índice 10 (stack->qty==10) 
        stack->data[stack->qty] = data;
        return true;
    }
    return false;
}
bool Stack_pop(struct Stack* stack, int *p_data){
    if(stack->qty-1 >= 0){
        *p_data = stack->data[stack->qty--];
        return true;
    }
    return false;
}
