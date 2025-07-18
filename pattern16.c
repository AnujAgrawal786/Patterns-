#include<Stdio.h>
#include<conio.h>
int main(){
int n=5,a,b;
  for(int i=1;i<=n;i++){
a=n-1;
b=a+i;
for(int j=1;j<=i;j++){
if(j==1) printf("%3d",i);
else{
printf("%3d",b);
a--;
b=a+b;
}
} 
printf("\n");
}
}