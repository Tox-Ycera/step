/*Pecious Waithera
Reg CT101/24685/24
*/
#include<stdio.h>
int main(){
	
	float principal, rate, time, interest;
	
	printf("Enter principal amout:");
	scanf("%f",&principal);
	
	printf("Enter rate");
	scanf("%f",&rate);
	
	printf("Enter time(in years)");
	scanf("%f",&time);
	
	interest = principal * (rate / 100) * time;
	
	printf("interest; %.2f\n",interest);
	
	return 0;
}
