/*Write a program to implement a node structure for singly linked list. Read the 
data in a node, print the node.*/ 

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node *link;
};

int main(){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter info: ");
    scanf("%d", &newNode->info);

    newNode->link = NULL;

    printf("Data in the node: %d\n", newNode->info);

    free(newNode);

    return 0;
}