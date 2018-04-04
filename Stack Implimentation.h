#include <iostream>
using namespace std;
#define STACKSIZE 4
struct stack
{
	int items[50];
	int  top;

};

void initializeStack(struct stack *);
int isStackFull(struct stack *ps);
int isStackEmpty(struct stack *ps);
void push(struct stack *, int);
int pop(struct stack *ps);
void printStack(struct stack *ps);
void copyStack (struct stack *a, struct stack *b);

int main(){
	struct stack a;
	initializeStack(&a);
	//	cout<<"\ntop value is "<<a.top;
	push(&a,5);
	cout<<"is stack full "<<isStackFull(&a);
	cout<<"\nis stack empty "<<isStackEmpty(&a);
	
	cout<<"after adding an element to the stack";
	printStack(&a);
	pop(&a);
	cout<<"\nis stack full "<<isStackFull(&a);
	cout<<"\nis stack empty "<<isStackEmpty(&a);
	
//	struct stack b;
//	initializeStack(&b);
//	cout<<"\ntop value of b is "<<b.top;


	
	
	
	
}

void initializeStack(struct stack *ps){
	ps->top=-1;
}

int isStackFull(struct stack *ps){
	if(ps->top==49){
		return 1;
	}
	return 0;
}

int isStackEmpty(struct stack *ps){
	if(ps->top==-1){
		return 1;
	}
	return 0;
}

void push(struct stack *ps, int x)
{
   if(isStackFull(ps))		
   {
     cout<<"Overflow: Stack is full\n";
     exit(1);
   }
   ps->top++;
   ps->items[ps->top]=x;
}

int pop(struct stack *ps)
{
	if(isStackEmpty(ps)==1)	
	{
		cout<<"Underflow: Stack is empty\n";
		exit(1);
	}
	return ps->items[(ps->top)--];
}

void printStack(struct stack *ps)
{
     int x;
     struct stack temp;
     initializeStack(&temp);
     
     while (!isStackEmpty(ps))
     {
       x = pop(ps);
       cout<<x<<endl;
       push(&temp,x);
     }
     while (!isStackEmpty(&temp))
     {
            x = pop(&temp);
            push(ps,x);
     }
}

void copyStack (struct stack *a, struct stack *b){
	int x;
     struct stack temp;
     initializeStack(&temp);
     
     x=pop(&a);
     temp
}