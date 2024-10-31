//A programme based on a file to read names and store marks of 5 students

#include <stdio.h>
int main(int argc, char** argv)
{
	char name[5];
	int  marks,a,n;
	
	//prompt the user to enter names of 5 students
	printf("Enter the number of students:");
	scanf("%d",&n);
	
	FILE *fptr;
	fptr=(fopen("C:\\student.txt","w"));
	if(fptr== NULL){
		printf("error occured while opening the file");
		
	}
	{
		
	}	for (a=0;a<5;++) {
		printf("For students%d\nEnter name: "a+1)
		scanf("%s",name);
		printf("Enter marks:");
		scanf("%d",&marks);
		
		
		fprintf(fptr,"\nName:%s\nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	
	
	
	return 0;
}