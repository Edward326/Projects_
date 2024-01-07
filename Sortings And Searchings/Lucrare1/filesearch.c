#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"filesearch.h"



int cmp(const void *a,const void *b)
{
  const element *client1=(const element *)a;
   const element *client2=(const element *)b;
   
   return strncmp(client1->value,client2->value,1);
}


int linearsearch(element *array,int size,char *obj_tofind){
  int count=0;
  if(size==0){return 0;}
  
  while(count<size-1 && strncmp(obj_tofind,array[count].value,strlen(array[count].value))!=0)
    count++;
  
  if(strncmp(obj_tofind,array[count].value,strlen(array[count].value))==0)
    return count;
  
   return 0;
}


int binsearch(element *array,int size,char *obj_tofind){
  int right=size-1,left=0,mij;
  int count=0,cmp;
  //qsort(array,size,sizeof(element),cmp);
  while(left<right){
    mij=(right+left)/2;
    count++;
    cmp=strncmp(obj_tofind,array[mij].value);
    if(cmp==0){
      return count;
    }else{
      if(cmp>0)
	left=mij+1;
      else
	right=mij-1;
	}
  }
 return 0;
}
