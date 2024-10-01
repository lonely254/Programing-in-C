/*programme to calculate fine for overdue library books in Kirinyanga
date:25/09/2024
producer:Mutiso Dennis
reg no:CT101/G/23880/24
location:Early Birds*/
#include <stdio.h>
int main(int argc, char** argv)
{
	int book_id;
	int due_date;
	int return_date;
	//prompt the user to enter book_id
	printf("enter the book_id:");
	scanf("%d",&book_id);
	//prompt the user to enter the due date
	printf("enter the due_date:");
	scanf("%d",&due_date);
	
	//prompt the user to enter the return_date
	printf("enter the return_date:");
	scanf("%d",&return_date);
	
	int over_due_date=(return_date-due_date);
	int fine_rate;
	int fine_amount;
	if(over_due_date<=7) {
		 int fine_rate=20;
		 int fine_amount=fine_rate*over_due_date;
		 printf("the fine_amount is:%.2d",fine_amount);
		 
	} else if("over_due_days<15"){
     	int fine_rate=50;
     	int fine_amount=fine_rate*over_due_date;
     	printf("the fine_amount is:%.2d",fine_amount);
     	
	}  else {
     	int fine_rate=100;
     	int fine_amount=fine_rate*over_due_date;
     	printf("the fine_amount is :%.2d",fine_amount);
	 }
	 printf("\nthe book_id is:%d",book_id);
	 printf("\nthe due_date is:%d",due_date);
	 printf("\nthe return_date is:%d",return_date);
	 printf("\nthe over_due_date is:%d",over_due_date);
	 printf("\nthe }[int fine_rate] is:%d",fine_rate);
	 printf("\nthe fine_amount is:%d",fine_amount );
	 
	 		
	return 0;
}