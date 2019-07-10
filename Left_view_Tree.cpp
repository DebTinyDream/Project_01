#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct BinaryTree
{
	struct BinaryTree * left;
	int data;
	struct BinaryTree *right;	
};
/*class Tree
{
	int data;
	
}*/
struct BinaryTree** insert(struct BinaryTree** ptr, int data_insert)
{
	struct BinaryTree* ptrToNew = (struct BinaryTree*)malloc(sizeof(struct BinaryTree));
	ptrToNew->data = data_insert;
	ptrToNew->left = NULL ;
	ptrToNew->right = NULL ;
	*ptr = ptrToNew ;
	return ptr;
}
void printTree(struct BinaryTree* PtrHead)
{
	while(PtrHead)
	{
		cout<<"====="<<PtrHead->data<<"====\n";
		PtrHead = PtrHead->left;
	}
}
int main()
{
	struct BinaryTree* PtrHead=  NULL;
	insert(&PtrHead,10);
	insert(&PtrHead->left,20);
	insert(&PtrHead->right,30);
	insert(&PtrHead->left->left,20);
	insert(&PtrHead->left->right,20);
	insert(&PtrHead->right->left,30);
	insert(&PtrHead->right->right,30);
	printTree(PtrHead);
	
}

