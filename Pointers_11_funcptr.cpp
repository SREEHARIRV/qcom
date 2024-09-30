#include<stdio.h>
float add_funptr(float (*fptr) (int a, float b))
{
float result;
	 result=(*fptr)(4, 5.9);
//return (a+b) ;
//return result;
}

float add_passingfunptr(float (*fptr) (int a, float b))
{
float result;
	 result=(*fptr)(4, 15.9);
//return (a+b) ;
//return result;
}

main( )
{

float (*fp) (int, float);
float add(int,float) ,result;
fp=add; /*Assi~n address of function add() to pointer fp*/
/* Invoking a function directly using function's name */
result=add(5,6.6) ;
printf("%f\n",result);
/* Invokirig a function indirectly by dereferencing function pointer */
result=(*fp) (5,6.6);
result=(*fp) (5,6.7);
result=(*fp) (5,6.8);
result=add_funptr(add);
printf("%f\n",result) ;
result=add_passingfunptr(fp);

printf("%f\n",result) ;

}

float add(int a, float b)
{
return (a+b) ;
}
