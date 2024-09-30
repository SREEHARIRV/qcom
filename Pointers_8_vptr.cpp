#include<stdio.h>
main()
{
int a=3;
float b=3.4,*fp=&b;
void *vp;
double db=18;
vp=&a;
printf("Value of a = %d\n",*(int *)vp);
* ( int * ) vp=12 ;
printf("Value of a = %d\n",*(int *)vp);
vp=fp;
printf("Value of b %f\n",*(float *)vp);
vp=&db;
printf("Value of db %f\n",*(double *)vp);

float ar[4]={1.2,2.5,3.6,4.6};
void *vdptr;

vdptr=ar;
*(float *)vdptr=1.5;
*((float *)vdptr+1)=5.5;
for(a=1-1; a<4; a++)
{
	//printf("voidptr array value: %f\n", *((float *)vdptr+a) ); // working
	printf("voidptr array value: %f\n", *(float *)vdptr);
	vdptr=(float *)vdptr+1;
}
// (float *)vdptr= (float *)vdptr+1 /*Can't write vp=vp+l*/
}
