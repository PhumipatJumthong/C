#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length, const float Widht);
float Area(const float Base, const double High);
float Area(const double Base1,const double Base2,const double High);
int main()
{
	char Choice;
	bool Flag = true;
	do{
		DisplayMenu();
		cin >> Choice;
		if(Choice == '1'){
			float Radius;
			cout<<"\nEnter radius :";
			cin>>Radius;
			cout<<"Area of Clrcle ="<<fixed;
			cout<<setprecision(2)<<Area(Radius)<<endl;
		}
		else if(Choice == '2'){
			float Length,Widht;
			cout<<"Enter length and width :";
			cin>>Length>>Widht;
			cout<<"Area of Rectangle = "<<fixed;
			cout<<setprecision(2)<<Area(Length,Widht);
			cout<<endl;
		}
		else if(Choice == '3'){
			float Base;
			double High;
			cout<<"Enter Base and High :";
			cin>>Base>>High;
			cout<<"Area of Triangle = "<<fixed;
			cout<<setprecision(2)<<Area(Base,High);
			cout<<endl;
		}
		else if(Choice == '4'){
			double Base1,Base2,High;
			cout<<"Enter Base1 and Base2 :";
			cin>>Base1>>Base2;
			cout<<"Enter High :";
			cin>>High;
			cout<<"Area of Trapezoid = "<<fixed;
			cout<<setprecision(2)<<Area(Base1,Base2,High);
			cout<<endl;

		}
		else if(Choice =='5')Flag = false;
		else{
				cout<<"\nYou choose out of range is";
				cout<<"not process.\n";
		}
	}while(Flag);
	cout<<"\n...Exit Program...\n";
	system("pause");
	return 0;
}
float Area(const float Radius)
{	
	return(3.14159F*Radius*Radius);
}
float Area(const float Length,const float Widht)
{
	return(Length*Widht);
}
float Area(const float Base,const double High)
{
	return(0.5*Base*High);
}
float Area(const double Base1,const double Base2,const double High)
{
	return(0.5*Base1+Base2*High);
}
void DisplayMenu()
{
	cout<<endl;
	cout<<"Program Calculate Area"<<endl;
	cout << " 1. Clrcle" << endl;
	cout << " 2. Rectangle" << endl;
	cout << " 3. Triangle"<<endl;
	cout << " 4.Trapezoid"<<endl;
	cout << " 5. Exit" << endl;
	cout << "Enter your choose number: ";
}