#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a;
	while(cin>>a)
		cout<<"a"<<a<<endl;
	cin.clear();//��������Ǳ�ʾ��cin���ã�ԭ����ctrl+z�ǽ�cinֵΪfalse

	int b;
	while(cin>>b)
		cout<<"b="<<b<<endl;
	return 0;
}