#include <iostream>
using namespace std;
int main()
{
	int score;
    
    cout<<"input C++ score :";
	cin >> score;
	cout<<"you"<<((score>=50)? " pass ":" fail " ) <<"with score ="<<score<<endl;
	
	system("Pause");
	return (0);
}