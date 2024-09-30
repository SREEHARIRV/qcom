#include<stdio.h>
void number(int);
void square(int);
void cube(int);

int main()
{
    //array of pointers to function in C
    //void is the return type of all functions
    //arrOfPtrFunc[] denotes array of pointers to functions which take argument of type 'int'
   
    void (*arrOfPtrToFunc[])(int )={number, square, cube};
    
    //calling the functions
    printf("Functions are being called using pointers to functions\n");
    int size= sizeof(arrOfPtrToFunc)/sizeof(arrOfPtrToFunc[0]);//determining size of array
    printf("Enter any number\n");
    
    int number;
    //scanf("%d", &number);
    for(int i=0;i<size;i++)
	{
        arrOfPtrToFunc[i](i);
    }
}
void number(int a)
{
    printf("Function1: The number is %d\n", a);
}
void square(int a)
{
    printf("Function2: Square of number is %d\n", a*a);
}
void cube(int a)
{
    printf("Function3: Cube of number is %d", a*a*a);
}

