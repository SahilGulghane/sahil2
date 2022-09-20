#include<stdio.h>

int stack[5],top=-1,size;

 


void push(int ele);
void pop ();
void peep();
void display();
void main()

{
  
 printf("enter the size of array");
 scanf("%d",&size);
 
pop();
push(2);
push(3);
push(4);
push(21);

peep();
display();
 pop();
 peep();
display();
 
 
}

void push(int ele)
{  
    
    if (top == size-1)
    {
        printf("\n stack full ");
    }

    else{

    
    top= top+1;
    stack[top] =  ele;
    printf("\n suceefully inserted");

    }
}
void pop()
{  
    int eledelted;
    if (top == -1)
    {
        printf("\n stack empty ");
    }

    else{

    
    eledelted = stack[top];
    top=top-1;
    printf("\n suceefully deletted : %d",eledelted);

    }
}

void peep()
{
    int toposstack ;
    if (top ==-1)
    {
        printf("no elemnent in stack");

    }
    else
    {
        toposstack = top;
        printf("\n the top of stack is %d",toposstack);
    }
}
void display()
{
    if (top == -1)
    {
        printf(" \n stack is empty");
    }
    else
    {
        for(int i = top ; i>=0 ; i--)

        {
            printf("\n %d",stack[i]);
        }
    }
}



