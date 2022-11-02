#include<iostream>
using namespace std;
class Node
{
	public:
		int no;
		Node *next;
		
		Node()
		{
			no=0;
			next=NULL;	
		}
		Node(int n)
		{
			no=n;
			next=NULL;	
		}	
};
class Stack
{
	public:
		Node *tos;
		
		Stack()
		{
			tos=NULL;	
		}
		void push(int i)
		{
			Node *temp = new Node(i);
			if(tos==NULL)
			{
				tos=temp;
			}
			else
			{
				temp->next=tos;
				tos=temp;
			}
		}
		void pop()
		{
			if(tos==NULL)
			{
				cout<<endl<<"Stack is EMPTY...!";
			}
			else
			{
				Node *temp=tos;
				tos=tos->next;
				cout<<endl<<temp->no<<" is POPED";
				delete temp;
			}
		}
		void printStack()
		{
			if(tos==NULL)
			{
				cout<<endl<<"Stack is EMPTY";
			}
			else
			{
				Node *ptr = tos;
				while(ptr!=NULL)
				{
					cout<<ptr->no<<" <- ";
					ptr=ptr->next;
				}
			}
		}
};

int main()
{
	Stack s;
	
	int choice,value,i;
	
do{
	cout<<endl<<"1.Push";
	cout<<endl<<"2.Pop";
	cout<<endl<<"3.Print";
	cout<<endl<<"4.Exit";
	cout<<endl;
	cout<<endl<<"Enter Choice";
	cin>>choice;
	switch(choice)
   	{
		case 1:
			cout<<endl<<"Enter Value : ";
			cin>>i;
		    s.push(i);
		break;	
		case 2:
			s.pop();
		break;
		case 3:
			s.printStack();
		break;
		case 4:
			cout<<endl<<"Thanks for using my Stack Program..!";		
		break;
		default:
			cout<<endl<<"Choice unavailable";	
	}
}while(choice!=4);
	return 0;
}
