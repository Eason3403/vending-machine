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
			printf("������֧��1 2 5Ԫ��ֵǮ��");
		}
	}
	
	printf("����%dԪ",paid-bill);
	return 0;
}
