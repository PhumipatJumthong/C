#include <iostream>
#include <string>
using namespace std;
int main()
{
	int A=10 ,B=20 ,C=30,sum,com;
	cout<<"enter A:";
	cin>>A;
	cout<<"enter B:";
	cin>>B;
	cout<<"enter C:";
	cin>>C;
	sum = A+B+C;
	cout<<"A+B+C = 10 + 20 + 30="<<sum<<endl;
	cout<<"-------output--------"<<endl;
	cout<<"enter C=:";
	cin>>C;
	cout<<"enter B:";
	cin>>B;
	cout<<"enter C:";
	cin>>C;
	com = C+B+C;
	cout<<"C+B+C = 30+20+30 "<<com<<endl;
    system("pause");
    return (0);
}