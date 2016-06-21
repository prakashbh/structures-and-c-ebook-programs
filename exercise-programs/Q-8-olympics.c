struct event
{
    char name[20];
    int duration;
    int age_limit;
    float weight_limit;
    float height_limit;
};

struct olympic_park
{
    char city[20];
    char country[20];
    int no_of_stadiums;
    int total_capcity;
};

struct voulnteer
{
    char name[20];
    char country[20];
    char designation[20];
    int id;
};
 
struct date
{
    int dd;
    int mm;
    int yy;
};

struct time
{
    int hh;
    int mm;
    int ss;
};

struct opening_ceremony
{
    struct date d;
    struct time t;
    char venue[20];
    int no_of_audience;
};

struct biodata
{
    char name[20];
    char state[20];
    float height;
    float weight;
    int age;
};

struct participant
{
    struct biodata bd;
    char sport[20];
    int medals_won;
};
 
struct olympics_india
{
    struct participant p[10];
    struct voulnteer v[4];
};
