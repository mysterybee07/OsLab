//Lab3(c):  Simulating First Come First Server (FCFS) FIFO scheduling in C.Code:
#include<stdio.h>
int main(){
int n, bt[100],wt[100],tat[100],avwt=0, avtat=0, i, j;
printf("Name: Biraj Pudasaini\nRoll No.: 108\n");
printf("Enter total number of processes:");
scanf("%d", &n);
printf("\nEnter Burst Time of the processes \n");
for(i=0; i<n; i++)
{
printf("P[%d]:", i+1);
scanf("%d", &bt[i]);
}
wt[0]=0;  //waiting time for first process is O '
for(i=1; i<n; i++)  //calculating waiting time
{
wt[i]=0;
for(j=0; j<i; j++)
{
wt[i]=wt[i]+bt[j];
}
}
printf("\n\tProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
for(i=0; i<n; i++) //calculating turnaround time '
{
tat[i]=bt[i]+wt[i];
avwt+=wt[i];
avtat+=tat[i];
printf("\n\tP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
}
 avwt/=i;
avtat/=i;
printf("\n\nAverage Waiting Time for the processes is:%d",avwt);
printf("\nAverage Turnaround T1me for the processes is:%d\n" , avtat);
return 0;
}
