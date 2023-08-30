#include<stdio.h>

int main()
{
	
int n1 ,n2 , n3 , max;
printf("Enter 3 numbers :");
scanf("%d%d
%d", &n1 ,&n2 ,&n3);
if(n1 == n2 && n2 == n3)
{
	printf("All are same!");
	return 0;
}
max = (n1>n2)&&(n1>n3)?n1:(n2>n3)&&(n2>n1)?n2:n3;
printf("Max value is %d:",max);
  
    return 0;
    

}

