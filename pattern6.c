#include<stdio.h>
#include<conio.h>
int main(){
int nr=5,nc=5;
for(int i=1;i<=nr;i++){
  for(int k=1;k<=nc;k++){
  if(i==k){
    printf("1 ");
  }
 else if(i>k){
   printf("2 ");
}
else{
printf("0 ");
}
  } 
printf("\n");
}
}