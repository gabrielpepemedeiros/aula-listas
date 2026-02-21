#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "element.h"

typedef struct LinkedList LinkedList;

LinkedList* list_create();
void list_destroy(LinkedList* list);
void list_insert_first(LinkedList* list, Element element);
void list_print(LinkedList* list);

// continue on next class...

#endif