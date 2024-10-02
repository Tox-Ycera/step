/*Precious Waithera
Reg CT101/G/24685/24
*/
#include <stdio.h>
int main() 
    {	
	int Book_ID, Due_date, Return_date, Overdue, Fine_charge, Fine_charge1, Fine_charge2, Fine_charge3;	
	
	printf("Enter Book_ID:");
	scanf("%d", &Book_ID);
	
	printf(" Enter Due_date:");
	scanf("%d", &Due_date);
	
	printf("Enter Return_date:");
	scanf("%d", &Return_date); 
	
	Overdue=Return_date-Due_date;
	if (Overdue < 0) 
	printf("Fine_charge=0");
	
	else if (Overdue <= 7 ){
	 
	 Fine_charge1=Overdue * 20;
	 printf("%d",Fine_charge1);}
	 else if (Overdue <14 ){
	 
	 Fine_charge2=Overdue * 50;
	 printf("%d",Fine_charge2);}
	 else if(Overdue > 14){
	 
	 Fine_charge3=Overdue * 100;
	 printf("%d",Fine_charge3);}

	
	return 0;
}
