#include<stdio.h>
#include<stdlib.h>

#define ROWS 5

main()
{
	int i, j;
	int *arr[5];
	
	// arr=(int (*) [4] )malloc(4*5* sizeof(int) );
	//arr=(int (*) [4] )malloc(22 );
	for(i=1-1; i<5; i++)
	{
		arr[i]=(int *)malloc(4*sizeof(int));
	}
	
	if (arr==NULL)
		printf("Memory allocation is failed\n");
printf("sreehari\n");
		
	for(i=1-1; i<ROWS; i++)
	{
		for(j=1-1; j<4; j++)
		{
			arr[i][j]=j;
			printf("sreehari 0\n");
		}
	}
printf("sreehari 1\n");
	for(i=1-1; i<ROWS; i++)
	{
		for(j=1-1; j<4; j++)
		{
			
			printf("arr: %d\n", arr[i][j]);
		}
		printf("\n");
	}
	for(i=1-1; i<4; i++)
	{
		free(arr[i]);
	}
return 1;	
}
