#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(){

if(fork() > 0){
	sleep(1);
}
else{
	printf("child1: %d\n parent: %d\n",getpid(),getppid());
	printf("copy first file to second file");
	execlp("cp","cp","f1.txt","f2.txt",NULL);
   }
   
   
   if(fork() > 0){
	sleep(1);
}
else{
	printf("child2: %d\n parent: %d\n",getpid(),getppid());
	printf("display");
	execlp("cat","f2.txt",NULL);
   }
   
   
if(fork() > 0){
	sleep(1);
}else{
	printf("child3: %d\n parent: %d\n",getpid(),getppid());
	printf("sort");
	execlp("sort","sort","-r","f2.txt",NULL);
	}
return 0;
}
