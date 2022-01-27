#include<stdio.h>
#include<string.h> 
float t[105];                   //储存最短时间 
int N,C,T,VR,VT1,VT2;
int a[105];                     //储存每个站点的距离 
void TIME()
{
	double time,min;            //time储存每次的时间，min储存最小时间 
	memset(t,-1,sizeof(t));   //数组清空 
	int len,i,j; 
	t[0]=0;                    //起点用时为0 
	for(i=1;i<N+2;i++)          //站点循环 
	{
		min=100000000000;       //将min设为尽量大的数 
		for(j=0;j<i;j++)        //每次都从第一个站点算起 
		{
			len=a[i]-a[j];      //第i和第j个站点的距离 
			
			if(len>C)           //距离大于电量 ，脚蹬 
			{
			    time=1.0*C/VT1+(len-C+0.0)/VT2;
			}
			else                //完全用电 
			{
			    time=1.0*len/VT1;  
		    }
			time+=t[j];         //time储存行驶到第j个站点的最短时间 
			if(j)               //如果加电 
			{
			    time+=T;             //时间++ 
		    }
			if(min>time)         //min储存当前最小时间 
			{
			    min=time;
			} 
		}
		t[i]=min;              //t储存到每个站点的最小时间 
	}
}
int main()
{
	int L,i,j;
	while(scanf("%d",&L)!=EOF)
	{
		scanf("%d%d%d%d%d%d",&N,&C,&T,&VR,&VT1,&VT2);
		for(i=1;i<=N;i++)
		{
		    scanf("%d",&a[i]);
		}        //花样输入 
		a[0]=0;a[N+1]=L;          //第一个站点为0，最后一个距离L 
		TIME();                     //调用 
		if(1.0*L/VR<t[N+1]) 
		{ 
            printf("Good job,rabbit!\n"); 
		} 
        else 
		{ 
    	    printf("What a pity rabbit!\n");
		}  
	} 
	return 0;
}
