#include<stdio.h>
#include<conio.h>
int main(){
int nr=5;
for(int i=1;i<=nr;i++){
for(int k=1;k<=i;k++){
 printf("%3c",'*');
}
printf("\n");
}
}