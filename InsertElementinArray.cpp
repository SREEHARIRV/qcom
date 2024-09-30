#include <stdio.h>
#define SIZE 10

// bubble sort is taking less time than selection sort that is o.o59sec , o.o77sec respectively
main( )
{
int arr[SIZE]={1,2,3,4,5,7,8,9,10};
// int arr[SIZE]={11,9,8,79,6,58,4,3,27,0};
int low,up,mid,i,j,item;
for(i=0; i<=SIZE-1; i++)
{
	printf("%d  ", arr[i]);
}
printf("Enter item to be inserted ");
scanf("%d", &item);

for(i=SIZE-2; i>=0 && item<arr[i] ; i--)
{
	if(item<arr[i])
	{
		arr[i+1]=arr[i];
	}
	
}
arr[i+1]=item;

printf("\n");
for(i=0; i<SIZE; i++)
{
	printf("%d  ", arr[i]);
}

}
