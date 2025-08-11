# include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 1st no:");
scanf("%d",&a);
printf("Enter 2nd no:");
scanf("%d",&b);
printf("\nPress-1 for Addition:");

printf("\nPress-2 for Subtraction:");

printf("\nPress-3 for Multiplication:");

printf("\nPress-4 for Division:");
printf("\nEnter your choice:");
scanf("%d",&c);
switch(c)
{
case 1 : printf("Sum of a&b is:%d",a+b);
break;
case 2 : printf("Subtractn of a&b is: %d",a-b);
break;
case 3 : printf("Mul of a&b is: %d",a*b);
break;
case 4 : printf("Division of a&b is: %d",a/b);
break;
default : printf("Enter a valid value");
break;
}
return 0;
}








