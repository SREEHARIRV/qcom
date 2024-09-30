#include <stdio.h>
#include <stdlib.h>
/*
func (int x, int *y)
{
int temp;
temp=x;
x=*y;
*y=temp;
}* /
int *ptr;
func ( )
{
int num=10;
ptr=&num;
}
* /

func (int x, int y)
{
	int temp;
temp=*(&x) ,*(&x)=*(&y) ,*(&y)=temp;
printf("\nx=%d, y=%d\n", x, y);
}

void func1 (int *ptr)
{
	ptr++;
}
void func2 (int **pptr )
{
	(*pptr)++;
}
* /
func(int a[10])
{
int b[10];
int x=5,y=4, i;
a=&x;
printf("start \n");
for (i=0; i<10; i++)
{
	a[i]=i+10;
}

for (i=0; i<10; i++)
{
	printf("%d ", a[i]);
}
printf("\nEnd\n");
// b=&y;
}
* /
func(int a[ ])
{
int i;
for(i=0;a[i] !=8;i++)
	printf("%d ",a[i]);
}
*/
int *func1 (void) ;
int *func2 (void) ;

int *func1 (void)
{
int a=8, *p=&a;
return p;
}

int * func2 (void)
{

int *p;
p=(int *)malloc(sizeof(int));
*p=9;

return p;
}

