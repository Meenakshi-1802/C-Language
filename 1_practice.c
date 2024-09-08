//calculate area of a reactangle-
#include <stdio.h>
main()
{
   int length=4,breadth=6;
   int area = length*breadth;
   printf("The area of this rectangle is %d",area);

return 0;

}

// //from taking user input
#include <stdio.h>
int main()
{
   int length,breadth;
   printf("What is the length of the rectangle\n");
   scanf("%d",&length);

   printf("What is the breadth of the rectangle\n");
   scanf("%d,&breadth");

   printf("The area of a rectangle is %d",length*breadth);

   return 0;

}


/*calculate the area of a circle and 
calculate the volume of a cylinder given its radius and height */ 
#include <stdio.h>
main()
{
    int radius = 4;
    float pi =3.12;
    printf("The area of this circle is %f\n",pi*radius*radius);
    int height = 3;
    printf("The volume of this circle is %f\n",pi*radius*radius*height);

    return 0;

}

//convert celsius to fahrenheit
#include <stdio.h>
int main()
{
    float celsius = 37, far;
    far = (celsius*9/5) + 32;
    printf("The value of this celsius temp in farhanheit is %f",far);

    return 0;

}

//calculate simple intrest
#include <stdio.h>
int main()
{
   int principal=100,rate=4,years=1;
   int simpleinterest = (principal*rate*years);
   printf("The value of simple interest is %d",simpleinterest);
   return 0;

}