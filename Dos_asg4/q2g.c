#include<stdio.h>
#include<unistd.h>
int main(){
int i=5;
if(fork()==0)
{
printf("child:%d",i);
}
else
{
printf("Parent:%d",i);
}
return 0;
}

