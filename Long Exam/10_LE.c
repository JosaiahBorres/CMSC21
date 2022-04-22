#include <stdio.h>
#include <math.h>
int main(void){
    double tol,x,y,yn; //designate the variables as double

    tol=  0.00001; // value of tol

    printf("Enter a number: ");
    scanf("%lf", &x); //user prompt

    y=1;
    yn= 0.5*(y+(x/y)); //equation

    while(fabs(yn-y) > tol ){ //conditionals
        y=yn;
        yn= 0.5*(y+(x/y));
    }
    printf(" The square root of %lf is %lf",x,y);

    return 0;

}