main ( )
{
	/*
int a=5, *ptr;
ptr=&a;
printf("Input a number ");
scanf("%d",ptr); / * Suppose the input number is 16 * /
printf ("%d %d\n", a, *ptr) ; // 16 16

int *ptr1;

printf ("Enter a number1111 :");
// scanf("%d",ptr1) ; // 22

//printf("print *ptr1: %d\n",*ptr1) ; // printing nothing


int arr[5],i;
for(i=0;i<5;i++)
printf("%u ", arr+i); / *Suppose base address of arr is 5000* /

printf("\nEnter 5 numbers\n");
//for(i=0;i<5;i++)
// scanf("%d",arr+i);

for(i=0;i<5;i++)
printf("%d ",*(arr+i));
*/
/*

int i,arr[5]={25,30,35,40,45},*p;
p=&arr [4] ;
for(i=0;i<5;i++)
printf ("%d\t%d\t", * (p-i) ,p [-i]);// 45      45      40      40      35      35      30      30      25      25

*/
/*
int i,arr[5]={25,30,35,40,55},*p;
for(i=0;i<5;i++)
{
printf("%d ",*arr);
arr++; // it is not valid for arr
}*/
/*
int i,arr[5]={25,30,35,40,45},*p=arr;
for(i=0;i<5;i++)
{
(*p)++;
printf("%d ",*p);
p++;
}*/
/*
int i,arr[5]={25,40,55,70,85},*p=arr;

for(i=0;i<5;i++)
printf("%d ",*p++);
printf("\n");

for(i=0;i<5;i++)
printf("%d ",*--p);
printf (" \n") ;
*/
/*
int i,arr[5]={25,40,55,70,85},*p=arr;

for(i=0;i<8;i++)
printf("%d ",++*p);
printf("\n");

for(i=0;i<7;i++)
printf("%d ", (*p)++);
printf("\n");
* /
int arr[10]={25,30,35,40,55,60,65,70,85,90},*p;
for(p=&arr[0] ;p<arr+10;p++)
printf("%d ",*p);

printf("\n");
for(p=arr+2 ;p<arr+8;p=p+2)
printf("%d ",*p);
* /

int arr[4]={10,20,30,40}; // *Assume base address of arr is 5000* /
int x=100,*ptr=arr;
printf("%u  %d %d\n",ptr,*ptr,x); //10, 100 
x=*ptr++; // 10
printf("%u  %d %d\n",ptr,*ptr,x); // 20, 10
x=*++ptr; // 30
printf ("%u  %d %d\n", ptr, *ptr, x) ; // 30 30
x=++*ptr; // 31
printf ("%u  %d %d\n" ,ptr, *ptr,x);//  31 31
x=(*ptr)++; // 31
printf("%u  %d %d\n",ptr,*ptr,x); // 32 31
* /
int x, arr[8]={11, 22, 33, 44, 55, 66, 77, 88};
x = (arr+2)[3]; // *[[arr+2]+3], *[arr+2+3], *[arr+5] 
printf ("%d\n", x); // 66 
* /

int arr[8]={11,22,33,44,55,66,77,88};
int *p, *q;
q=arr/2; // Error: invalid operands of types 'int [8]' and 'int' to binary 'operator/'
p=q*2;
printf (" %d %d", *p, *q) ;
* /
int arr [6] = {1, 2,3,4,5,6} ;
int *p=arr;
printf ("Size of p =' %u, Size of arr %u %d  %d\n",sizeof(p) ,sizeof(arr), sizeof(*p) , sizeof(*arr));  // 8 24 4 4

* /
float a=5,*p,**pp;
p=&a; // *Assume address of a is 5000* /
pp=&p; // *Assume address of p is 5520* /
printf ("a %f, p= %u, pp %u\n",a,p,pp) ;
a=a+1; // 6
p=p+1; // Address increases
pp=pp+1; // 
printf ("a %f, p= %u, pp %u\n", a, p, pp);
* /
#include <stdio.h>
int a=5,b=10;
int change1 (int *p);
int change2 (int **p);
void main( )
{
int x=20,*ptr=&x;
printf("%d ",*ptr); //20 
change1(ptr) ; 
printf("%d ",*ptr); // 20
change2 (&ptr) ;
printf("%d\n",*ptr) ; // 10
}

int change1 (int *p)
{
p=&a;
printf("%d ",*p); // 5
}
int change2(int **pp)
{
*pp=&b;
}
// 20 5 20 10

* /

int a=2,b=6;
func(a,&b) ;
printf ("a %d, b %d\n", a, b) ;
* /

func ( ) ;
printf("%d\n",*ptr); // The corrected code will still have an issue because num is a local variable in func(), 
//and its memory will be deallocated once func() returns. Accessing *ptr in main() will lead to undefined behavior 
// because ptr points to a memory location that is no longer valid. To fix this, you can allocate memory dynamically(heap) or use a static/global variable.

* /
int a=5,b=8;
func (a, b) ;
printf ("a %d b %d\n", a, b) ;

* /
int arr[5] = {1, 2,3,4,5};
// int *p=&arr; // Can not convert int*[5] to int* in initialization
int *p=arr;
printf("p %u,\t",p); //  
printf("p %u,\t",*p);
func1(p);
printf("p %u,\t",p); // same address as above
printf("p %u,\t",*p);
func2 (&p);
printf("p %u\t",p); // +1 adds
printf("p %u\n",*p);
// p 6487552,      p 1,    p 6487552,      p 1,    p 6487556       p 2
* /

int arr[10], i;
//func(arr) ;
for (i=0; i<10; i++)
{
	arr[i]=i;
	printf("%d ", arr[i]);
}
printf("\n");
func(arr) ;
for (i=0; i<10; i++)
{
	//arr[i]=i;
	printf("%d ", arr[i]);
}
* /
int arr[3] [4]; // * Assume base address of arr is 5000* /
printf("%u\t",arr) ; // 
printf("%u\t",arr[0]) ; // *(arr+0) same as above
printf("%u\n" ,&arr[0][0]); // same as above
printf("%d\t",sizeof(arr) );// 12  12*4 48
printf("%d\t",sizeof(arr[0])); // 4  16
printf ("%d\n", sizeof (arr[0][0])); // 1 4
// 6487536 6487536 6487536
// 48      16      4
* /
int arr[10]={1,2,3,4,5,6,7,8,9,19};
func(arr+3);
* /


int i,arr[3][4]={{10,11,12,13}, {20,21,22,23}, {30,31,32,33}};
int *pa [ 3 ] ;
int (*p)[4];

p=arr;
for(i=0;i<3;i++)
	pa[i]= arr[i];
	
printf("%d %d %d\n",pa[0][0],pa[0][1],pa[2][3]);
printf("%d %d %d\n",p[0][0],p[0][1],p[0][3]);
p=p+1;
printf("%d %d %d\n",p[0][0],p[0][1],p[0][3]);
// 10 11 33
// 10 11 13
// 20 21 23

* /
int *ptr1, *ptr2;
ptr1=func1 ( ) ;
ptr2=func2 ( ) ;
printf("%d %d\n",*ptr1,*ptr2);

*/
int i , arr[3][4]= { {11 , 11 ,12 , 13 }, { 20 , 21 , 22 , 23 }, {30 , 31 , 32 , 33 } } ;
int *p=arr; // can not convert int(*)[4] to int* in initialization
// int *p=arr[0];
for(i=0;i<12;i++)
	printf("%d ",p[i]);

printf ("\n ");

}

