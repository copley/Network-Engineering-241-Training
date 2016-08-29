#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    char data;
    struct node *next;
} Node;


Node* createlisti(char *string) {

    Node *first;
    Node *prev;

    int i = 0;    
    while (1) {
    printf("inside iter\n");
        if (string[i] == '\0') return first;

        Node *node = malloc(sizeof(Node));
        node->data = string[i];


        if (i == 0) first = node;
        else prev->next = node;

        prev = node;
        i++;
    }
    printf("breaks out here.\n");
}


Node* createlistr(char *string) {

    if (string[0] == '\0') return NULL;

    Node *node = malloc(sizeof(Node));
    node->data = string[0];
    node->next = createlistr(string+sizeof(char));

    return node;
}


void printlist(Node *node) {
    while (node != NULL) {
        printf("%c", node->data);
        node = node->next;
    }
}


void main(void) {

    printlist(createlisti("abc"));
    printlist(createlistr("def"));

}
