#include <stdio.h>//Preprocessor Directive
#include <math.h>

double compoundInterest(double principal,double compoundingYears,double totalNumberOfYears,double rate);//Functon declaration

int main() {
    double principal,compoundingYears,totalNumberOfYears,rate;
    printf("Enter the Principal: ");
    scanf("%lf",&principal);
    printf("Enter the Number of Years: ");
    scanf("%lf",&compoundingYears);
    printf("Enter the total Number of Years: ");
    scanf("%lf",&totalNumberOfYears);
    printf("Enter the rate: ");
    scanf("%lf",&rate);

    double Amount = compoundInterest(principal,compoundingYears,totalNumberOfYears,rate);
    printf("Compound Interest of %.2lf compounded at the rate of %.2lf for %.2lf Years = %.2lf",principal,rate,totalNumberOfYears,Amount);
}

double compoundInterest(double principal,double compoundingYears,double totalNumberOfYears,double rate) {
    return principal* pow((1 + rate/compoundingYears),compoundingYears*totalNumberOfYears);
}
