#include<stdio.h>
int main(){
   int days, startingday;
   int firstday;
   printf("enter no of days in a month:\n");
   scanf("%d",&days); // scans the number of days in a month
    if (days <28 || days> 31) { // if statement to determine if the inputted value is correct, if the inputted value is less than the least number of days and most number of days in a month then it is invalid
        printf("invalid number");
    }
    else{
   printf("enter first day in a month:\n");
   scanf("%d",&firstday);
   if (firstday <1) { // if firstday is negative then it is an invalid number
       printf("invalid number");
   }
   else{
   for(startingday=1;startingday<firstday;startingday++) // algorithm for the calendar
      printf(" ");
   for(startingday=1;startingday<=days;startingday++){
      printf("%3d", startingday);
      if((firstday+startingday-1)%7==0)
         printf("\n");
   }
    }
    }
  return 0;
}