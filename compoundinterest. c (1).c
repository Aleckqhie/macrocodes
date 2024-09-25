//programme for calculating compound interest
/*
Author:Alex Mwangi
Regno:CT101/G/23713/24
Date:24/8/2024
*/
#include<stdio.h>
#include<math.h>
int main(){
float principleamount, rate, time,compoundinterest;
int n;
printf("enter the principle amount\n");
scanf("%f", &principleamount);
printf("the principleamount is %.2f\n", principleamount) ;
printf("enter the rate\n");
scanf("%f",&rate);
printf("the rate is%.2f\n", rate) ;
printf("enter the time taken \n");
scanf("%f",&time);
printf ("the time is%.2f\n", time) ;
printf("enter the number of times interest is comounding annualy\n");
scanf("%d",&n);
printf("the number of interest compounding annually is%.2f\n",n);
compoundinterest=principleamount*pow((1+rate/(n*100)), n*time) ;
printf("compoundinterest is %.2f\n",compoundinterest);
return 0;
}