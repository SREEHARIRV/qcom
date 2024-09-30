#include <stdio.h>
#define SIZE 10

// bubble sort is taking less time than selection sort that is o.o59sec , o.o77sec respectively
main( )
{
// int arr[SIZE]={1,2,3,4,5,6,7,8,9,10};
int arr[SIZE]={11,9,8,79,6,58,4,3,27,0};
				// 9 11 8,79,6,58,4,3,27,0
				// 9 11 1o,79,6,58,4,3,27,0
				//   j=1  
int low,up,mid,i,j,item;
for(i=0; i<=SIZE-1; i++)
{
	printf("%d  ", arr[i]);
}
for (i=1; i<10; i++)
{
	item=arr[i]; // 
	for(j=i-1; j>=0 ; j--)
	{
		if(arr[j] > item)  
		{
			arr[j+1]=arr[j];
		}
		else
			break;
	}
	arr[j+1]=item;
	
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
