#include<stdio.h>
int main ()
 {
 	int i,j,k,space;
printf("ENTER THE NUMBER HERE ");
scanf("%d",&k);
space=k-1;
for (i=1;i<=k;i++)
{
	for (j=1;j<=i;j++)
	printf("1");
	space--;
	printf("\n");
}
 	
 }