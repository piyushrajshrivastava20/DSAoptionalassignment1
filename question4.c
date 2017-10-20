#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int f1=-1;
int r1=-1;
int f2=-1;
int r2=-1;
int q1[MAX];
int q2[MAX];
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
int pop_q1()
{
 int del_item1;
 	if(f1==-1||f1>r1)
		{
			printf("queue underflow");
		}
	else 
		
				{
					
					del_item1=queue[f];
					f1=f1+1;
				}


return del_item1;
		
}
int pop_q2()
{
 int del_item2;
 	if(f2==-1||f2>r2)
		{
			printf("queue underflow");
		}
	else 
		
				{
					
					del_item2=queue[f2];
					f2=f2+1;
				}


return del_item2;
		
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
printf("Here you can interleave a queue\n");
printf("Enter the element to be inserted\n");
for(i=0;i<MAX;i++)
	{

		scanf("%d",&elem);
		push_q(elem);
	}
printf("The elements in queue is ");
Display();

for(i=f;i<=r/2;i++)
	{
		r1++;
		q1[r1]=pop_q();
	}
f1=0;

for(i=((r/2)+1);i<=r;i++)
	{
		r2++;
		q2[r2]=pop_q();
	}
f2=0;
printf("\n");

r=-1,f=0;
for(i=0;i<MAX/2;i++)
	{
		r++;
		queue[r]=q1[f1];
		f1++;
		r++;

		queue[r]=q2[f2];
		f2++;
	}
printf("\n");
Display();
return 0;
}
