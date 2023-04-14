#include<stdio.h>
#include<conio.h>

void QueryHandling(int t,float* res,int* total_tym)
{
    int ts=t;
    int i, n,count=0, y,C_tym=0, wt=0, tarr_tym=0;
    float avg_wt, avg_tat;
    printf(" Total number of customers : ");
    scanf("%d", &n);
    int arr_tym[n], b_tym[n], rm_tym[n];
    y = n;
for(i=0; i<n; i++)
{
printf("\nEnter the arrival_time and Query_time in minutes for Customer[%d]\n", i+1);
printf(" Arrival time is: \t");
scanf("%d", &arr_tym[i]);
printf(" Query_time is: \t");
scanf("%d", &b_tym[i]);
rm_tym[i] = b_tym[i];
}
printf("\n Customer No \tQuery Time \t\t\t TAT \t\t Waiting Time ");
for(C_tym=0, i = 0; y!=0; )
{
if(rm_tym[i] <= ts && rm_tym[i] > 0)
{
    C_tym = C_tym + rm_tym[i];
    rm_tym[i] = 0;
    count=1;
    }
    else if(rm_tym[i] > 0)
    {
        rm_tym[i] = rm_tym[i] - ts;
        C_tym = C_tym + ts;
    }
    if(rm_tym[i]==0 && count==1)
    {
        y--;
        printf("\n[%d] \t\t %d\t\t\t\t %d\t\t\t %d", i+1, b_tym[i], C_tym-arr_tym[i], C_tym-arr_tym[i]-b_tym[i]);
        wt = wt+C_tym-arr_tym[i]-b_tym[i];
        tarr_tym = tarr_tym+C_tym-arr_tym[i];
        count =0;
    }
    if(i==n-1)
    {
        i=0;
    }
    else if(arr_tym[i+1]<=C_tym)
    {
        i++;
    }
    else
    {
        i=0;
    }
}
avg_wt = wt * 1.0/n;
float avg_qury_tym = C_tym * 1.0/n;

printf("\n Average Query Time: \t%.2f", avg_qury_tym);
printf("\n Average Waiting Time: \t%.2f", avg_wt);
*res=avg_qury_tym;
*total_tym=C_tym;
}

int main()
{
    printf("\t\t\t\tThe time is 9 A.M\n");
    printf("\t\tRegular Customer Query Handling between 9 AM to 11 AM:\n");
    printf("Enter the Time Slot for each Query:");
    int ts,t_time;
    scanf("%d",&ts);
    float res1;
    QueryHandling(ts,&res1,&t_time);
    printf("\n");
    printf("\n");
    printf("\t\t\t\tThe time is 11 A.M\n");
    printf("\t\tNew  Customer Query Handling between 11 AM to 1 PM:\n");
    printf("Are there any New Customer Queries? Press 1 for Yes or 0 for No\n");
    int flag;
    scanf("%d",&flag);
    float res2=0;
    if(flag==1){
     QueryHandling(ts,&res2,&t_time);
    }
    else if(flag==0){
        printf("No New Queries:\n");
    }
    else
        printf("Invalid response\n:");
    printf("\n");
    printf("\n");
    printf("Total Time spent on handling the queries is: %d minutes");
    printf("Total Average Query time of Ajay is:%2.f minutes\n",res1+res2);

    printf("Session Completed Successfully\n");
    return 0;


}

