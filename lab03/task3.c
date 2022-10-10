#include<stdio.h>

int main(void){
    struct process{
    int n, WT,AT,BT,TAT,PT,CT;    
};
    int n;
    printf("Enter the number of the process:");
    scanf("%d",&n);
    struct process arr[n*2];
    int temp[n*2],time,remain=0,shortst,total_WT=0,total_TAT=0;
    remain=n;
    printf(" Enter arrival_time, burst_time and Priority for all process:");
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&arr[i].AT,&arr[i].BT,&arr[i].PT);
        temp[i]=arr[i].BT;   
    }
    arr[n*2-1].PT=9999;   
    for(time=0;remain!=0;time++){
        shortst=n*2-1;
        for(int i=0;i<n;i++){
            if(arr[shortst].PT>arr[i].PT && arr[i].AT<=time && arr[i].BT>0){
                shortst=i;
            }
        }
        arr[shortst].BT--;
        if(arr[shortst].BT==0){
            remain--;
            arr[shortst].CT=time+1;
            printf("Process ID is:p%d, completion_time is:%d, waiting time is:%d, turn arround time:%d\n",shortst+1,arr[shortst].CT,arr[shortst].CT-arr[shortst].AT-temp[shortst],arr[shortst].CT-arr[shortst].AT);
            total_WT+=arr[shortst].CT-arr[shortst].AT-temp[shortst];
            total_TAT+=arr[shortst].CT-arr[shortst].AT;
            
        }
        }
    return 0;
}