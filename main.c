#include "externs.h"
int main(void)
{
	char input[256];
	scanf("%s",input);
	struct node *root = NULL;
	insert(root,input);
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		scanf("%s",input);
		insert(root,input);
	}
	printTree(root);
}
