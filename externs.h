#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node* newNode(char* string);
void insert(struct node* leaf,char* str);
void printTree(struct node* node);
int heightOfTree(struct node* leaf);
//struct node *root = 0;
