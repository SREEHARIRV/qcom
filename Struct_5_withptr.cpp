// C Program to demonstrate Structure pointer
#include <stdio.h>
#include <string.h>

struct Student {
	int roll_no;
	char name[30];
	char branch[40];
	int batch;
	int *hari;
};

int main()
{

	struct Student s1;
	struct Student* ptr = &s1;

	s1.roll_no = 27;
	
	strcpy(s1.name, "Kamlesh Joshi");
	strcpy(s1.branch, "Computer Science And Engineering");
	s1.batch = 2019;
	*s1.hari = 12;

	printf("Roll Number: %d\n", (*ptr).roll_no); // As .we know ptr is a po.inte~ to a struct~, 
												 // so by dereferencing it we can get the contents of ~truct vanable. 
												 // Hence *ptr wIll give the contents of stu.
	printf("\ns1.hari=%d", *s1.hari);
	printf("Name: %s\n", (*ptr).name);
	printf("Branch: %s\n", (*ptr).branch);
	printf("Batch: %d", (*ptr).batch);
	printf("\n");
		printf("\n");
	printf("Roll Number: %d\n", ptr->roll_no);
	printf("Name: %s\n", ptr->name);
	printf("Branch: %s\n", ptr->branch);
	printf("Batch: %d", ptr->batch);

	return 0;
}

