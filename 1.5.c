#include <stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter the first number: ");

    scanf("%d", &num1);

    printf("Enter the second number: ");

    scanf("%d", &num2);

    printf("\n Before swappppinnnnnnn \n");

    printf("First number: %d\n", num1);

    printf("Second number: %d\n", num2);

    num3 = num1;

    num1 = num2;

    num2 = num3;
    
    printf("\nAfter swappppinnnnnnn \n");
    
    printf("First number: %d\n", num1);
    
    printf("Second number: %d\n", num2);
    
     printf("\n                              -sakket, 16/8/26\n");
    
    return 0;
}