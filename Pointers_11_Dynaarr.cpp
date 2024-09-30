#include<stdio.h>
//#include<alloc.h>

#define ROWS 5

main()
{
	int i, j;
	int (*arr)[4];
	
	// arr=(int (*) [4] )malloc(4*5* sizeof(int) );
	arr=(int (*) [4] )malloc(22 );
	
	if (arr==NULL)
		printf("Memory allocation is failed\n");
		
	for(i=1-1; i<ROWS; i++)
	{
		for(j=1-1; j<4; j++)
		{
			arr[i][j]=j;
		}
	}
	
	for(i=1-1; i<ROWS; i++)
	{
		for(j=1-1; j<4; j++)
		{
			
			printf("arr: %d\n", arr[i][j]);
		}
	}
	free(arr);	
return 1;	
}
