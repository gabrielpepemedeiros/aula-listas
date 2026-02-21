#include "linked_list.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct Node {
    Element element;
    struct Node* next;
} Node;

struct LinkedList {
    Node* head;
    size_t size;
};

LinkedList* list_create() {
    LinkedList* list = malloc(sizeof(LinkedList));

    list->head = NULL;
    list->size = 0;

    return list;
}

void list_destroy(LinkedList* list) {
    Node* trash = list->head;

    while (trash != NULL) {
        list->head = trash->next;

        free(trash);
        trash = list->head;
    }
    free(list);
}

void list_insert_first(LinkedList* list, Element element) {
    Node* new_node = malloc(sizeof(Node));

    new_node->element = element;
    new_node->next = list->head;
    list->head = new_node;
    list->size++;
}

void list_print(LinkedList* list) {
    Node* cur = list->head;

    while (cur != NULL) {
        element_print(&cur->element);
        if (cur->next != NULL) {
            printf(" -> ");
        }
        cur = cur->next;
    }
    printf("\n");
}

// continue on next class...