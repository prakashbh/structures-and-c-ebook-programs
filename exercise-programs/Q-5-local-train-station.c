struct time
{
    int hh;
    int mm;
    int ss;
};

struct train_details
{
    char train_name[20];
    int train_number;
    char source[20];
    char destination[20];
    struct time departure_time;
    struct time reach_time;
};