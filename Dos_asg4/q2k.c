#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(){
pid_t c1;
int n=10;
c1=fork();
if(c1==0)
{
printf("child\n");
n=20;
printf("n=%d\n",n);
}
else
{
wait(NULL);
printf("parent\n");
printf("n=%d\n",n);
}
return 0;
}
