//variables and data types 
// preprocessor directive scanf(), printf () 
#include<stdio.h>
int main() {
//declaration and initialization
char a ='H';
char name[]={};
int age;
float salary;
double budget;
printf("enter a character");
scanf("%c",&a);
printf("the character is%c\n",a);
printf("enter your name:") ;
scanf("%s",&name);
printf("your name is%s\n ",name);
printf("enter your age ");
scanf("%d",&age);
printf("your age is%d\n",age);
printf("enter your salary");
scanf("%f",&salary);
printf("your salary is%f\n",salary);
printf("enter your budget");
scanf("%lf",&budget);
printf("your budget is%lf\n",budget);
return 0;
}