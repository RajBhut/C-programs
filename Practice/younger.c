#include<stdio.h>
int main(){
	int ram,shyam,ajay,young;
	printf("Enter Ram's age: ");
	scanf("%d",&ram);
	printf("Enter Shyam's Shyam: ");
	scanf("%d",&shyam);
	printf("Enter Ajay's Ajay: ");
scanf("%d",&ajay);
if(ram == shyam && shyam == ajay){
printf("All are same age!"); return 0;}
if(ram==shyam && shyam< ajay){printf("Ram and shyam are youngest"); return 0;}
if(ajay==shyam && shyam< ram){printf("Ajay and shyam are youngest"); return 0;}
if(ram==ajay && ajay< shyam){printf("Ram and Ajay are youngest"); return 0;}
if(ram==ajay && ajay> shyam){printf("Shyam is youngest"); return 0;}
if(ram==shyam && ram> ajay){printf("Ajay is youngest"); return 0;}
if(ajay==shyam && ajay> ram){printf("Ram  is youngest"); return 0;}


young = ((ram<shyam)&&(ram<ajay)?printf("The youngest is Ram "):(shyam<ram)&&(shyam<ajay)?printf
("The youngest is Shyam "):printf("The youngest is Ajay"));

return 0;
}

