#include<stdio.h>
#include<stdlib.h>

typedef struct nod{
  int data;
  struct nod *left,*right;
}nod;

void newNod(nod** nod,int data){
*nod=malloc(sizeof(nod));
(*nod)->data=data;(*nod)->left=(*nod)->right=NULL;
}
nod* addRec(nod* father,nod* child){
if(father==NULL)return child;
if(father->data > child->data)
father->left=addRec(father->left,child);
else
father->right=addRec(father->right,child);
return father;
}


void addTree(nod** head,int data){
    nod *nod;
    newNod(&nod,data);
if((*head))
*head=addRec(*head,nod);
else{
    *head=malloc(sizeof(nod));
    *head=nod;
}
}
void viewtreespec(nod *tree,int data){
    if(tree){
        viewtreespec(tree->left,data+2);
        printf("%d ",tree->data);
        viewtreespec(tree->right,data+2);
    }
    else
    if(data==1){printf("\narboarele e gol\n");}
}
void viewtree(nod *tree){
    viewtreespec(tree,1);
}

void freetree(nod** tree,int data){
    if(*tree){
        if((*tree)->right==NULL && (*tree)->left==NULL && (*tree)->data==data){*tree=NULL;return;}
        freetree(&(*tree)->left,data);
        free((*tree)->left);
        freetree(&(*tree)->right,data);
        free((*tree)->right);
    }
}
void free_uptree(nod** tree){freetree(*(&tree),(*tree)->data);}

int main(){
     int array[]={6,4,9,3,5,10,8};
     nod *head=NULL;

     viewtree(head);
     for(int i=0;i<sizeof(array)/4;i++)
     addTree(&head,array[i]);
    viewtree(head);


    //free_uptree(&head);
        viewtree(head);
    return 0;
}