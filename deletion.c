#include<stdio.h>
void main(){
    int a[10];
    int size,pos;
    int i;
    int ele;
printf("enter the size of array");
scanf("%d",&size);
printf("enter the %d elements",size);

for(i =0 ;i<size;i++)
{
    scanf("%d",&a[i]);
}

// printf("enter the element ");
// scanf("%d",&ele);
// for(i =0 ;i<size;i++)
// {                                                     delet directly form element 
//     if(ele == a[i]){
//         printf("found at index %d",i);
//         pos = i;
//         break;
    
//     }
     
// }


printf("enter the position at which element to be delet");
scanf("%d",&pos);

for(i =0 ;i<size;i++)
{
    
   if(pos == i)
   {
       a[i] = a[i+1];
   }  
}
size--;
for(i = 0 ; i<size;i++){
    printf("\n %d",a[i]);
}

}