#include<stdio.h>
int main()
{
	int arr[100],n,i;
	printf("Enter the number of elements\n :");
	scanf("%d",&n);
	printf("Enter elements :");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("All the elements are :");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
