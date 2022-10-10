#include<stdio.h>
int main(){
    int n;
    printf(" Enter  total process number: ");
    scanf("%d",&n);
    int arival[10],burst[10],temp[10],completion_time,i,smallest,total_wt=0,total_tat=0,remain=0,time;
    remain=n;
    printf(" Enter arrival and burst time for all process:\n");

    for (i=0;i<n;i++){
        scanf("%d %d",&arival[i],&burst[i]);
        temp[i]=burst[i];
    }
    burst[9]=9999;
    for (time=0;remain!=0;time++){
        smallest=9;
        for (i=0;i<n;i++){
            if ( temp[i]>0 && arival[i]<=time  && temp[i]<temp[smallest])
                smallest=i;
        }
        temp[smallest]-- ;
        if (temp[smallest]==0){
            remain--;
            completion_time=time+1;
            printf("process number:p%d   completion_time is:%d   Turn arround time is:%d    waiting time is: %d \n",smallest+1,completion_time,completion_time-arival[smallest],completion_time-arival[smallest]-burst[smallest]);
            total_wt+=completion_time-arival[smallest]-burst[smallest];
            total_tat+=completion_time-arival[smallest];

        }
    }

}