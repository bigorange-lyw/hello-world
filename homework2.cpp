#include <stdio.h>
int main(){
	int m,n,i,temp,x;
	printf ("请输入正整数m,n：");
	scanf ("%d%d",&m,&n);
	if (m>n){
		temp = m;
		m = n;
		n = temp;
	}
	i = m;
	while (m%i != 0 && n%i != 0)
	  i--;
	if (i == 1)
	  printf ("m,n是互质数");
	else 
	  printf ("m,n不是互质数");
    return 0;
}
