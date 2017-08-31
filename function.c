#include <stdio.h>
#include <stdlib.h>
#include "head.h"
#define LEN sizeof(Node)

Node *createList(void){
    Node *p1;
    Node *p2;

    p1 = p2 = (Node *)malloc(LEN);
    if(p1 == NULL || p2 == NULL) {
        printf("Error:malloc error.\n");
        return -1;
    }
    memset(p1, 0, LEN);
    memset(p2, 0, LEN);
    

    return null;
}
