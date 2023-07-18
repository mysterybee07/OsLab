#include<stdio.h>
#include<unistd.h>
int main(void)
{
int pid;
printf("Hello World!\n");
printf("I am the process and pid is:%d \n",getpid());
printf("Here iam before use of forking\n");
pid=fork();
printf("Here Iam just after forking \n");
if(pid==0)
printf("I am the child process and pid is:%d\n",getpid());
else
printf("I am parent process and pid is:%d\n",getpid());
}