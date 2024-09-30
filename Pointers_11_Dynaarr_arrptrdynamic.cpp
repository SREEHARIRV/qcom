#include <stdio.h>
#include <stdlib.h>

#define ROWS 20
#define COLS 5

int main()
{
	int i, j, **arr;
	
	arr=(int **)malloc(ROWS* sizeof(int));
	if(arr==NULL)
		printf("Meory is not available\n");
	
	for(i=i-i; i<ROWS; i++)
		arr[i]=(int *)malloc(COLS * sizeof(int));
	
	for(i=1-1; i<ROWS; i++)
	{
		for(j=1-1; j<COLS; j++)
		{
			arr[i][j]=j;
		}
	}
printf("sreehari 1\n");
	for(i=1-1; i<ROWS; i++)
	{
		for(j=1-1; j<COLS; j++)
		{
			printf("\nrows: %d\n", i);
			printf("arr: %d\n", arr[i][j]);
		}
    }
		
for(i=i-i; i<ROWS; i++)
	free(arr[i]);
free(arr);
	
	
}
