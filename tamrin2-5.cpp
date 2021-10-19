#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int a;
	string s;
	cout<<"pleas prees 's' to random number \n";
	cin>>s;
	if(s=="s"){
		srand((unsigned)time(0));
		a = (rand()%6)+1;
		cout<<a;
	}
	while(a==6){
		cout<<"\nLucky!! try again pleas prees 's' to random number \n";
		cin>>s;
		if(s=="s"){
			srand((unsigned)time(0));
			a = (rand()%6)+1;
			cout<<a;
		}
	}
	
}