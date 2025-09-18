#include <stdio.h>
#include <math.h> //Why do we need this library?

int main()
{ 
    double a, b, c, x1, x2 ;


    // declare variables
printf("entr numbers a, b, c ");
    // get user input
scanf("%d %d %d", &a, &b ,&c);
    /* calculate the discriminant   <-- this is a comment for multiple lines
     the discriminant is: b² - 4ac
    */
    x1=(-b+sqrt(b*b-4*a*c));
    x2=(-b-sqrt(b*b-4*a*c));
    // according to the value of the discriminant, calculate the roots and print the results
printf("%d %d",x1, x2);
    return 0;
}