#include<iostream>
//C++/C++11中头文件<iostream>定义了标准输入/输出流对象。
//包含了<iostream>也自动包含了<ios>、<streambuf>、<istream>、<ostream>和<iosfwd>。
using namespace std;
/*namespace是指标识符的各种可见范围，是C++为了解决命名冲突而产生的一种机制。
此处指如果遇到命名冲突默认使用stdio库里的*/ 
int main(){
    int n,x,i;
    cin>>n;/*cin 是 C++ 标准输入流对象，即 istream 类的对象。
	cin 主要用于从标准输入读取数据，这里的标准输入指终端键盘。
	即调用成员函数 operator>>() 进行读取数据。*/
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
