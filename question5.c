#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int top=-1;
int s[MAX];
int f=-1;
int r=-1;
int queue[MAX];
int q1[MAX];
int f1=-1;
int r1=-1;
int push_q(int elem) //Function to push the elements in the Queue
{
 	if(r==MAX-1)
	     	{
			printf(" overflow");
		}
	else 
		{
			if(f==-1&&r==-1)
			{
				f=0 ,r=0;
				queue[r]=elem;
			}
				
			else
			{
				r=r+1;
				queue[r]=elem;
			}
		}

}


int pop_q()  //Function to pop the elements in the Queue
{
 int del_item;
 	if(f==-1||f>r)
		{
			printf("queue underflow");
		}
	else 
		
				{
					
					del_item=queue[f];
					f=f+1;
				}


return del_item;
		
}
int pop_s()   //Function to pop the elements in the Stack
{
int del;
	if(top==-1)
		{
			return 0;	
			printf("Underflow");
		}
	else
		{
			del=s[top];
			top=top-1;
		}

return del;
}

int Display()   //Function to Display elements in the Queue
{
	
int i;
for(i=f;i<=r;i++)
		{
			printf("%d",queue[i]);
			printf(" ");
	
		}
printf("\n");
}

int main()
{
int i,elem,k;
printf("Here you can reverse a queue\n");
printf("Enter the element to be inserted\n");
for(i=0;i<MAX;i++)
	{

		scanf("%d",&elem);
		push_q(elem);
	}
printf("The place of element you want to reversed");
scanf("%d",&k);
for(i=f;i<k;i++)
	{
		r1++;
		q1[r1]=pop_q(); // pop the elements from the main queue to temp queue(k elements)
		

	}	




for(i=k;i<=MAX;i++)
	{

		f--;
		f1++;
		queue[f]=q1[f1]; //pop the elements from the temp queue to main queue(k elements)
	}

printf("\n\n");
Display();
return 0;
}
