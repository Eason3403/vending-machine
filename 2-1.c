#include <stdio.h>
#include <string.h>

void purchase(bill){
	
	int paid=0;
	int coin;
	
	printf("�ܼ�%dԪ����Ͷ��\n",bill);
	
	while(1){
	scanf("%d",&coin);
	getchar();
	if (coin==1||coin==2||coin==5){
		paid+=coin;
		if (paid<bill){
			printf("�����Ͷ��\n");
		}else if(paid>bill){
			printf("����%dԪ\n",paid-bill); 
			break;
		}else{
			printf("�Ѹ���\n");
			break;
		}
	}else{
		printf("��������ȡ1 2 5��ֵǮ��\n"); 
	}
	}
}

void devide(int refund){
	int one=1;
	int two=1;
	int five=1;
	int exit=0;
//	scanf("%d",&refund);
	
	if (refund==1){
		printf("������:\nҼԪ1��\n");
	}
	if(refund==2){
		printf("������:\n��Ԫ1��\n"); 
	}
	if(refund==3){
		printf("������:\nҼԪ1��\n��Ԫ1��\n");
	}
	if(refund==4){
		printf("������:\n��Ԫ2��\n");
	}
	if(refund==5){
		printf("������:\n��Ԫ1��\n");
	}
	if(refund==6){
		printf("������:\nҼԪ1��\n��Ԫ1��\n");
	}
	if(refund==7){
		printf("������:\n��Ԫ1��\n��Ԫ1��\n"); 
	}
	if (refund>7){
	for(one=1;one<=refund;one++){
		for(two=1;two<=refund/2;two++){
			for(five=1;five<=refund;five++){
				if(one+two*2+five*5==refund){
					printf("������:\n");
					if(one!=0){
						printf("ҼԪ%d��\n",one);
					}
					if(two!=0){
						printf("��Ԫ%d��\n",two);
					}
					if(five!=0){
						printf("��Ԫ%d��\n",five);
					}
					exit=1;
					break;
				}
			}
		if(exit) break;
		}
	if (exit) break;
	}
}
}

int main()
{
	int step=1;
	char type[100];
	char state[]="END";
	char str[100];
	int channel,price,number;
	int price1,price2,price4,price3,price5;
	char type1[100],type2[100],type3[100],type4[100],type5[100];
	int number1=0;
	int number2=0;
	int number3=0;
	int number4=0;
	int number5=0;
	int end_p,end_l,refund,back,paid;
	int count=0;
	int bill=0;
	
	printf("�ϻ��У���������Ʒ���� ���ܺ� ���� ����,����ENDֹͣ�ϻ�\n");
	while (1){
			scanf("%s",&type);
			getchar();
			if(strcmp(type,state)==0){
				break;
     		}else{
			 scanf("%d %d %d",&channel,&price,&number);
     		getchar();}
			
			if (1<=channel&&channel<=5&&0<=number&&number<=50&&0<price&&price<10){
				switch (channel){
					case 1:
						strcpy(type1,type);
						price1=price;
						number1+=number;
						if (number1>50){
							printf("���ܳ��أ��˴��ϻ���Ч\n"); 
						 	number1-=number;
						}
//						printf("%d %d",price1,number1);
						break;
					case 2:
						strcpy(type2,type);
						price2=price;
						number2+=number;
						if (number>50){
							printf("���ܳ��أ��˴��ϻ���Ч\n"); 
						 	number2-=number;
						}
//						printf("%d %d",price2,number2);
						break;
					case 3:
						strcpy(type3,type);
						price3=price;
						number3+=number;
						if (number3>50){
							printf("���ܳ��أ��˴��ϻ���Ч\n"); 
						 	number3-=number;
						}
//						printf("%d %d",price3,number3);
						break;
					case 4:
						strcpy(type4,type);
						price4=price;
						number4+=number;
						if (number4>50){
							printf("���ܳ��أ��˴��ϻ���Ч\n"); 
						 	number4-=number;
						}
//						printf("%d %d",price4,number4);
						break;
					case 5:
						strcpy(type5,type);
						price5=price;
						number5+=number;
						if (number5>50){
							printf("���ܳ��أ��˴��ϻ���Ч\n"); 
				 			number5-=number;
						}
//						printf("%d %d",price5,number5);
						break;
				} 
			}	
			if (channel<1||channel>5){
				printf("���ܺŴ��� ��[1,5]\n");
			}
	
			if (price<=0||price>=10){
				printf("���۴��� ��(0,10)\n"); 
			}
			
			if (number<0||number>50){
				printf("�������󣬽�(0,50]\n"); 
			}
//				printf("load\n");
//				printf("����endֹͣ�ϻ�������������������ϻ�\n");
//				scanf("%s",&str);
//				getchar();
//				if(strcmp(str,state)==0){
//					break;
//				}
		}
		
		printf("ѡ���У���������Ʒ���� ���ܺ� ����������ENDֹͣѡ��\n");
		
	while (1){
		
		scanf("%s",&type);
			getchar();
			if(strcmp(type,state)==0){
				break;
     		}else{
			 scanf("%d %d",&channel,&number);
     		getchar();}
		
		if(channel>=1&&channel<=5){
			switch (channel){
				case 1:
					if (strcmp(type,type1)!=0){
						printf("��Ʒ������\n");
					}else if(number>number1){
						printf("��Ʒ����\n");
					}else{
						bill+=number*price1;
					}
					break;
				case 2:
					if (strcmp(type,type2)!=0){
						printf("��Ʒ������\n");
					}else if(number>number2){
						printf("��Ʒ����\n");
					}else{
						bill+=number*price2;
					}
					break;
				case 3:
					if (strcmp(type,type3)!=0){
						printf("��Ʒ������\n");
					}else if(number>number3){
						printf("��Ʒ����\n");
					}else{
						bill+=number*price3;
					}
					break;	
				case 4:
					if (strcmp(type,type4)!=0){
						printf("��Ʒ������\n");
					}else if(number>number4){
						printf("��Ʒ����\n");
					}else{
						bill+=number*price4;
					}
					break;
				case 5:
					if (strcmp(type,type5)!=0){
						printf("��Ʒ������\n");
					}else if(number>number5){
						printf("��Ʒ����\n");
					}else{
						bill+=number*price5;
					}
					break;		
			}
		} else{
			printf("���ܲ�����\n"); 
		}
//		printf("����end�˳�ѡ���������������������\n");
//		scanf("%s",&str);
//		getchar();
//		if(strcmp(str,state)==0){
//			break;
//		}
		}
		
		purchase(bill);
	return 0;
	}		

	



