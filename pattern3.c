#include<stdio.h>
#include<conio.h>
int main(){
int nc=10,nr=10,count=1;
for(int i=1;i<=nc;i++){
  for(int k=1;k<=nr;k++){
  if(i==1||i==10){
    printf("%d ",count);
     count++;
    }
   else if((i !=1 && i!=10)&&(k==1 || k==10)){
   printf("%3d",count);
    count++; 
   }
    else{
   printf("%3c",'*');
  }
}
printf("\n");
}
}