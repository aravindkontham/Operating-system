#include<stdio.h>
int main(){
  int n;
  printf("Enter the Total number of Processes:");
  scanf("%d",&n);
  int wait_time=0,ta_time=0,arr_time[n],burst_time[n],temp_burst_time[n];
  int x=n;
  //Input details of processes
  for(int i=0;i<n;i++){
    printf("Enter Details of Process %d \n",i+1);
    printf("Arrival Time:");
    scanf("%d",&arr_time[i]);
    printf("Burst Time: ");
    scanf("%d",&burst_time[i]);
    temp_burst_time[i]=burst_time[i];
  }




}
