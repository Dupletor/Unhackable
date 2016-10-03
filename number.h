#include <stdlib.h>
#include <stdio.h>
typedef struct number Number;
struct number {
    Number * next;
};

Number * create();
void destroy(Number *p);
Number * copia(Number *p);
void print(Number *r);
