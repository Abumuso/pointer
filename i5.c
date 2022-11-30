#include <stdio.h>

void fill(int arr[], int *toq, int *juft){
    for(int i = 0; i < 6; i++){
        if(arr[i]%2!=0){
            *toq = i; break;
        }
    }
    for(int i = 0; i < 6; i++){
        if(arr[i]%2 == 0){
            *juft = i; break;
        }
    }

    

}
int main(){
        
    int arr[6] = {1,2,3,4,5,6};
    int toq, juft;
    
    fill(arr,&toq,&juft);
    printf("toq index = %d\njuft index = %d\n", toq, juft);

    return 0;
}