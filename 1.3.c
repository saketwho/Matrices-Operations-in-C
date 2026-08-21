#include <stdio.h>
int main()
{
    float pi = 3.14159, radius;

    printf("Enter the radius of the circle: ");

    scanf("%f", &radius);

    printf("Area of circle: %.2f\n", pi * radius * radius);
    
    printf("\n                              -sakket, 16/8/26\n");

    return 0;
}