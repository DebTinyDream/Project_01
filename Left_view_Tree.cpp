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
void leftViewUtil(struct BinaryTree* PtrHead, int level, int *max_level)
{
	if(!PtrHead)
		return;
	if(*max_level < level)
	{
		cout<<PtrHead->data<<" ";
		*max_level = level;
	}
	leftViewUtil(PtrHead->left,level+1,max_level);
	leftViewUtil(PtrHead->right, level + 1, max_level);
}
void leftView(struct BinaryTree* PtrHead)
{
	int max_level=0;
	leftViewUtil(PtrHead,1,&max_level);
	/*while(PtrHead)
	{
		cout<<"====="<<PtrHead->data<<"====\n";
		PtrHead = PtrHead->left;
	}*/
	
}
int main()
{
	struct BinaryTree* PtrHead=  NULL;
	insert(&PtrHead,10);
	insert(&PtrHead->left,20);
	insert(&PtrHead->right,30);
	//insert(&PtrHead->left->left,20);
	insert(&PtrHead->left->right,40);
	//insert(&PtrHead->left->right,20);
	insert(&PtrHead->right->left,50);
	insert(&PtrHead->right->right,60);
	insert(&PtrHead->right->left->right,70);
	insert(&PtrHead->right->left->left,80);
	insert(&PtrHead->right->left->left->left,90);
	insert(&PtrHead->right->left->left->right,100);
	
	leftView(PtrHead);
	
}

