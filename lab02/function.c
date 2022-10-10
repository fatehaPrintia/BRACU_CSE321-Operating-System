#include<stdio.h>
int check_perfectnumber(int start,int end);
int main()
{
    int start,end,i,sum,p;
    scanf("%d %d",&start, &end);
    check_perfectnumber(start,end);

}

int check_perfectnumber(int start, int end)
{
    int p;
    for(p=start; p<=end; p++)
    {
        int i=1;
        int sum=0;
        while(i<p)
        {
            if(p%i==0)
                sum=sum+i;
            i++;
        }
        if(sum==p)
            printf("%d\n",p);
    }

    return 0;

}
