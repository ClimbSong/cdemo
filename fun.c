#include <stdio.h>
void myFun(int y[],int n)
{
	int i;
	printf("\narray 2:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",y[i]);
	}
	return;    
}
int main()
{
	int a[5];
	int i;
	printf("please enter array a:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	myFun(b,5);
	return 0;
}