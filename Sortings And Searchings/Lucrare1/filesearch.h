#ifndef FILESEARCH
#define FILESEARCH
#include"structure.h"
/*typedef struct{
  int id;
  char *value;
}element;*/
int linearsearch(element *array,int size,char* obj_tofind);
int binsearch(element *array,int size,char *obj_tofind);
#endif
