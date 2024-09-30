// C program to pass structure as an argument to the
// functions using Call By Value Method
#include <stdio.h>

struct car {
	char name[30];
	int price;
};

void print_car_info(struct car c)
{
	printf("Name : %s", c.name);
	printf("\nPrice : %d\n", c.price);
	c.price=12;
}
void print_car_info_ptr(struct car *ptr)
{
	printf("Ptr:Name : %s", ptr->name);
	printf("\nptr: Price : %d\n", ptr->price);
	// c.price=12;
	ptr->price=29;
}

struct car print_car_info_returnstruct(struct car c)
{
	c.price=12;
	
	return c;
}

int main()
{
	struct car c = { "Tata", 1021 };
	print_car_info(c);
	printf("name: %s\n", c.name);
	printf("price:%d\n", c.price);
	print_car_info_ptr(&c);
	printf("name: %s\n", c.name);
	printf("price:%d\n", c.price);
	c=print_car_info_returnstruct(c);
	printf("\n");
	printf("name: %s\n", c.name);
	printf("price:%d\n", c.price);
	return 0;
}

