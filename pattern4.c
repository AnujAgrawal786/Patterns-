#include<stdio.h>
#include<conio.h>
int main(){
int nr=4,nc=5;
int count=1;
for(int i=1;i<=nr;i++){
  for(int j=1;j<=nc;j++){
  if(i%2==0){
  printf("%3d",--count);
  } 
else{
 printf("%3d",count++);
}
  }
printf("\n");
}

}