#include "externs.h"
struct node
{
	char data[20];
	struct node *left;
	struct node *right;
};


struct node* newNode(char* string)
{
	struct node* leaf = (struct node*) malloc (sizeof(struct node));
	strcpy(leaf->data,string);
	leaf->left = NULL;
	leaf->right = NULL;

	return(leaf);
}

void insert(struct node *leaf,char* str)
{
	if(leaf == NULL)
	{
		leaf = (struct node*) malloc(sizeof(struct node));
		printf("Malloc worked\n");
		strcpy(leaf->data,str);
		printf("copied string");
		leaf->left = NULL;
		leaf->right = NULL;
	}
	else if(strcmp(str,leaf->data) <= 0)
	{
		insert(leaf->left,str);
	}
	else if(strcmp(str,leaf->data) > 0)
	{
		insert(leaf->right,str);
	}
}

int heightOfTree(struct node* leaf)
{
	if(leaf==NULL)
		return 0;
	else
	{
		int lHeight = heightOfTree(leaf->left);
		int rHeight = heightOfTree(leaf->right);
		if(lHeight > rHeight)
			return(lHeight+1);
		else
			return(rHeight+1);
	}
}

void printTree(struct node *node)
{
	if(node == NULL) return;
	printTree(node->left);
	printf("String:%s",node->data);
	printTree(node->right);
}
