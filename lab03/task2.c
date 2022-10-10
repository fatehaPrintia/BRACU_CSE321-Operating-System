#include<stdio.h>

int main(void){
    struct process{
    int n, WT,AT,BT,TAT,CT;    
};
    int n;
    printf("Enter the number of the process:");
    scanf("%d",&n);
    struct process arr[n*2];
    int i=0,Complition_T,temp[n*2],time=0,remain=0,shortst,total_WT=0,total_TAT=0,time_quantum;
    printf("Enter Time Quantum:");
    scanf("%d", &time_quantum);
    printf(" Enter arrival_time and burst_time:\n"); //if there is no arrival time of the processes then we will consider it as 0!
    for(i=0;i<n;i++){
        scanf("%d %d",&arr[i].AT,&arr[i].BT);
        temp[i]=arr[i].BT;   
    }
    while(remain<n){
        i=i%n;
        if (temp[i]==0){
            i++;
            continue;
        }else if(temp[i]-time_quantum>0){
            temp[i]-=time_quantum;
            time+=time_quantum;
        }else{
            time+=temp[i];
            arr[i].CT=time;
            temp[i]=0;
            remain++;
        }
        i++;
    }
    for(i=0;i<n;i++){
        Complition_T=arr[i].CT;
        total_TAT=Complition_T-arr[i].AT;
        total_WT=total_TAT-arr[i].BT;
        printf("Process no:p%d   completion time:%d   turn arround time:%d   waiting time:%d \n", i+1, Complition_T, total_TAT, total_WT);
    }
        
    return 0;
}