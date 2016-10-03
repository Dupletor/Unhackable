#include "number.h"

Number * create(int n){
    Number * p;
    Number * q;
    Number * r;
    q = NULL;
    p = NULL;
    if(n > 0)
        q = malloc(sizeof(*q));
    r = q;
    for(int i = 0; i < n-1; i++){
        p = malloc(sizeof(*p));
        p->next = NULL;
        q->next = p;
        q = q->next;
    }
    return r;
}

void destroy(Number *p){
    Number *q;
    if(p != NULL)
        for(q = p->next; q != NULL; q = q->next){
            free(p);
            p = q;
        }
}

Number * copia(Number *p){
    Number *q;
    Number *r;
    Number *s;
    if(p != NULL){
        q = malloc(sizeof(*q));
        q->next = NULL;
        p = p->next;
    }
    else q = p;
    s = q;
    while(p != NULL){
        r = malloc(sizeof(*r));
        r->next = NULL;
        q->next = r;
        q = q->next;
        p = p->next;
    }
    destroy(p);
    return s;
}

void print(Number * r){
    Number * q;
    int i = 0;
    for(q = r; q != NULL; q = q->next)
        i++;
    printf("%d\n", i);
}
