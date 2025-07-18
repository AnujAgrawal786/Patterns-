#include<stdio.h>
#include<conio.h>
int main(){
int nr =10;
for(int i=1;i<=nr;i++){
  for(int k=1;k<=i;k++){
  if((i+k)%2==0){
   printf("%3c",36);
}
else{
printf("%3c",'*');
}
  }
printf("\n");
}
}