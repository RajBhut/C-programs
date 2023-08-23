#include<stdio.h>
int main()
{
	
int a,b;
    printf("Enter Two numbers: " );
    scanf("%d %d",&a , &b);
    if(b > 0){
	
    while(b != 0)
    {
    	a++;
    	b--;
	}
}
else{
	while( b!=0)
	{
		a--;
		b++;
	}
}
printf(" Your sum is %d ",a);   
    return 0;  

}

