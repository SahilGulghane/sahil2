#include<stdio.h>
void main(){
    int a[10];
    int size,pos,ele;
    int i;
printf("enter the size of array");
scanf("%d",&size);
printf("enter the %d elements",size);

for(i =0 ;i<size;i++)
{
    scanf("%d",&a[i]);
}
  
printf("enter the position at which element to be insert");
scanf("%d",&pos);

printf("enter the element to inserted at %d position",pos);
scanf("%d",&ele);

if(pos <= size){

for(i=size-1 ; i>=pos-1 ; i--){
    a[i+1] = a[i];
        
}
a[pos] = ele;
size++;
for(i = 0 ; i<size;i++){
    printf("%d",a[i]);
}
}
else{
    printf("invalid position");
}

}