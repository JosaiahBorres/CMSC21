// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int reverse=0, final, number, number1; //creates a variable that the data will be stored
    printf("please enter a 3 digit number");
    scanf("%d", &number); //serves as the user prompt this will scan the inut of the user
    if (number>99 & number<999){ //determines if the inputted number is 3 digit
        number1=number;//if it is 3 digit then the number will be stored to another variable
    }
    else{
        printf("invalid number");//if it is not 3 digit thent the system will print invalid number
        
    }
        while (number1 != 0) { //a while statement is a determinant as to stop the loop, if the number is equal to 0 then the loop stops
        final = number1 % 10; //
        reverse = reverse * 10 + final;//formula to reverse the code
        number1 /= 10;
        
  }
  if (number>99 & number<999){ 
      printf("Reversed number = %d", reverse);//if the number is 3 digit it will print the reversed
  }
  else{
      return 0;//if it is not 3 digit it will return 0
  }

  return 0;
}
    