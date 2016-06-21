#include <stdio.h>
#include <stdlib.h>

struct browser
{
  char name[20];
  char owner[20];
  float version;
  char add_ons[3][20];
};

struct browser b[3];

/*
Static Initialization
struct browser b[3] = {
         {"firefox", "Mozilla", 43.0, {"Reader", "startHQ", "Greasemonkey"} },
         {"chrome", "Google", 47.0, {"Honey", "Room", "WhatFont"} },
         {"opera", "Opera", 34.0, {“Guru", "Translate", "Buffer"} }
};

*/
int main()
{
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("Enter the Browser name, owner, version, and 3 add ons available\n");
        scanf("%s", b[i].name);
        scanf("%s", b[i].owner);
        scanf("%f", &b[i].version);
        scanf("%s", b[i].add_ons[0]);
        scanf("%s", b[i].add_ons[1]);
        scanf("%s", b[i].add_ons[2]);
    }

    printf("The entered data is .. \n");
    for(i = 0; i < 3; i++)
    {
        printf("Browser Name: %s\n", b[i].name);
        printf("Owner : %s\n", b[i].owner);
        printf("Version : %f\n", b[i].version);
        printf("Addons : %s\t%s\t%s\n\n", b[i].add_ons[0], b[i].add_ons[1], b[i].add_ons[2]);
    }

    return 0;
}
