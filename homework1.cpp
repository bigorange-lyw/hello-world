#include <stdio.h>
int main(){
	int m,n,i,j;
	printf("������������������");
	scanf("%d%d",&m,&n);
	if(m>n){
	  j=m,m=n,n=j;
	}
	for (i = m;i >=1;i++){
	  if (i%n == 0 && i%m == 0)
	  break;
    }
	printf ("��С������Ϊ��%d" ,i);
	return 0;
}
