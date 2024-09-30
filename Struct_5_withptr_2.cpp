#include <stdio.h>
#include <string.h>

struct Student {
	char name[30];
	int *hari;
};

int main()
{

	struct Student s1, *s1ptr;
	int harivalue=10;
	//struct Student* ptr = &s1;
	s1.hari=&harivalue;
	strcpy(s1.name, "Kamlesh Joshi");
	*s1.hari=109;
	s1ptr=&s1;
	printf("\ns1.name=%s\n", s1.name);
	printf("\ns1.name=%d\n", *(s1.hari));
		printf("\ns1.name=%s\n", s1ptr->name);
		*(s1ptr->hari)=202;
	printf("\ns1.name=%d\n", *(s1ptr->hari));
	printf("\ns1.name=%d\n", *(s1.hari));
	
}

