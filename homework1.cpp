#include <stdio.h>
int main(){
	int m,n,i,j;
	printf("请输入两个正整数：");
	scanf("%d%d",&m,&n);
	if(m>n){
	  j=m,m=n,n=j;
	}
	for (i = m;i >=1;i++){
	  if (i%n == 0 && i%m == 0)
	  break;
    }
	printf ("最小公倍数为：%d" ,i);
	return 0;
}
