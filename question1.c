#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int top=-1;
int s[MAX];
int f=-1;
int r=-1;
int queue[MAX];
int push_q(int elem)
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


int pop_q()
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
int pop_s()
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

int Display()
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
int i,elem;
printf("Here you can reverse a queue\n");
printf("Enter the element to be inserted\n");
for(i=0;i<MAX;i++)
	{

		scanf("%d",&elem);
		push_q(elem);
	}
printf("The elements in queue is ");
Display();
for(i=f;i<=r;i++)
	{
		top++;
		s[top]=pop_q();
	}

r=-1;f=0;
for(i=0;i<MAX;i++)
	{
		r++;
		queue[r]=pop_s();
	}
printf("The reverse queue is  ");
Display();
return 0;
}










						

