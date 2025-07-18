#include<stdio.h>
#include<conio.h>
int main(){
int n=4,b,a=1;
for(int i=1;i<=n;i++){
 b=a+i-1; 
  for(int k=1;k<=i;k++,a++){
  if(i%2==0){
printf("%3d",b--);
}
else{
printf("%3d",a);
}    
}
printf("\n");
}

}