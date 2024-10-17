/*programme to calculate electric bills
author:lonely saam
Town:Early Birds
Reg No:CT101/G/23880/24*/

#include <stdio.h>
float calculatecharges(float units);
float calculatesurcharge(float bills);
void getinput(int*id,char name[],float *units);
float calculatetotals(float bills,float surcharge);

int main(int argc, char** argv)
{
	int customerId;
	char customerName;
	float chargesPerUnit;
	float units;
	float bills;
	float surcharge;
	float totals;
	
	
	chargesPerUnit=calculatecharges(units);
	bills=chargesPerUnit*units;
	
	if(bills<100){
		bills=100;
	}
	
	
	printf("the customerId:%d\n",customerId);
	printf("the customerName:%c\n",customerName);
	printf("the units:%.2f\n",units);
	printf("the chargePerUnit:%.2f\n",chargesPerUnit);
	printf("the totals is:.2%f\n",totals);
	printf("the surcharge is:.2f\n",surcharge);
	
	return 0;
}

void getinput(int*customerId,char customerName[],float*units){
	printf("enter the customerId:");
	scanf("%d\n",customerId);
	printf("enter the customerName:");
	scanf("%c\n",customerName);
	printf("enter the units:",units);
	scanf("%f\n",units);
	
}


float calculatecharges(float units){
	if(units<=199){
		return 1.20;
	}
	else if(units<400){
		return 1.50;
	}
	else{
		return 2.00;
	}
	
}


float calculatesurcharge(float bills){
	if(bills>400){
		return bills*0.15;
	}
return 0;
}

