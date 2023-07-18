#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Hello World!\n");
	fork(); 
	printf("I am after forking\n");
	printf("\t Iam process %d \n",getpid());
}
