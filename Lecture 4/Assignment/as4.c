#include <stdio.h>
int main() {
    int choice, power; //variable used to store the inputted value and the output
    power=1;
    printf("Enter the power ");
    scanf("%d", &choice);//user prompt for the input

    while (choice > 0) { // while statement so thet if the power inputted is greater than 0 then the program will keep multiplying the answer by 2 until it reaches 0
        power = power*2;
        choice=choice-1; // everytime the loop was run 1 is subtracted to the input until it becomes 0
    }
    printf("Answer = %d", power);
    return 0;
}