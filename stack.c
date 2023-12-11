#include<stdio.h>


int stack[100],i,j,choice,size,top=-1; 
    void push();
	void pop();
	void peek();
	void display();
	void main()
	{
	printf("Enter size of stack :");
	scanf("%d",&size);
	while(choice!=5)
	{
	printf(" 1.push \n 2.pop \n 3.peek \n 4.display\n");
	printf("Enter the choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			push();
			break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			peek();
			break;
		}
		case 4:
		{
			display();
			break;
		}
		default:
		{
		printf("enter valid choice :");	
		}
	};
  }
}
void push()
{  int ele;
	if(top == size-1)
	{
		printf("\nthe stack is full...\n");
	}
	else
	{
	printf("Enter Element :");
	scanf("%d",&ele);
	top++;
	stack[top]=ele;	
	}
}
 void pop()
 { int temp;
 	if(top==-1)
 	{
		printf("\nThe stack is empty...!\n");
 		
 	}
	 else
	 {temp=stack[top];
	 	printf("Deleted Element is : %d\n",temp);
	    top--;
	}
 }
 void peek()
 {
 	if(top==-1)
 	{
 		printf("\nThe stack is empty...!\n");
	 }
	 else
	 {
	 	
	 	printf("\nelement of top %d \n",stack[top]);
	 }
 }
 void display()
 {
 	int i;
 	if(top==-1)
 	{
 		printf("\nThe stack is empty...!\n ");
	 }
	 else
	 { printf("Elements in stack : ");
	 	for(i=0;i<=top;i++)
	 	{
	 		printf("%t%d ",stack[i]);
		 }
		 printf("\n");
	 }
 }

