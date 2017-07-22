#include<stdio.h>
int main()
{
int num;
printf("enter the num");
scanf("%d",&num);
if(num>0)
{
printf("The num is positive");
}
else if(num<0)
{
printf("The num is negative");
}
else
{
printf("The num is zero");
}
return 0;
}
