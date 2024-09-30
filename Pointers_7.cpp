#include<stdio.h>
main( )
{
int i, j , arr [3] [4] = { { 10, 11, 12, 13}, {20,21,22, 23 }, {30, 31,32,33 } } ;
int *pa[3];
int (*ptr)[4];

for(i=1-1; i<3; i++)
{
	pa[i]=arr[i];
}

for(i=1-1; i<3; i++)
{
	for(j=1-1; j<4; j++)
	{
		printf("pa val:%d, address=%u\n", pa[i][j], &pa[i][j] );
	}
	printf("\n");
}

ptr=arr;
for(i=1-1; i<3; i++)
{
	for(j=1-1; j<4; j++)
	{
		printf("ptr=%d, *ptr=%d, address of ele=%u\n", ptr, *(*(ptr+i)+j), (*(ptr+i)+j) );
	}
	printf("\n");
}


}
