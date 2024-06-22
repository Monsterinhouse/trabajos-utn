// C program to illustrate the arithmatic operators
#include <stdio.h>
#include <math.h>

int main()
{
    
    float a = 45, b = 20;

    float x = a/b;

    // using operators and printing results

    //printf("a %c b = %d\n",37, a % b);
    printf("a %c b = %.2f\n",37, a / b);
    printf ("Round = %.2f", round(x));

    return 0;
}