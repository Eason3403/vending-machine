#include <stdio.h>

int main()
{
	int channel,number,price,i,number1;
	char type;
	int bill,coin;
	int paid=0;
	
	scanf("%c %d %d %d",&type,&channel,&price,&number1);
	
	while(1){
		scanf("%c %d %d",&type,&channel,&number);
		getchar();
		if(number<=number1){
			number1-=number;
			bill=number*price;
		
		while(paid<bill){
		scanf("%d",&coin);
		getchar();
		if(coin==1||coin==2||coin==5){
			paid+=coin;
		}else{
			printf("������֧��1 2 5Ԫ��ֵǮ��");
		}
}
	
	printf("����%dԪ",paid-bill);
	}else{
		printf("���ﲻ��");
	}
}
	
	return 0;
}
