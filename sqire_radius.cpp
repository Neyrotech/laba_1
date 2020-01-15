#include <stdio.h>
#include <math.h>
double a,b,c,p,r;
void main(){
	scanf("%lf %lf %lf",&a,&b,&c);
	p = (a+b+c)/2;
	r = sqrt((p-a)*(p-b)*(p-c))/p;
	printf("%lf",r);
}