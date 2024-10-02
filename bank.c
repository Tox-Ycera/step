/*Precious Waithera
Reg CT101/G/24685/24
*/
#include <stdio.h>
int main(){
	
	int age;
	int annual_income;
	
	printf("Enter age: ");
	scanf("%d",&age);
	
	printf("Enter annual income amount: ");
	scanf("%d", &annual_income);
	
	if(age>21 && annual_income>=21000)
	{
		printf("Congratulations you are qualified for a loan");
	}
	else
	printf("Unfortunately we are unable to offer you a loan at this time");
	
	return 0;
}
