#include<stdio.h>
int main()
{
	int n;
	int a[n];
	printf("enter array size");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (int i=0;i<n;i++)
	if (a[i]%2==0)
	printf("%d",a[i]);
	
	
}