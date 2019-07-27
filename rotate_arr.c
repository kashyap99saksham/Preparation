#include <stdio.h> 
int main()
{
	int arr[100],n,d,temp[100];
	printf("Enter size of array\n");
	scanf("%d",&n);

	printf("Enter the array element\n");
	
	for (int x = 0; x < n; x++)
	{
		scanf("%d",&arr[x]);
	}

	printf("How many elements you want to shift\n");
	scanf("%d",&d);
	for (int i = 0; i < d; i++)
	{
		temp[i] = arr[0];
		for(int j=1;j<n;j++)
		{
			arr[j-1] = arr[j];
		}
		arr[n-1] = temp[i];
	}
	for (int k = 0; k < n; k++)
	{
		printf("%d",arr[k]);
	}
	return 0; 
}
