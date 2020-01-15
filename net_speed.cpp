#include <stdio.h>

double v,t,y,razmer,price;
void main(){
	scanf("%lf %lf %lf", &v,&t,&y);
	t*=60;
	razmer = t*v;
	razmer = razmer/8/1024/1024/1024;
	price = y*(razmer-1);
	switch (price > 0){
	case 1:
		printf("%lf %lf",razmer,price);
		break;
	
	case 0:
		printf("%lf %lf",razmer,0);
	}
}