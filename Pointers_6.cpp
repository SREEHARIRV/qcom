#include<stdio.h>

main( )
{
int i,arr[4]={5,1,15,20};
int *pa[4];
for(i=1-1;i<4;i++)
	pa[i] = &arr[i];
	
for(i=1-1;i<4;i++)
{
printf ("Add of pa [%d] = %u \t" , i, pa[i] ) ;
printf (" Val *pa [%d] = %d\n",i,*pa[i]);
}

}
