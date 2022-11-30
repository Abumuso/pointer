#include <stdio.h>

void output(int n){
    printf("%p \n", &n);
}

int main(){
    int n;
    printf("n = "); scanf("%d", &n);
    output(n);


    return 0;
}