/*Precious Waithera 
Reg CT101/G/24685/24
*/
#include <stdio.h>
int main(){
	 
	 float principal, rate, time, n, amount, Rate, CInterest;
	 
	 printf("Enter principal amount:");
	 scanf("%f",&principal);
	 
	 printf("Enter rate(in percentage)");
	 scanf("%f",&rate);
	 
	 printf("Enter time (in years)");
	 scanf("%f",&time);
	 
	 printf("Enter n");
	 scanf("%f",&n);
	 
	 Rate = rate/100;
	 amount = principal * pow(1+(Rate/n),n * time);
	 
	 CInterest = amount - principal; 
	 
	 printf("CInterest: %.2lf\n", CInterest);
	 return 0;
	 
}


