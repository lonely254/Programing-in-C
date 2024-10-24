//programme on book structure concerded on prompting the user
// authour lonely saam
//reg no;CT101/G/23880/24

#include <stdio.h>
#include <string.h>

struct 
{
	char title[30];
	char authour[30];
	int publicationYear;
	char ISBN;
	float price;
	
}book;

int main(int argc, char** argv)
{
	printf("Enter the book title:");
	scanf("%s",&book.title);
 
    printf("Name of authour:");
    scanf("%s",&book.authour);
    
    printf("Enter Publication Year:");
    scanf("%d",&book.publicationYear);
    
    printf("Enter ISBN:");
    scanf("%s",&book.ISBN);
    
    printf("Enter the price:");
    scanf("%f",&book.price);
    
    
    printf("Title:%s\n",book.title);
    printf("Authour:%s\n",book.authour);
    printf("Publication Year:%d\n",book.publicationYear);
    printf("ISBN:%s\n",book.ISBN);
    printf("Price:%1.f\n",book.price);
    
	return 0;
}