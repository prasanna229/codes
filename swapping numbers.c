#include<stdio.h>
void main()
{
int a,b,x;
printf("enter the two numbers");
scanf("%d",&a);
scanf("%d",&b);
printf("the two numbers before swapping are a = %d and b = %d\n",a,b)
x = a;
a = b;
b = x;
printf("the two numbers after swapping are a = %d and b = %d\n",a,b)
}
