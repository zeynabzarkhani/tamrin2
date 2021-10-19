#include<iostream>
using namespace std;
int main()
{
	string str;
	int a1,a2,a3,a4,a5,a6;
	cout<<"Enter Time:";
	cin>>str;
	a1 = str[0]-48;
	a2 = str[1]-48;
	a3 = str[3]-48;
	a4 = str[4]-48;
	a5 = str[6]-48;
	a6 = str[7]-48;
	cout<<a1*36000 + a2*3600 + a3*600 + a4*60 + a5*10 + a6;
}