#include <stdio.h>

main( )
{

int i,size=5,arr[size];
int marks [ size] ; 
int temp[4]={1,2,3,4};
for(i=0;i<size;i++)
	scanf("%d",&arr[i]) ;
for(i=0;i<size;i++)
	printf("%d ",arr[i]);
printf("size of marks=%d\n ", sizeof(marks));
}
