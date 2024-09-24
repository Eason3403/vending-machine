#include <stdio.h>

int main()
{
	int bill,coin;
	int paid=0;
	
	scanf("%d",&bill);
	
	while(paid<bill){
		scanf("%d",&coin);
		if(coin==1||coin==2||coin==5){
			paid+=coin;
		}else{
			printf("本机仅支持1 2 5元面值钱币");
		}
	}
	
	printf("找零%d元",paid-bill);
	return 0;
}
