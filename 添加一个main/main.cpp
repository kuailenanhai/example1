#include<iostream>
#include <string>
#include<cstring>
using namespace std;

int main()
{
	/*string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if(s1!=s2)
	{
		cout<<"they are not same."<<endl;
	}
	*/
	const int size (10);

	char a[size],b[size];
	cout<<" input two string "<<endl;

	cin>>a>>b;
	bool result =strcmp(a,b);

	switch(result)
	{

	    case 1:
		cout<< "a>b"<<endl;
		break;
		case 0:
			cout<<"a=b"<<endl;
			break;
		case -1:
			cout<<"a<b"<<endl;
			break;
		default :
			cout<<"the erro"<<endl;
			break;
	
	}
	

	system("pause");
	return 0;
}