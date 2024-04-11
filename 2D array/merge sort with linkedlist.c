#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* merge(struct Node* left, struct Node* right) {
    if (left == NULL) return right;
    if (right == NULL) return left;

    struct Node* mergedList = NULL;
    if (left->data <= right->data) {
        mergedList = left;
        mergedList->next = merge(left->next, right);
    } else {
        mergedList = right;
        mergedList->next = merge(left, right->next);
    }
    return mergedList;
}

struct Node* mergeSort(struct Node* head) {
    if (head == NULL || head->next == NULL) return head;

    struct Node* middle = head;
    struct Node* fast = head->next;
    while (fast != NULL && fast->next != NULL) {
        middle = middle->next;
        fast = fast->next->next;
    }

    struct Node* left = head;
    struct Node* right = middle->next;
    middle->next = NULL;

    return merge(mergeSort(left), mergeSort(right));
}

void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) *head = newNode;
    else {
        struct Node* current = *head;
        while (current->next != NULL) current = current->next;
        current->next = newNode;
    }
}

void display(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int n, data;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        insert(&head, data);
    }

    printf("Original Linked List: ");
    display(head);

    head = mergeSort(head);

    printf("Sorted Linked List: ");
    display(head);

    return 0;
}