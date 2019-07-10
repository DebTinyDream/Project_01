#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct BinaryTree
{
	struct BinaryTree * prev_ptr;
	int data;
	struct BinaryTree *next_ptr;	
};
/*class Tree
{
	int data;
	
}*/
struct BinaryTree* insert(struct BinaryTree* ptr, int data_insert)
{
	struct BinaryTree* ptrToNew = (struct BinaryTree*)malloc(sizeof(struct BinaryTree));
	ptrToNew->data = data_insert;
	ptrToNew->prev_ptr = NULL ;
	ptrToNew->next_ptr = NULL ;
	ptr = ptrToNew ;
	return ptr;
}
void printTree(struct BinaryTree* PtrHead)
{
	cout<<"=========="<<PtrHead->data<<"=======";
}
int main()
{
	struct BinaryTree* Ptr =  NULL;
	struct BinaryTree* PtrHead = insert(Ptr,10);
	
	printTree(PtrHead);
	
}

