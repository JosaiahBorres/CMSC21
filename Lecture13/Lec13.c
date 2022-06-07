#include <stdio.h>
#include <math.h>

struct line {   //struct to declare different type of variable type
    struct point{   
        float x;    
        float y;
    }point1,point2;
    float midpoint;    //declaring midpoint, slope and distance as a float
    float slope;
    float distance;
}line1; 

void solveMidpoint (struct line line1){ //defining function to solve for midpoint
    float midpointx, midpointy; //declaring the x and y value of the midpoint as floats

    midpointx= (line1.point1.x + line1.point2.x)/ 2;  //solving first the x value for the midpoint
    midpointy= (line1.point1.y + line1.point2.y)/ 2;  //solving first for the y value for the midpoint

    printf("%f , %f",midpointx,midpointy);  //printing the midpoint
};
float solveSlope(struct line line1){    //defining function to solve for the slope of the line
    float numerator,denominator,slope;  

    numerator= line1.point2.y - line1.point1.y; //subtract the y points
    denominator= line1.point2.x - line1.point1.x;   //subtract the x points
    slope= numerator / denominator; //slope formula

    return slope;
};

float solveDistance(struct line line1){ //defining function to solve for distance
    float xminus,yminus,xvalue, yvalue,distance;  //declaring variables

    xminus= line1.point2.x - line1.point1.x;  //subtracting x1 from x2
yminus= line1.point2.y - line1.point1.y;  //subtracting y1 from y2

    xvalue= pow(xminus, 2);    
    yvalue= pow(yminus, 2);    

    distance= sqrt(xvalue + yvalue);  //Distance formula

    return distance;

};

int main(void){ 

printf("Enter x and y value for point1: ");   //User prompt to store x and y value
scanf("%f",&line1.point1.x);    
scanf(" %f",&line1.point1.y);   


printf("Enter x and y value for point2: ");   //user prompt to ask for x and y value for point 2
scanf("%f",&line1.point2.x);    
scanf(" %f",&line1.point2.y);   

printf("\nSlope: %f",solveSlope(line1));    //printing the slope by calling the function
printf("\n");
printf("\nMidpoint: ");
solveMidpoint(line1);       //calling solveMidpoint function and printing the midpoint
printf("\n");
printf("\nDistance between 2 points: %f",solveDistance(line1)); //printing the distance between the two points by calling solveDistance function
printf("\n");
printf("\n");

return 0;
}

