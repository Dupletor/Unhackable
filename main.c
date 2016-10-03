#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "number.h"

int main(){
    Number * p;
    p = create(42);
    for(;;){
        Number * r = copia(p);
        print(r);
        for(int j = 0; j < 30000; j++)
            for(int k = 0; k < 300000; k++);
        p = r;
    }
    return 0;
}
