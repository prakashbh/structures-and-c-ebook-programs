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

struct stadium
{
    char name[20];
    char city[20];
    int total_seats;
};

struct match_schedule
{
    struct date d;
    struct time t;
    struct stadium st;
};
 
struct umpire
{
    char name[20];
    int age;
    char years_of_experience;
};

struct team
{
    char team_name[30];
    char coach_name[20];
    int team_id;
    int total_players;
};

struct player
{
  char name[20];
  int age;
  char city[20];
  int matches_played;
  int total_score;
};
 
struct match
{
    struct match_schedule ms;
    struct umpire u;
    struct team t;
    struct player list[13];
};
