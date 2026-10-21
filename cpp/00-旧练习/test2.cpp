#include <stdio.h>
#include <windows.h>
int main(void)
{SetConsoleOutputCP(65001);
int a;
int b;
int sum;
printf("1 2");
scanf("%d %d",&a,&b);
sum=a+b;
printf("%d+%d=%d\n",a,b,sum);
printf("%d-%d=%d\n",a,b,a-b);
printf("%d*%d=%d\n",a,b,a*b);
double r;
double area;
double pi=3.1415926;
printf("4");
scanf("%lf",&r);
area=pi*r*r;
printf("4%.2f=%.4f\n",r,area);
return 0;
}
