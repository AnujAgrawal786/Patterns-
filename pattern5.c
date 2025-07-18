#include<stdio.h>
#include<conio.h>
int main(){
int nr=10,nc=26,count=97;
for(int i=1;i<=nr;i++){
   count=97;
  for(int j=1;j<=nc;j++){
if(j%2==0){
   printf("%c",count++);
}
else{
   printf("%c",count-32);
   count++;
}
   }
printf("\n");
}
}