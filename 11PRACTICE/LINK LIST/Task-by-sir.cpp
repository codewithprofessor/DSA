#include<iostream>
using namespace std;

struct node
{
	int value;
	node* next;
	node* prev;
};

void input(node* target, node* p, node* n)
{
	cin >> target->value;
	target->prev = p;
	target->next = n;

}

void display(node* target)
{
	node* temp = target;
	while (temp->next != NULL)
	{
		cout << temp->value << endl;
		temp = temp->next;

	}
	cout << temp->value << endl;
}

void insertbyvalue(node* target, int num)
{
	bool cn = false;
	node* temp = target;
	int i = 1;
	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}
	temp = target;
	for (int j = 1; j <= i; j++)
	{
		if (temp->value == num)
		{
			node* newnode = new node;
			cout << "Enter value for the new node: ";
			cin >> newnode->value;
			newnode->prev = temp;

			if (temp->next == NULL)
			{
				newnode->next = NULL;
			}
			else
			{
				temp->next->prev = newnode;
				newnode->next = temp->next;
			}
			temp->next = newnode;
			break;
			cn = true;
		}
		else
			temp = temp->next;
	
	}

	if (cn == false)
		cout << "Value not found" << endl;
}

void insertbynode(node* target, int pos)
{
	node* temp = target;
	int i = 1;
	node* newnode = new node;
	cout << "Enter value for the new node: ";
	cin >> newnode->value;
	
	if (i == pos)
	{
		newnode->next = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
	}
	
	else
	{
		newnode->prev = temp;
		while (i < pos)
		{
			temp = temp->next;
			i++;
		}
		if (temp->next == NULL)
		{
			newnode->next = NULL;
		}
		else
		{
			temp->next->prev = newnode;
			newnode->next = temp->next;
		}
	}
	temp->next = newnode;
}

int main()
{
	node* *head;
	node* one = (struct node *)malloc(sizeof(struct node));
	node* two = new node();
	node* three = new node();
	node* four = new node();

	head = &one;
	input(one, NULL, two);
	input(two, one, three);
	input(three, two, four);
	input(four, three, NULL);

	cout << "Entered Nodes:" << endl;
	display(*head);
	cout << endl;
	int number;
	cout << "Insert a node after value: ";
	cin >> number;
	insertbyvalue(one, number);
	cout << "\n\nAfter inserting:" << endl;
	display(*head);

	int pos;
	cout << "Insert a new node at position: ";
	cin >> pos;
	insertbynode(*head, pos);
	cout << "\n\nAfter inserting:" << endl;
	display(*head);

}