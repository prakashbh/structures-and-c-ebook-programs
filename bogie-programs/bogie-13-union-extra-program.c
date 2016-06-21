#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum type
{
    INT, FLOAT, STRING
} tag;

union sym_value
{
  int ival;
  float fval;
  char *sval;
};

int get_input(union sym_value *u)
{
    int choice = 0;
    printf("Enter\n1- initilaize int\n2-initilaize float\n3-initilaize string\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: u->ival = 20;
                tag = INT;
                break;

        case 2: u->fval = 200.0;
                tag = FLOAT;
                break;

        case 3: u->sval = "string";
                tag = STRING;
                break;

    }
    return tag;
}
int main()
{

    union sym_value u1;
    union sym_value u2;
    int result = 0;

    printf("Size of u1 Variable is... %d\n", sizeof(u1));
    u1.ival = 10;
    u1.fval = 10.0;
    u1.sval = "abc";
    printf("Integer is..%d\n", u1.ival);
    printf("Float is..%f\n", u1.fval);
    printf("String is..%s\n", u1.sval);

    u2 = u1;
    printf("String of u2 variable is..%s\n", u2.sval);

    result =  get_input(&u2);
    printf("The data initialized in Function is..\n");
    if(result == 0)
         printf("Integer: %d\n", u2.ival);
    else if(result == 1)
         printf("Float : %f\n", u2.fval);
    else
        printf("String: %s\n", u2.sval);

    return 0;
}
