#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
Node* head;
void inserAtBeg()
{
	cout << "Enter the Number \n";
	int x;
	cin >> x;
	Node* temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;
}
void print()
{
	Node* temp = head;
	cout << "List is: ";
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}
void insertAtPosition()
{
	int pos, x;
	cout << "Enter postion:\n";
	cin >> pos;
	cout << "Enter the Value:\n";
	cin >> x;
	Node* temp = new Node();
	temp->data = x;
	temp->next = NULL;
	if (pos == 1)
	{
		temp->next = head;
		head = temp;
		return;
	}
	Node *temp1 = head;
	for (int i = 0; i < pos - 2; i++)
	{
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;
}
void deleteAt()
{
	int pos;
	cout << "Enter postion:\n";
	cin >> pos;
	Node* temp = head;
	if (pos == 1)
	{
		head = temp->next;
		free(temp);
		return;
	}
	for (int i = 0; i < pos - 2; i++)
	{
		temp = temp->next;
	}
	Node* temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
}
void insertAtEnd()
{
	cout<<"Enter a number to Insert at End\n";
	int x;
	cin>>x;
	Node* end=new Node();
	end->data=x;
	end->next=NULL;
	Node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=end;
}
int main()
{
	head = NULL;
	while (true)
	{
		cout << "Enter 1 to Insert at Beg:\n";
		cout << "Enter 2 to Insert at position n:\n";
		cout << "Enter 3 Print Elements of List:\n";
		cout << "Enter 4 to delete Element at postition n:\n";
		cout << "Enter 5 to Insert at end n:\n";
		int value;
		cin >> value;
		switch (value)
		{
		case 1:
			inserAtBeg();
			break;
		case 2:
			insertAtPosition();
			break;
		case 3:
			print();
			break;
		case 4:
			deleteAt();
			break;
		case 5:
			insertAtEnd();

		}
		if (!(value > 0 && value <= 5))
		{
			cout << "Entered Wrong Option";
			break;
		}

	}

}
