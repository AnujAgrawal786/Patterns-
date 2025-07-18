#include<stdio.h>
#include<conio.h>
int main(){
int n=5,count=1;
for(int i=1;i<=n;i++){
  for(int sp=1;sp<=n-i;sp++){
   printf("  ");
}
  for(int k=1;k<=count;k++){
    printf("* ");
   }
count+=2;
printf("\n");
}
count-=2;
for(int i=n-1;i>=1;i--){
count-=2;
for(int sp=1;sp<=n - i;sp++){
 printf("  ");
} 
for(int k=1;k<=count;k++){
printf("* ");
}
printf("\n");
}
}