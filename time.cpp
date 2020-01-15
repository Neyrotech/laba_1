#include <stdio.h>

int m,n,k;
long int p,q,r,oldtime,newtime;
void main(){
	scanf("%d %d %d %d %d %d",&m,&n,&k, &p,&q,&r);
	oldtime = (m*3600+n*60+k);
	newtime = oldtime+p*3600+q*60+r;
	m = newtime/3600%24;
	newtime %= 3600;
	n = newtime / 60;
	newtime %=60;
	printf("%d %d %d", m,n,newtime);
	
}