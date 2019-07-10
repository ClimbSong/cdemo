#include <stdio.h>
//description
int main(void)
{
	//count of the number
	int num;
	int i,j,t; 
	
	printf("input the numbers :\n");
	scanf("%d\n",&num);
	int a[num];
	for (i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(j=0;j<um-1;j++)
	{
		for(i=0;i<num-j-1;i++)
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
	for(i=0;i<num;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	system("pause");
 	return 0;
}