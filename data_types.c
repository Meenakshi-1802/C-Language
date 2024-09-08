//data types
#include <stdio.h>
int main()
{
    int a = 4;
    float b = 6.9;
    char c = 'A';
    printf("The value of a is %d \n",a);
    printf("The value of b is %f \n",b);
    printf("The value of c is %c \n",c);

    return 0;

}

//Try it -create a program to add two numbers 
#include <stdio.h>
int main()
{
    int x = 100;
    int y = 200;
    printf("The sum of two numbers is %d",x + y);

return 0;

}

//receving input from the user use [scanf]
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the valueof a \n");
    scanf("%d", &a);

    printf("Enter the value of b \n");
    scanf("%d", &b);

    printf("The sum of a and b is %d",a + b);
    return 0;


}

