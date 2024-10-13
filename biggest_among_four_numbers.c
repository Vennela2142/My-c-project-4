#include<stdio.h>
main()
{
int a,b,c,d;
printf("the values of a,b,c,d are:");
scanf("%d %d %d %d",&a,&b,&c,&d);
if (a>b)
{
if(a>c)
{
if(a>d)
printf("a is bigger");
else
printf("d is bigger");
}
else
{
if(c>d)
printf("c is bigger");
else
printf("d is bigger");
}
}
else
{
if(b>c)
{
if(b>d)
printf("b is bigger");
else
printf("d is bigger");
}
else
{
if(c>d)
printf("c is bigger");
else
printf("d is bigger");
}
}
return 0;
}