#include<stdio.h>
int main()
{
	int a = 0, b= 1,l;

    printf("Enter length :" );
    scanf("%d", &l);
    int i = 0 , temp;
    while( i <= l)
    {
    	temp = a+b;
    	a = b;
    	b = temp;
    	i++;
	}
	if(l ==1) printf("your answer is 1 ");
	else if( l == 2)printf("Your answer is 1");
	else if( l == 0)printf("Your answer is 0");
	else printf("Your answer is %d",b );
	

    return 0;

}

