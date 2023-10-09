#include <stdio.h>
#include <math.h>

//not sure
int main() {
  double time;
  double interestrate;
  double principal;
  printf("Enter the amount of time(in years), interest rate and principal.");
  scanf("%lf,%lf,%lf",&time,&interestrate,&principal);
  double interestrateasofone = 1+interestrate;
  double totaltime;
  int i;
  for (i=2;i<=time;i++) {
    interestrateasofone = interestrateasofone*1+interestrate;
  }
  double totalinterest = principal*(interestrateasofone);


  printf("Interest: %lf\n",(principal - totalinterest));
  return 0;
 
}