#include<iostream>
using namespace std;

class stack {
private:
	int top;
	int size;
	int* arr;
public:
	stack(int s) {
		size = s;
		arr = new int[size];
		top = -1;
	}
	bool Fullstatus() {
		if (top == (size - 1)) {
			cout << "Stack is full" << endl;
			return true;
		}
		else
			cout<<"Stack is not full YET"<<endl;
		    return false;
	}
	bool EmptyStatus() {
		if (top == -1)
		{
			cout << "Stack is empty" << endl;
			return true;
		}
		else
			cout<<"Stack is not empty"<<endl;
		    return false;
	}
	void push(int val) {
		if (Fullstatus()==false)
		{
			arr[++top] = val;
			
		}
		if (Fullstatus() == true)
		{
			cout << "Error: Stack Overflow" << endl;
			return;
		}
		
	}
	int pop() {
		if (EmptyStatus()==false)
		{
			int x = arr[top];
			top--;
			cout << "Number Popped: " << x << endl;
			return x;
			}
		else if (EmptyStatus() == true)
		{
			cout << "Error: Stack Underflow" << endl;
			return 0;
		}
		
	}
	int Top() {
		if (EmptyStatus()==false)
		{
			int x = arr[top];
			cout << "Top of stack is : " << x << endl;
			return x;
			
		}
		else if (EmptyStatus() == true)
		{
			cout << "Error: The stack is empty" << endl;
			return NULL;
		}
	}
	void print() {
		if (EmptyStatus() == false)
		{
			
		}
		else
				cout << "stack is empty" << endl;

	
};
int main() {
	stack s1(5);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);

	s1.Top();

	s1.print();
	s1.pop();
	s1.print();
	s1.pop();
	s1.pop();
	s1.pop();
	s1.pop();


	system("pause");
	return 0;
}