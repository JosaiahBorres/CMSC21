#include <stdio.h>
#include <math.h>
int main(void){
    double tol,a,s,yn; //designate the variables as double

    tol=  0.00001; // value of tol

    printf("Enter a number: ");
    scanf("%lf", &a); //user prompt

    s=1;
    yn= 0.5*(s+(a/s)); //equation

    while(fabs(yn-s) > tol ){ //conditionals
        s=yn;
        yn= 0.5*(s+(a/s));
    }
    printf(" The square root of %lf is %lf",a,s);

    return 0;

}