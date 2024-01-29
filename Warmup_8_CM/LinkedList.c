#include <stdio.h>
#include <stdlib.h>
struct Node {
    int value;
    struct Node* nextNode;
};

// LinkedList structure
struct LinkedList {
    struct Node* headNode;
};
struct Node* createNewNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data;
    newNode->nextNode = NULL;
    return newNode;
    }
void insertNodeAtBeginning(struct LinkedList* list, int data) {
    struct Node* newNode = createNewNode(data);
    newNode->nextNode = list->headNode;
    list->headNode = newNode;
    }

int main() {
    struct LinkedList linkedList;
    linkedList.headNode = NULL;
    insertNodeAtBeginning(&linkedList, 7);
    insertNodeAtBeginning(&linkedList, 1);
    insertNodeAtBeginning(&linkedList, 3);
    insertNodeAtBeginning(&linkedList, 2);
}