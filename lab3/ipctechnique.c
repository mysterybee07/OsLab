//Lab3(b): Implement IPC TechniqueCode:
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<stdio.h>
void *thread1f (void *arg);
void *thread2f (void *arg);
int turn=1;
int main(){
pthread_t thid1;
pthread_t thid2;
printf("Name: Biraj Pudasaini\nRoll No.: 108\n");
pthread_create (&thid1, NULL, &thread1f, NULL);
pthread_create (&thid2, NULL, &thread2f, NULL);
pthread_join(thid1, NULL);
pthread_join(thid2, NULL);
return 0;
}
void *thread1f(void *arg){
int x = 0;
while(x++<20)
{
while(turn!= 1);
fputc('y',stderr);
turn = 0;
}
}
void *thread2f (void *arg){
int y= 0;
while(y++<20)
{
while(turn != 0);
fputc('x', stderr);
turn=1;
}
printf("\n");
}
