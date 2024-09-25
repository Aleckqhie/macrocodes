/*Author;Alex Mwangi
Date;24TH SEPTEMBER 2024
Regno:CT101/G/23713/24
*/
#include <stdio.h>
#include<math.h>
int main(){

    float principle,rate,time,simpleinterest,compoundinterest;
    int n;
    //calculating the simple interest
    printf("enter principle\n");
    scanf("%f",&principle);
    printf("enter the rate\n");
    scanf("%f",&rate);
    printf("enter the timetaken (in years)");
    scanf("%f",&time);
    simpleinterest=(principle*rate*time)/100;
    printf("simple interest is %f",simpleinterest);
    //calculating the compound interest
    printf("enter number of times interest is compounded per year");
    scanf("%d",&n);
    compoundinterest=principle*pow((1+rate/(n*100)),n*time);
    printf("the compound aount is %.4f\n",compoundinterest);
return 0;
}
