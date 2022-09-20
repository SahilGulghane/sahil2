  
if (rear == size-1 )
{
    printf(" \n the queue is full");
}
    
else
{
    rear++;
    queue[rear] = ele;
    printf("\n suceefully inserted");
}



}

// The dequeue operation is used to delete elements from queue 
void delete()
{

   int front = queue[0];
    if( rear == -1)
    {
            printf("no element can be deleted");