// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int reverse=0, final, number, number1; //creates a variable that the data will be stored
    printf("please enter a 3 digit number");
    scanf("%d", &number); //serves as the user prompt this will scan the inut of the user
    while (number != 0) { //a while statement is a determinant as to stop the loop, if the number is equal to 0 then the loop stops
    final = number % 10; //
    reverse = reverse * 10 + final;//formula to reverse the code
    number /= 10;
}

   printf("Reversed number = %d", reverse);
  return 0;
}
    