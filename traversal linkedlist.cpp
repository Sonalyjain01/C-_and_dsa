#include<iostream>
using namespace std;
struct Node{
	int data;
	struct node* next;
};
void linkedlistTraversal(struct Node *ptr)
{
	while(ptr!=Null)
	{
		cout<<"\nelement:"<<ptr->data;
		ptr=ptr->next;
	}
}
int main()
{
  struct Node * head;;
  struct Node * second;
  struct Node * third;
  //allocated memory for nodes in the linked list in heap
  head=(struct Node *)melloc(sizeof(struct Node));
  second=(struct Node *)melloc(sizeof(struct Node));
  third=(struct Node *)melloc(sizeof(struct Node));
  //link first and second nodes
  head->data=7;
  head->next=second;
  //link second and third nodes
  second->data=11;
  second->next=third; 
  //list at third nodes
  third->node=66;
  third->next=Null;
  return 0;
}


