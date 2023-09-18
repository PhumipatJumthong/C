#include <iostream>
#include <string>
using namespace std;
int main()
{
	int score[4],total = 0,max = 0,min=0;
	string name[4];
	for(int i=0;i<4;i++)
	{
		cout<<"Name["<<i<<"]:";
		cin>>name[i];
		cout<<"Score["<<i<<"]:";
		cin>>score[i];
		
	}
	cout<<"----------------"<<endl;
	cout<<"Name		Score"<<endl;
	cout<<"----------------"<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<name[i]<<"\t\t"<<score[i]<<endl;
		total = total+score[i];
		if (score[i] > max)
			max = score[i];
		else(score[0] <= min);
			min = score[0];


	}
	cout<<"-------------"<<endl;
	cout<<"Total	= "<<total<<endl;
	cout<<"Average	= "<<(float)total/4<<endl;
	cout<<"Max score="<<max<<endl;
	cout<<"Min score="<<min<<endl;
	system ("pause");
	return 0;
}
