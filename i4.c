#include <stdio.h>

void change(int *ptr, int *ptr2){
    int c = *ptr;
    *ptr = *ptr2;
    *ptr2 = c;

}
int main(){
    int a = 2; 
    int b = 1;
    // printf("n = ");
    // scanf("%d", &n);
    
    change(&a,&b);
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}