#include<stdio.h>
int main()
{
int s;
printf("enter number: ");
scanf("%d",&s);
printf("%d", fact(s));
return 0;
}

int fact (int n)
{
	if( n ==1 ||n==0)
	{
		return 1;
	}
	return(n * fact(n-1));
}
