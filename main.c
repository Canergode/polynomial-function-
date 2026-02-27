#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;

    //Get x value from user
    printf("Enter a number\n");
    scanf("%f",&x);

    //Calculate and print f(x)=x*x*x+13*x*x+97*x+5
    printf("f(%.3f)=%f",x,x*x*x+13*x*x+97*x+5);

    return 0;
}
