//c functions
#include <stdio.h>
#include <math.h>
int sum(int x,int y,int z);
int multiplication(int a,int b);

int main(int argc, char** argv)
{
	int x,y,z,a,b,c;
	printf("enter 3 values:");
	scanf("%d%d%d",&a,&b,&c);
	x=sum(a,b,c);
	z=sum(100,200,300);
	y=multiplication(a,c);
	
	printf("the sum is %d\n",x);
	printf("the second sum is %d\n",z);
	printf("the multiplication is %d\n",y);
	return 0;
}
int sum(int x,int y,int z){
	int results;
	results =x+y+z;
	return results;
}

int multiplication(int a ,int b){
	int results;
	results =a*b;
	return results;
}