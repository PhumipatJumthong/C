#include <iostream>
#include <string>
using namespace std;
int main() 
{ 
   char menu;
   float salary,sale,com=0,comis;
   string report;
   cout<<"*****Menu*****\n";
   cout<<"1.Input salary\n";
   cout<<"2.Input sale\n";
   cout<<"3.Report\n";
   cout<<"4.Exit\n";
    
   cout<<"Enter menu : ";
   cin >>menu;
    
   if (menu=='1')
   {
       cout<<"Input salary : ";
       cin>>salary;
        
   }else if(menu='2')
    
   {
   cout<<"Input sale : ";
   cin>>sale;
   {if(sale>=10000)
   com = 0.05;
   }else if(sale>10000<=20000)
   com = 0.10;
   {
   }else if(sale>20000)
   com = 0.15;
   {
   }else if(menu=='3')
    
   comis=sale*com;
   total =comis+salary;
   cout<<"salary "<<salary<<endl;
   cout<<"sale "<<sale<<endl;
   cout<<"comission "<<comis<<endl;
   cout<<"total "<<total<<endl;
   }else if(menu=='4')
    
   {
      cout<<"*****Exit******\n";
   }
   return(0);
}