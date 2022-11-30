#include <stdio.h>

void change(int *ptr){

    *ptr = (*ptr % 10 * 10) + (*ptr / 10);

}
int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    int *ptr = &n;
    change(ptr);
    printf("%d\n", n);

    return 0;
}