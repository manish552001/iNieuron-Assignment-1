// 4. WAP to find the area of the circle. Take radius of circle from user as input
#include<stdio.h>

int main()
{   float a,area;

    printf("Enter the radius of circle: ");
    scanf("%f",&a);
    area=3.14*a*a;
    printf("Area of circle is %.2f having the radius %.2f",area,a);
return 0;
}