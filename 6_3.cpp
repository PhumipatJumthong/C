#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void Input(int &numS,int quiz[10],int Mid[10],int final[10]);
void Viewall(int &numS,int quiz[10],int Mid[10],int final[10]);
void ViewID(int &numS,int quiz[10],int Mid[10],int final[10]);
int main()
{
	int	numS = 0;
	int quiz[10],Mid[10],final[10];
	char Ch;
	do{
		cout<<setfill('=')<<setw(50)<<" "<<endl;
		cout<<"			MENU			"<"\n";
		cout<<setfill('=')<<setw(50)<<" "<<"\n";
		cout<<"1.Input student records"<<"\n";
		cout<<"2.View all student records"<<"\n";
		cout<<"3.Show a student by ID"<<"\n";
		cout<<"4.Exit"<<"\n";
		cout<<"Select menu :";
		cin>>Ch;
		if(Ch == '1'){
			Input(numS,quiz,Mid,final);
		}
		else if(Ch == '2'){
			Viewall(numS,quiz,Mid,final);
		}
		else if(Ch == '3'){
			ViewID(numS,quiz,Mid,final);
		}
		else return(0);

		}while(Ch !='4');
	system ("pause");
	return 0;
}
void Input(int &numS,int quiz[10],int Mid[10],int final[10])
{
	cout<<"Input Number of Student :";
	cin>>numS;
	for (int i = 0;i<numS;i++)
	{
		cout<<"Number"<<i+1<<endl;
		cout<<"Input Quiz :";
		cin>>quiz[i];
		cout<<"Input Midterm:";
		cin>>Mid[i];
		cout<<"Input Final :";
		cin>>final[i];
		cout<<endl;
	}
}
void Viewall(int &numS,int quiz[10],int Mid[10],int final[10])	
{
	cout<<"------------------------------"<<endl;
	cout<<"StdID Quiz Midterm Final"<<endl;
	cout<<"-------------------------------"<<endl;
	for (int i=0;i<numS;i++)
	{
		cout<<i+1<<setw(9)<<quiz[i]<<setw(9)<<Mid[i]<<setw(9)<<final[i]<<endl;
	}
	cout<<"-----------------------------"<<endl;
}
void ViewID(int &numS,int quiz[10],int Mid[10],int final[10])
{
	int id;
	cout<<"Input ID :";
	cin>>id;
	for (int i=0;i<numS;i++)
	{	if(id == i+1)
		{
			cout<<"------------------------------"<<endl;
			cout<<"StdID Quiz Midterm Final"<<endl;
			cout<<"-------------------------------"<<endl;
			cout<<i+1<<setw(9)<<quiz[i]<<setw(9)<<Mid[i]<<setw(9)<<final[i]<<endl;
			cout<<"-----------------------------"<<endl;
	
		}else
		{
			cout<<"Your ID is not found"<<endl;
		}
		
	}
}
	
	
	

