#include <stdio.h>
#define SIZE 10
#define SIZE1 14
#define SIZE2 SIZE+SIZE1

// bubble sort is taking less time than selection sort that is o.o59sec , o.o77sec respectively
main( )
{
// int arr[SIZE]={1,2,3,4,5,6,7,8,9,10};
int arr[SIZE]={1,2,3,6,8,11,14,16,18,19};
int arr1[SIZE1]={4,7,9,12,15,17,21,23,34,36, 37, 38, 39, 41};
int arr2[SIZE2];

int low,up,mid,i,j,k,item;
for(i=0; i<=SIZE-1; i++)
{
	printf("%d  ", arr[i]);
}
printf("\n");

for(i=0; i<=SIZE1-1; i++)
{
	printf("%d  ", arr1[i]);
}
i=0;
j=0;
k=0;
while(i<SIZE && j<SIZE1 && k<SIZE2)
{
	if(arr[i] < arr1[j])
	{
		arr2[k]=arr[i];
		i++;
	}
	else
	{
		arr2[k]=arr1[j];
		j++;
	}
	k++;
}
printf("\n1:i=%d, j=%d, k=%d\n", i, j, k);

while(i<SIZE && k<SIZE2)
{
	printf("in while of i\n");
	arr2[k]=arr[i];
	i++;
	k++;
}
for(i=0; i<SIZE2; i++)
{
	printf("%d  ", arr2[i]);
}
while(j<SIZE1 && k<SIZE2)
{
	printf("in while of J=%d, k=%d, arr2=%d, arr1=%d\n", j,k,  arr2[k], arr1[j] );
	arr2[k]=arr1[j];
	j++;
	k++;
}


printf("\n2:i=%d, j=%d, k=%d\n", i, j, k);
for(i=0; i<SIZE2; i++)
{
	printf("%d  ", arr2[i]);
}
printf("\n size of arr=%d, arr1=%d, arr2=%d\n", sizeof(arr), sizeof(arr1), sizeof(arr2));
printf("\n size of arr=%d, arr1=%d, arr2=%d\n", sizeof(arr)/sizeof(arr[1]), sizeof(arr1)/sizeof(arr1[1]), sizeof(arr2)/sizeof(arr2[1]) );
 // size of arr=40, arr1=56, arr2=96
 // size of arr=10, arr1=14, arr2=24
}
