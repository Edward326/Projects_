#ifndef LISTS
#define LISTS
#include"structure.h"

void new_elemS(elemS **nod,int nr);
void viewsimple(simple_list *lista);
void viewsimplesorted(simple_list *lista);
void addsimple(simple_list **lista,int number);//adauga elem,aici se da din main cu &simple_list pt ca fct daca lista e goala va aloca memorie lui simple_list si adauga si primul nod in lista,daca lista e initializata inseamna ca avem elemente in lista deci nodul curent se adauga la capat
//void add_sortedsimple(simple_list **lista,int nr);//adauga el in ordine sortata
void free_upsimple(simple_list *lista);//goleste lista de noduri dar nu elbereaza memoria si in lista,la final vom realoca simple_list->first/simple_list->last==NULL si putem adauga din nou el de la 0
void free_totallysimple(simple_list **lista);//goleste lista de noduri si elibereaza memoria din lista
//int verifypalind(simple_list *lista);
#endif
