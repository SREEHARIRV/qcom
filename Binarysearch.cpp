#include <stdio.h>
#define SIZE 10

main( )
{
int arr[SIZE]={1,2,3,4,5,6,7,8,9,10};
int low,up,mid,i,item;
for(i=0; i<SIZE; i++)
{
	printf("%d\t", arr[i]);
}
printf ("\nEnter the item to be searched ") ;
scanf("%d",&item) ;
low=0;
up=SIZE-1;

while(low<=up && item != arr[mid] )
{
	mid=(low+up)/2;
	if(item == arr[mid])
	{
		printf("Item found in array\n");
		break;
	}
	if(low==up && up==mid )
		printf("Item not found in array\n");	
	if(item<arr[mid])
		up=mid-1;
	if(item>arr[mid])
		low=mid+1;
}

}


