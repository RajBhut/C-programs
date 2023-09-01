#include<stdio.h>
int main(){
int iy,y = 1900,ly = 0,nly = 0,diff;
printf("Enter Year: ");
scanf("%d",&iy);

while(iy > y)
{
	if(iy%100==0 && iy % 400 == 0)
	{
		ly++;
		iy--;
	}
	else if(iy % 100 != 0 && iy % 4 == 0 )
	{
		ly++;
		iy--;
	}
	else {
		nly++;
		iy--;
	}
}
diff = (nly * 365)+(ly * 366);
printf("%d",(diff % 7));
switch(diff % 7){

case 0:{printf("It is Monday!");break;}
case 1:{printf("It is Tsday!");break;}
case 2:{printf("It is Wednesday!");break;}
case 3:{printf("It is Thursday!");break;}
case 4:{printf("It is Friday!");break;}
case 5:{printf("It is Saturday!");break;}
case 6:{printf("It is Sunday!");break;}

}

return 0;
}

