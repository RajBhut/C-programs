#include<stdio.h>
int main(){
	float qun , ppi ,sum = 0 , dis ;
	printf("Enter quantity of your items and price of per item: ");
	scanf("%f %f",&qun,&ppi);
	sum = qun * ppi;
	if(qun
	 > 1000)
	{
		dis = (sum * 0.1);
		sum = sum - dis;
	}
	printf("your expence is:  %f", sum);


return 0;
}

