#include<stdio.h>
#include<string.h> 
float t[105];                   //�������ʱ�� 
int N,C,T,VR,VT1,VT2;
int a[105];                     //����ÿ��վ��ľ��� 
void TIME()
{
	double time,min;            //time����ÿ�ε�ʱ�䣬min������Сʱ�� 
	memset(t,-1,sizeof(t));   //������� 
	int len,i,j; 
	t[0]=0;                    //�����ʱΪ0 
	for(i=1;i<N+2;i++)          //վ��ѭ�� 
	{
		min=100000000000;       //��min��Ϊ��������� 
		for(j=0;j<i;j++)        //ÿ�ζ��ӵ�һ��վ������ 
		{
			len=a[i]-a[j];      //��i�͵�j��վ��ľ��� 
			
			if(len>C)           //������ڵ��� ���ŵ� 
			{
			    time=1.0*C/VT1+(len-C+0.0)/VT2;
			}
			else                //��ȫ�õ� 
			{
			    time=1.0*len/VT1;  
		    }
			time+=t[j];         //time������ʻ����j��վ������ʱ�� 
			if(j)               //����ӵ� 
			{
			    time+=T;             //ʱ��++ 
		    }
			if(min>time)         //min���浱ǰ��Сʱ�� 
			{
			    min=time;
			} 
		}
		t[i]=min;              //t���浽ÿ��վ�����Сʱ�� 
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
		}        //�������� 
		a[0]=0;a[N+1]=L;          //��һ��վ��Ϊ0�����һ������L 
		TIME();                     //���� 
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
