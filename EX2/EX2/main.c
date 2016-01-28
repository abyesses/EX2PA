//
//  main.c
//  EX2
//
//  Created by Abraham Esses on 1/28/16.
//  Copyright © 2016 Abraham Esses. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
typedef void (*iterator)(void *);
typedef void (*iterator2)(void *,iterator);
typedef struct  {
    char * titulo;
    int paginas;
}Libro;
void recorre(void *,iterator);

void recorre(void * a,iterator it){
    it(a);
}
void * forwardIt(void * a){
    return (a++);

}
void * prevIt(void * a){
    return (a--);
}

void * bidIt(void * a,iterator);

int main(int argc, const char * argv[]) {
    int * a = (int *) malloc(20*sizeof(int));
    int *begin,*end,*next,*prev,*act;
    begin = a;
    act = begin;
    next = (act++);
    prev = (act--);
    end = (a+(sizeof(a)));
    *(a) = 1;
    *(a+1) = 2;
    *(a+2) = 3;
    *(a+3) = 4;
    *(a+4) = 5;
    *(a+5) = 6;
    *(a+6) = 7;
    *(a+7) = 8;
    *(a+8) = 9;
    *(a+9) = 10;
    int *i = a;
    i=forwardIt(i);
    //i=forwardIt(i);
    //for(i=begin;i<end;i++){
        printf("Arreglo en %d\n",*i);
    //}
    act = (int *)prevIt(act);
    printf("Arreglo: %d\n",*act);
    free(a);
    return 0;
}

