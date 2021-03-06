const MAXNAMELEN = 255;
const MAXSTATELEN = 2;
const MAXCODELEN = 3;

typedef string placename<MAXNAMELEN>;
typedef string statename<MAXSTATELEN>;
typedef string codename<MAXCODELEN>;
typedef struct placestruct *placeslist;

struct placestruct {
      codename code;
      placename place;
      statename state;
      double longitude;
      double latitude;
      double distance;
      placeslist next;
};

struct location {
      placename city;
      statename state;
      placename host;
};

union places_list switch (int errno) {
      case 0:
      	   placeslist list;
      default:
	   void;
};

program PLACEPROG {
	version PLACEVERS {
		places_list
		PLACES(struct location) = 1;
	} = 1;
} = 0x2000001D;
