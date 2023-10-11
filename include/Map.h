// MAP.h

#ifndef _MAP_H_
#define _MAP_H_
#include "KeyValuePair.h"


typedef struct{
    KeyValuePair* pairs;
    int size;
    int capacity;
} Map;


#endif  /*_MAP_H_*/