#include<stdio.h>
#include<unistd.h>
void main(void)
{
printf("Here I am before first forking statement \n");
fork();
printf("Here I am after first forking statement\n");
fork();
printf("Here I am after second forking statement\n");
printf("\t Hello World from process:%d\n", getpid());
}
