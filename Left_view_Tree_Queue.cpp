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
void leftViewUtil(struct BinaryTree* PtrHead, queue<BinaryTree*> &q)
{
	if(!PtrHead)
		return;
	q.push(PtrHead);
	q.push(NULL);
	while(!q.empty())
	{
		BinaryTree* temp = q.front();
		if(temp)
		{
			cout<<temp->data<<" ";
			while(q.front())
			{
				if(temp->left)
					q.push(temp->left);
				if(temp->right)
					q.push(temp->right);
				q.pop();
				temp=q.front();
			}
			q.push(NULL);
		}
		q.pop();
	}
}
void leftView(struct BinaryTree* PtrHead)
{
	queue<BinaryTree*> q;
	leftViewUtil(PtrHead,q);
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

