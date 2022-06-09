// Online C compiler to run C program online
#include <stdio.h>
#include<stdbool.h>
#define NUM_PATHWAYS ((int) (sizeof(pathway)/ sizeof(pathway[0])))
int main() {
    // Write C code here
    bool pathway[8]={[0]=true, [2]=true};
    
    for (int i = 0; i< NUM_PATHWAYS; i++){
        if (pathway[i]){
            printf("Pathway [%d] is open\n", i);
        }else{
            printf("Pathway [%d] is close \n", i);
        }
        }
    
    
    return 0;
}