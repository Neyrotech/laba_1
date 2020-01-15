#include <stdio.h>

double t_furingate,t_celsium;
void main(){
	scanf("%lf", &t_furingate);
	t_celsium = (t_furingate-32.0)*5.0/9.0;
	printf("%lf",t_celsium);
}