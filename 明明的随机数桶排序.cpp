#include<iostream>
//C++/C++11��ͷ�ļ�<iostream>�����˱�׼����/���������
//������<iostream>Ҳ�Զ�������<ios>��<streambuf>��<istream>��<ostream>��<iosfwd>��
using namespace std;
/*namespace��ָ��ʶ���ĸ��ֿɼ���Χ����C++Ϊ�˽��������ͻ��������һ�ֻ��ơ�
�˴�ָ�������������ͻĬ��ʹ��stdio�����*/ 
int main(){
    int n,x,i;
    cin>>n;/*cin �� C++ ��׼���������󣬼� istream ��Ķ���
	cin ��Ҫ���ڴӱ�׼�����ȡ���ݣ�����ı�׼����ָ�ն˼��̡�
	�����ó�Ա���� operator>>() ���ж�ȡ���ݡ�*/
	x=0;
    int a[n],bus[1002]={0};
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    	if(bus[a[i]]==0)
    	{
    		x++;
		}
		bus[a[i]]=1;
	}
	for(i=0;i<1000;i++)  
	{
		if(bus[i]==1)
        cout<<i<<' ';
    }
    cout<<"\n"<<x<<endl;
    return 0;
}
