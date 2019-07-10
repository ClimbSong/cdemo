#include <stdio.h>
//description
int main(void)
{
	//count of the number
	const int NUM_COUNT=3;
	int a[NUM_COUNT];
	int i,j,t; 
	
	printf("input %d numbers :\n",NUM_COUNT);
	for (i=0;i<NUM_COUNT;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(j=0;j<NUM_COUNT-1;j++)
	{
		for(i=0;i<NUM_COUNT-j-1;i++)
		{
			if (a[i]>a[i+1])//compare the first and second
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	printf("the sorted numbers :\n");
	for(i=0;i<NUM_COUNT;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	system("pause");
 	return 0;
}