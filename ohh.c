#include<stdio.h>
float Y(float x){
return(1/1+x*x);
}

int main()
{
	int x0,xn,x,n,h;
	printf("enter the lower limit, upper limit);
	scanf("%d%d",&x0,&xn);
     n=(x0+xn)/2;
     h=(xn-x0)/n;
     for(int i=x0; i<=n; i=+h){
     int Z=Y(i);
     printf("%d",Z);
     }
     
     
     
	
}
