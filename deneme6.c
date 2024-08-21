#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void insert(struct node **head_ref, int new_data) {
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL || (*head_ref)->data >= new_data) {
        new_node->next = *head_ref;
        *head_ref = new_node;
    } else {
        struct node *current = *head_ref;

        while (current->next != NULL && current->next->data < new_data) {
            current = current->next;
        }

        new_node->next = current->next;
        current->next = new_node;
    }
}

void print_list(struct node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    struct node *head = NULL;
    int num;

    printf("Lutfen sayilari giriniz: ");
    scanf("%d", &num);

    while (num != -1) {
        insert(&head, num);
        scanf("%d", &num);
    }

    printf("Liste: ");
    print_list(head);

    return 0;
}

