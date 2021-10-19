#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a,h,m,s;
	cout<<"number:";
	cin>>a;
	h=a/3600;
	a=a%3600;
	m=a/60;
	s=a%60;
	cout<<h<<":"<<m<<":"<<s;
}