#include<stdio.h>

struct bunk_class
{
	int sem;
	int no_of_students;
 	char reason[20];
	char punishment[20];
};

typedef struct bunk_class BC;

int main()
{
    BC day1;
    int size = 0;

    size = sizeof(day1);
    printf("Size of the structure is %d\n", size);

    return 0;
}
