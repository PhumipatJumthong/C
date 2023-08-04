#include <iostream>
#include <string>
using namespace  std;
int main()
{
	int age;
	string gender;
	float h,w,bmi;

	cout<<"Enter Age : ";
	cin>>age;
	cout<<"Enter Gender : ";
	cin>>gender;
	cout<<"Enter Height : ";
	cin>>h;
	cout<<"Enter Weight : ";
	cin>>w;
	bmi =  w / (h/100 * h/100);
	cout<<"BMI : "<<bmi<<endl;
	

	    if((bmi >= 16)&&(bmi <18.5))
			cout<<"Underweight\n";
		else if (( bmi>= 18.6)&&(bmi <25))
			cout<<"Normal\n";
		else if (( bmi>= 26)&&(bmi <30))
			cout<<"Overweight\n";
		else if (( bmi>= 31)&&(bmi <40))
			cout<<"Obesity\n";
		
		
		return(0);

}