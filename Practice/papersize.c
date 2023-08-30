#include<stdio.h>
int main()
{
	int l =1189 ,b = 841,size;
	printf("Enter size number:");
	scanf("%d",&size);
	while(size != 0)
	{
		if(l>b)l /= 2 ;
		else b /= 2;
		size--;
	}
	
	printf("The dimantion of paper is %d X %d", l ,b);
	


return 0;
}

