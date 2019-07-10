#include <stdio.h>
//description
int main(void)
{
	//count of the number
	int num;
	int i,j,t; 
	
	printf("please input the number counts :\n");
	scanf("%d",&num);
	int a[num];
	printf("ok,please input the numbers:\n");
	for (i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}

	for(j=0;j<num-1;j++)
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