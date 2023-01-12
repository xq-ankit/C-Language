/*to find leap year
a year should be having two case 
divided by 400
or
divied by 4 but not with 100 */ 
#include<stdio.h>
int main(){
int year;
printf("Enter the year: ");
scanf("%d",&year);
if(year%400==0 || year%4==0 && year%100!=0)
{
    printf("%d is a LEAP YEAR!",year);

}
else{
    printf("%d is NOT a LEAP YEAR!",year);
}
return 0;



}