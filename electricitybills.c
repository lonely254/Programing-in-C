/*programme on electricity bill calculator
authour:MUTISO DENNIS MWENDWA
reg no:CT101/G/23880/24*/

#include <stdio.h>
int main(int argc, char** argv)
{
	



	int customer_id;
	char customer_name;
	float units;
	float charge_rate;
	float bills;
	float surcharge;
	float surcharge_fee;
	float total_amount;
	
	//prompt the user to enter the custpmer_id
	printf("enter the customer_id:");
	scanf("%d",&customer_id);
	//prompt the user to enter the customer_name
	printf("enter the customer_name:");
	scanf("%c",&customer_name);
	//prompt the user to enter the units consumed
	printf("enter the units consumed:");
	scanf("%f",&units);
	
	if(units<=199){
		charge_rate=1.20;
		bills=charge_rate*units;
		printf("\n the bills is:%.2f",bills);
	}
	else
	{
		if(units<400){
		bills=charge_rate*units;
		printf("\n the bills is:%.2f",bills);	
	}
	
	else if (units>=400){
		charge_rate=1.80;
		bills=charge_rate*units;
		printf("\n the bills is:%.2f",bills);
	}
	
	} if (units>600){
		charge_rate=2.00;
		bills=charge_rate*units;
		printf("\n the bills is:%.2f",bills);
		
		
      surcharge=15;
	if(bills>=400){
		surcharge_fee=(bills*surcharge/100);
		printf("\n the surcharge_fee is:%.2f",surcharge_fee);
	}
	total_amount=bills+surcharge_fee;
	printf("\n the total_amount is:%.2f",total_amount);
	printf("\n the customer_id is:%d",customer_id);
	printf("\n the customer_name is:%c",customer_name);
	printf("\n the number of units:%.2f",units);
	printf("the charge_rate is:%.2f",charge_rate);
	printf("\n the total_amount is :%.2f",total_amount);
	
	return 0;}
	
}