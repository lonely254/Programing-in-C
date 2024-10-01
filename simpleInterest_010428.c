#include <stdio.h>
double simpleInterest(double principal, double time, double rate);
int main() {
    double principal,time,rate;
    printf("Enter the principal: ");
    scanf("%lf",&principal);
    printf("Enter the time in years: ");
    scanf("%lf",&time);
    printf("Enter the rate: ");
    scanf("%lf",&rate);
    double interest = simpleInterest(principal,time,rate);
    printf("Simple Interest: %lf",interest);
    return 0;
}
double simpleInterest(double principal,double time,double rate) {
    return (principal*time*rate)/100;
}