#include <stdio.h>
int main(){
	int m,n,i,temp,x;
	printf ("������������m,n��");
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
	  printf ("m,n�ǻ�����");
	else 
	  printf ("m,n���ǻ�����");
    return 0;
}
