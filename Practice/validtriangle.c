#include<stdio.h>
int main(){
int max ,side , sum = 0,count =3,res;
while(count > 0)
{
	printf("Enter side: ");
	scanf("%d",&side);
	if(count == 3)
	{
		max = side;
	}
	if( side > max)
	{
		max = side;
	}
	sum = sum +side;
	count--;
}

res = sum - max;
if(res > max)
{
	printf("This is a valid triangle!");
}
else{
	printf("This is not valid triangle");
}
return 0;
}

