const MAXWORDLEN = 255;
const MAXCODLEN = 3;

typedef string word<MAXWORDLEN>;
typedef string cod<MAXCODLEN>;
typedef struct airportstruct *airportlist;

struct airportstruct {
       word name;
       cod code;
       double distance;
       airportlist next;
};

struct position{
       double latitude;
       double longitude;
};

union airport_list switch (int errno) {
case 0:
     airportlist list;
default:
     void;
};

program AIRPORTPROG {
        version AIRPORTVERS {
                airport_list
                AIRPORTS(struct position) = 1;
        } = 1;
} = 0x20000123;
