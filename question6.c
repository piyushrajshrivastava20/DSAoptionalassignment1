#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int s[MAX];
int a[MAX];
int top=-1;
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
void push_s(int elem)
{
  top=top+1;
  s[top]=elem;
}
 void Display_s()
{
int i;
printf("\nThe reversed elements in stack \n");
for(i=top;i>=0;i--)
	{
		printf("\n%d\n",s[i]);
	}
}	

int main()
{	
int i,elem;
	printf("enter the element to be inserted in stack\n");
	for(i=0;i<MAX;i++)
		{ 
			scanf("%d",&elem);
			push_s(elem);
		}

 for (i=top;i>=0;i--)
		{
			a[i]=pop_s();
			
		}

for (i=0;i<MAX;i++)
		{
			top++;
			s[top]=a[i];
			
			
			
		}
Display_s();
return 0;
}
		
			
	

