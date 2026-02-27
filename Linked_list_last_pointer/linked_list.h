#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct LinkedList LinkedList;


LinkedList* linked_list_create();
void list_destroy(LinkedList* list);

void list_insert_last(LinkedList*, Element element);


#endif