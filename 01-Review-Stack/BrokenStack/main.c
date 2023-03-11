#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

int main(){
    int V[] = {1, 2, 3, 4}, i, temp;
    TStack* stack = Stack_create();

    if(stack != NULL){
        for(i=0; i<4; i++)
            if(!Stack_push(stack, V[i]))
                printf("Stack overflow ao inserir %d\n", V[i]);
        while(Stack_pop(stack, &temp))
            printf("%d\n", temp);
    }
    return 0;
}