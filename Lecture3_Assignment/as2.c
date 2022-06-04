// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>//include this for the code to use the round function

int main() {
    int first, second, third, round1, round2, digit;
    printf("please enter a 2 digit number");//user prompt
    scanf("%d", &digit);
    second=digit%10;//this is used to know the last digit of the number
    first=digit*.10;//first digit will be the whole number
    third=first%10;//then modular to prepare for rounding up
    if (third <4) {
     round1=round(third);//round up 
    } 
    else {
        round1=round(third);
    }
    if (round1 == 1) {
        switch(second) {
            case 0: printf(" ten"); break;
            case 1: printf(" eleven"); break;
            case 2: printf(" twelve"); break;
            case 3: printf(" thirteen"); break;
            case 4: printf(" fourteen"); break;
            case 5: printf(" fifteen"); break;
            case 6: printf(" sixteen"); break;
            case 7: printf(" seventeen"); break;
            case 8: printf(" eighteen"); break;
            case 9: printf(" ninteen"); break;
        }
        return 0;
    }
    switch(round1) {
    case 1: printf("ten"); break;
    case 2: printf("twenty"); break;
    case 3: printf("thirty"); break;
    case 4: printf("forty"); break;
    case 5: printf("fifty"); break;
    case 6: printf("sixty"); break;
    case 7: printf("seventy"); break;
    case 8: printf("eighty"); break;
    case 9: printf("ninety"); break;
    }
     switch(second) {
    case 0: break;
    case 1: printf(" one"); break;
    case 2: printf(" two"); break;
    case 3: printf(" three"); break;
    case 4: printf(" four"); break;
    case 5: printf(" five"); break;
    case 6: printf(" six"); break;
    case 7: printf(" seven"); break;
    case 8: printf(" eight"); break;
    case 9: printf(" nine"); break;
    }
    
    
}