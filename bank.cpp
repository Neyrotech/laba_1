#include <stdio.h>

double r,s,p;
int mounths;
void main(){
	scanf("%lf %lf %lf",&r,&s,&p);
	while (r <s){
		mounths++;
		r+=(r/100)*p;
	}
	if(mounths%12 == 0){
		mounths/=12;
		printf("%d",mounths);
	}
	else{
		mounths= mounths/12 +1;
		mounths++;
		printf("%d",mounths);
	}
}