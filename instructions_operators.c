//Instructions and operators
#include <stdio.h>
main()
{
    //int a = 4;
    int a =4,b,c; //Type declaration instruction
    b = c =a;
    printf("The value of a is %d \n",a);
    printf("The value of b is %d \n",b);
    printf("The value of c is %d \n",c);
    return 0;

}

//Arithmatic instructions
#include <stdio.h>
int main()
{
    int a = 4;
    int b = 8;
    printf("The value of a + b is: %d \n",a + b);
    printf("The value of a - b is: %d \n",a - b);
    printf("The value of a * b is: %d \n",a * b);
    printf("The value of a / b is: %d \n",a / b);
return 0;

}

//moduler division opeartor
#include <stdio.h>
main()
{

    printf("5 when divided by 2 leaves a remainder of %d\n",5%2);
    printf("-5 when divided by 2 leaves a remainder of %d\n",-5%2);
    printf("5 when divided by -2 leaves a remainder of %d\n",5%-2);

    return 0;
}

// pow function
#include <stdio.h>
#include <math.h>
int main()
{

    printf("The value of 4 to the power 5 is %f \n",pow(2,5));

    return 0;
}

//Type conversion
#include <stdio.h>
int main()
{
   printf("The value of 6+5 is %d \n",6 + 5);
   printf("The value of 6+5.6 is %f \n",6 + 5.6);
   printf("The value of 6.1+5.6 is %f \n",6.1 + 5.6);
   printf("The value of 5/2 is %d \n",5 / 2);
   printf("The value of 3.0/9 is %f \n",3.0 + 9);

return 0;

}
