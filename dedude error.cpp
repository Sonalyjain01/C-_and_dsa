#include<stdio.h>
#include<conio.h>
void main()
{
float a[100],sum=0,x;
float approx;
int n,i;
clrscr();
printf(“Enter the degree of the polynomial”);
scanf(“%d”,&n);
printf(“Enter the coefficients into the array”);
for(i=n;i>=0;i--)
 {
 scanf(“%f”,&a[i]);
 }
printf(“Enter the value of x”);
scanf(“%f”,&x);
for(i=n;i>0;i--)
 {
 sum=(sum+a[i])*x;
 }
sum=sum+a[0];
printf(“\n value of the polynomial is=%f”, sum);
printf(“Enter the approximate value: ”);
scanf(“%f”,&approx);
printf(“Absolute error=%f”,(sum-approx));
getch();
}

