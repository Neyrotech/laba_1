#include <stdio.h>
#include <math.h>
double xa,ya,za,xb,yb,zb,fi;
void main(){
	scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&za,&xb,&yb,&zb);
	fi = (xa*xb+ya*yb+za*zb)/(sqrt(pow(xa,2)+pow(ya,2)+pow(za,2))*sqrt(pow(xb,2)+pow(yb,2)+pow(zb,2)));
	printf("%lf",fi);
}