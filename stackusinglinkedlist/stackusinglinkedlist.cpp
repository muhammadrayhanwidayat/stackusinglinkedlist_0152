#include <iostream>
using namespace std;

//node class represnting a single node in the linked list
class Node
{
public:
	int data;
	Node* next;

	Node()
	{
		next = NULL;
	}
};

//stack class
class stack
{
private:
	Node* top;//pointer to the top node of the stack

public:
	stack()
	{
		top = NULL;//initialized the stack with a null top pointer
	}
	//push operation :insert an element onto top of the stack
	int push(int value)
	{

		Node* newNode = new Node();//1.allocate memory for the new node
		newNode->data = value;//2. assign value
		newNode->next = top;//3.set the next pointer of the new node to the current
		top = newNode;//4.update the top pointer to the new node
		cout << "Push value: " << value << endl;
		return value;
	}
	//pop operation :remove the topmost element from the stuck
	void pop()
	{
		if (isEmpty())
		{
			cout << "Stack is empty." << endl;
			return;
		}
	}


};

int main()
{
    
}


