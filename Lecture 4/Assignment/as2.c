// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i;
    i=1;
    printf("while loop");
     while (i < 10){
        printf("{...}");
        i=i+1;
     } 
     printf("forloop");
     i=1;
     for (; i < 10;)
     {
         printf("{...}");
         i=i+1;
     }
     printf("do while loop");
     i=1; 
     do 
     {
         printf("{...}");
         i=i+1;
         }while (i<10);
     
     
   
    
    return 0;
}