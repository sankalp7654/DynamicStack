#include<stdio.h>

void push(int,int*,int*);
void display(int , int*);
int pop(int*,int*);

void main()
{
	int top=-1,capacity=1,ch,ele,poppedItem;
	int *stack=(int *)malloc(sizeof(int));

	for(;;)
	{
		printf("Enter your choice\n");
		printf("1 PUSH\n2 POP\n3 DISPLAY\n4 EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{

			case 1 : 
			if(top<=capacity-1)
			{
				stack=(int *)realloc(stack,2*capacity*sizeof(int));
				capacity=capacity*2;
			}
			printf("Enter the element\n");
			scanf("%d",&ele);
			push(ele,&top,stack);
			break;

			case 2 :
			if(top==-1)
				printf("Stack empty\n");
			else
				poppedItem = pop(&top,stack);
				printf("Popped Item : %d\n",poppedItem );

			break;

			case 3 :
			printf("The stack content is\n");
			display(top,stack);
			break;

			case 4:
			exit(0);


		}
	}
}

void push(int ele,int * top ,int * stack)
{
	 *(stack+(++*(top)))=ele;

}

int pop(int *top , int *stack)
{	
	int item = *(stack+(*top)--);
	return item;
}

void display(int top , int * stack)
{
	int i=0;
	for( ; i<=top ; i++)
		printf("%d \n",*(stack+i) );
}