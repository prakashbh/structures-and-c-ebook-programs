#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void get_input();
void compute();

struct date
{
    int dd;
    int mm;
    int yy;
};

struct shopee
{
  char good_name[20];
  float cost_price;
  float selling_price;
  //struct date expiry_date;

} s[11];

int main()
{
    printf("Enter the input\n");
    get_input();
    compute();
    return 0;
}

void get_input()
{
    int  i = 0;

    printf("Enter the following details for 10 items..\n");
    printf("Goodname\tCost price\tSelling price\n");
    for(i = 1; i <= 10; i++)
    {
        printf("Data %d\n", i);
        scanf("%s%f%f", s[i].good_name, &s[i].cost_price, &s[i].selling_price);
    }

}

void compute()
{
    int i = 0;
    float business = 0;

    for(i = 1; i <= 10; i++) {
        business =  business + (s[i].selling_price - s[i].cost_price);
        if(business < 0)
            printf("Good %s got a loss of %f\n\n", s[i].good_name, business);
        else
            printf("Good %s got a profit of %f\n\n", s[i].good_name, business);

        business = 0;
    }


}

