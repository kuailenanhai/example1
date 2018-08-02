#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a;
	while(cin>>a)
		cout<<"a"<<a<<endl;
	cin.clear();//这个函数是表示将cin重置，原来的ctrl+z是将cin值为false

	int b;
	while(cin>>b)
		cout<<"b="<<b<<endl;
	return 0;
}