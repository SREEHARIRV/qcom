#include <stdio.h>
#define SIZE 10

main( )
{
// int arr[SIZE]={1,2,3,4,5,6,7,8,9,10};
int arr[SIZE]={11,9,8,79,6,58,4,3,27,0};
int low,up,mid,i,j,item;
for(i=0; i<SIZE; i++)
{
	printf("%d  ", arr[i]);
}
for (i=0; i<10; i++)
{
	for(j=i+1; j<10; j++)
	{
		if(arr[i] > arr[j])
		{
			item=arr[i];
			arr[i]=arr[j];
			arr[j]=item;
		}
	}
}
printf("\n");
for(i=0; i<SIZE; i++)
{
	printf("%d  ", arr[i]);
}

}
// Process exited after 0.04961 seconds with return value 0 ==> Insertion Sort
// Process exited after 0.05542 seconds with return value 0 ==> Bubble Sort
// Process exited after 0.06675 seconds with return value 0 ==> Selection Sort
