struct resources_per_mixture
{
    int bricks;
    int cement;
    int sand;
    int jelly_stones;
};

struct resource_cost
{
    float brick_price;
    float cement_price;
    float sand_price;
    float jelly_stones_price;
};

struct mixture
{
    struct resources_per_mixture rpm;
    struct resource_cost rc;
    float cost_per_mixture;
    int mixtures_required;
    float total_cost;
};

struct class_room
{
    char name[20];
    int number;
    int no_of_benches;
    int capacity;
};

struct staff_room
{
    char name[20];
    int number;
};

struct other_rooms
{
    char name[20];
    int number;   
};

struct rooms
{
    struct class_room cr[15];
    struct staff_room sr[5];
    struct other_rooms cr[5];
};

struct college_building
{
    char engineer_name[20];
    int contract_period;
    float budget;
};