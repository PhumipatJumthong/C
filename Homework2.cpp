#include <iostream>
#include <string>
using namespace std;
int main()
{   string Name;
    int salary,sale;
    float com;
    cout<<"Enter Name :";
	cin>>Name;
	cout<<"Enter Salary :";
	cin>>salary;
	cout<<"Enter Sale :";
	cin>>sale;
	cout<<"Enter Commission Percent :";
	cin>>com;
	cout<<"--------Output-------\n";
	cout<<"Your name = "<<Name <<endl;
	cout<<"Total Revenue "<<salary+(sale*(com/100))<<endl;
    system("pause");
	return(0);
}