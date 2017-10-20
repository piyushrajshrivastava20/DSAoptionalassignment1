#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int top=-1;
int top1=-1;
int s[MAX];
int s1[MAX];
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
	if(top1==-1)
		{
		return 0;	
printf("Underflow");
		}
	else
		{
			del=s1[top1];
			top1=top1-1;

//printf("top1:%d",top1);
		}

return del;
}

void Display()
{
	
int i;
for(i=f;i<=r;i++)
{
	printf("%d",queue[i]);
	printf(" ");
}
printf("\n");
}
void Display_s()
{
int i;
printf("\nThe elements in stack \n");
for(i=top;i>=0;i--)
	{
		printf("\n%d\n",s[i]);
	}
}


int main()
{
int i,elem;
printf("pushing the elements in the stack from Queue with same order");
printf("\nEnter the elememts of Queue");
for(i=0;i<MAX;i++)
	{
		scanf("%d",&elem);
		push_q(elem);
	}
printf("The elements in queue is ");
Display();
for(i=f;i<=r;i++)
	{
		top1++;

		s1[top1]=pop_q();
	}
for(i=top1;i>=0;i--)
	{
		top++;
		s[top]=pop_s();
	}
Display_s();
return 0;
}



