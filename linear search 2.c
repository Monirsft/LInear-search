#include<stdio.h>
int main(){
int index,num,a[1000],target=50,found=0;
scanf("%d",&num);
for(index=0;index<num;index++){
    scanf("%d",&a[index]);
}
for(index=0;index<num;index++){
if(a[index]==target){
    found=1;
    break;
}
}
if(found==0){
    printf("%d is not found",target);
}
else{
 printf("%d is found %d ",target,index);
}


}
