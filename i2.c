#include <stdio.h>

void mill(int *ptr){
    *ptr = *ptr * *ptr;
}
int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    int *ptr = &n;
    mill(ptr);
    printf("%d\n", n);

    return 0;
}