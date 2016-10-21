#include<iostream>

using namespace std;

struct Node
{
	int data;
    Node * nxtNode;
}* top;

class Stack
{
	private:struct Node * temp;

public: void display()
 {
 	// checking if stack is not empty
 	if(top==NULL)
 	{
 		cout<<"\n Stack is empty";
 	}
 	else
 	{
 		temp= new Node();
 		temp=top;
 		cout<<endl;
 		while(temp->nxtNode != NULL)
 		{
 			cout<<" "<<temp->data<<" ";
 			// assigning now temp the address of next node
 			temp=temp->nxtNode;
 		}
 		// when temp = null so first elemnt that was inserted is visible now
 		cout<<" "<<temp->data<<" ";
 	}

 }
 public: void pop()
 {
 	// to cif stack is empty or not
 	if(top==NULL)
 	{
 		cout<<"\nStack is empty cannot delete element";
 	}
 	else
 	{
 		temp = new Node();
 		temp=top;
        cout<<"\n element with value :"<<temp->data<<" is deleted";
 		// now next elemnet address which was referred in pointer variable nxtNode of struct is now top element of stack
 		top=top->nxtNode;
 		// now elment is deleted
 		delete temp;
 	}
 }


 public: void  push(int data)
{
	// in linked list every new element is inserted at top element this means each time element inserted is pointed to top 
    // and address of next node of top element is always null;	
	
   
   // create refrence object;
   temp = new Node();
   // value assigned to temp data which is to be inserted
   temp->data=data;
   
   // when first element is to be inserted
	if(top==NULL)
	{
	temp->nxtNode=NULL;
    }
    // when elemnet after first is to be inserted
	else
	{
	temp->nxtNode=top;
    }
     
    cout<<"\n data inserted at address:"<<temp;
    cout<<"\n value inserted at stack:"<<temp->data;
    cout<<"\n address stored in next address pointer is at :"<<temp->nxtNode;
    // than element inserted is assigned to be top element as we know in stack there is LIFO
    top=temp;
    cout<<"\n address of top element:"<<top;
    cout<<"\n address of top element next node:"<<top->nxtNode;
}
};
int main()
{
	int * a =NULL;
	cout<<"\naddress of NULL"<<a;
	top=NULL;
	Stack stack;
	stack.push(9);
	stack.push(5);
	stack.push(6);
	stack.push(10);

	stack.display();

	stack.pop();
	stack.pop();
	stack.pop();
	stack.pop();
	stack.pop();

	return 0;
}
