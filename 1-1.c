#include <stdio.h>

int main()
{
	int channel,number,price,i;
	char type;
	
	scanf("%c %d %d %d",&type,&channel,&price,&number);

	printf("%d: ",channel);
	for(i=number;i>0;i--){
		printf("%c",type);
	}
	
	printf(" %d",price);
	
	
	
	return 0;
}
