/*author=Alex mwangi
regno = CT101/G/23713/24
*/
//preprocessor directive --scanf(), printf() 
#include<stdio.h>
int main() {
float principleamount, rate, time, simpleinterest;
printf("enter principle amount\n") ;
scanf("%f", &principleamount) ;
printf("the princieamount is %.3f\n",principleamount);
printf("enter rate\n");
scanf("%f", &rate) ;
printf("the rate is %.3f\n",rate);
printf("enter time taken\n");
scanf("%f",&time);
printf ("time taken is %.3f\n", time);
simpleinterest=(principleamount*rate*time) /100;
printf("the simpleinterest is%.3f",simpleinterest);
return 0;
}