// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i = 1, k=1,j=1; //i=k=j=1 means thatevery integer is equal to 1
 printf("%d", ++i || ++j && ++k);
 printf("%d %d %d", i, j, k);
    return 0;
}