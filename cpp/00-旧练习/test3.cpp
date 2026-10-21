#include <stdio.h>
#include <windows.h>
int main(void)
{
SetConsoleOutputCP(65001);
int a=7,b=2;
printf("a=%d,b=%d\n\n",a,b);
printf("a+b=%d\n",a+b);
printf("a-b=%d\n",a-b);
printf("a*b=%d\n",a*b);
printf("a/b=%d\n",a/b);
printf("a%%b=%d\n",a%b);
double x=7.0,y=2.0;
printf("\nx/y=%f\n",x/y);
printf("(double)a/b=%f\n",(double)a/b);
int n=5;
printf("\nn %d\n",n);
n++;
printf("n++ n=%d\n",n);
n--;
printf("n-- n=%d\n",n);
n+=10;
printf("n+=10 n=%d\n",n);
int num=365;
int ge=num%10;
int shi=num/10%10;
int bai=num/100;
printf("\n%d=%d,=%d,%d\n",num,bai,shi,ge);
return 0;
}
