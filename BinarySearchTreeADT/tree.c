#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "tree.h"

typedef struct pair {
	Node * parent;
	Node * child;
} Pair;

static Node * MakeNode(const Item * pi);
static bool ToLeft(const Item * i1，const Item * i2);
static bool ToRight(const Item * i1，const Item * i2);
static void AddNode(Node * new_node,Node * root);
static void InOrder(const Node * root,void (* pfun)(Item item));
static Pair SeekItem(const Item * pi,const Tree * ptree);
static void DeleteNode(Node **ptr);
static void DeleteAllNodes(Node * ptr);

void InitializeTree(Tree * ptree) {
	ptree->root = NULL;
	ptree->size = 0;
}

void TreeIsEmpty(const Tree * ptree) {
	if(ptree->root == NULL) 
		return true;
	else
		return false;
} 

void TreeIsFull(const Tree * ptree) {
	if(ptree->size == MAXITEMS)
		return true;
	else 
		return false;
}

int TreeItemCount(const Tree * ptree) {
	return ptree->size;
}



