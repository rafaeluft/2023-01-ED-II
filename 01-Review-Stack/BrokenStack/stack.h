#ifndef STACK_H
#define STACK_H
#include<stdbool.h>
/**
* Cria uma interface minimalista para uma estrutura de dados pilha.
*/

typedef struct Stack TStack;

/**
* Cria instâncias do tipo TStack para serem manipuladas pelas funções a seguir.
* @returns TStack*
*/
TStack* Stack_create();
/**
* Insere um inteiro na pilha passada como parâmetro.
* @param TStack* ponteiro para a pilha que se deseja manipular
* @param int o dado inteiro que se deseja tentar fazer a inserção na pilha.
* @returns boolean
*/
bool Stack_push(TStack*, int);
/**
* Remove um inteiro na pilha passada como parâmetro.
* Em caso de sucesso na remoção do elemento, retorna true.
* @param TStack* ponteiro para a pilha que se deseja tentar fazer a remoção da pilha.
* @param int* ponteiro para a variável que receberá o valor possivelmente removido.
* @returns boolean
*/
bool Stack_pop(TStack*, int*);

#endif