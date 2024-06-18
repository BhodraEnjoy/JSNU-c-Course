#include<iostream>

using namespace std;

int main()
{

   char num1,num2;
   cin >> num1 >> num2;
   if((num1 >='a' && num1>= 'z') || (num1 >='A' && num1 <= 'Z' )|| num1=='_')
   {
      if((num2 >='a' && num2>= 'z') || (num2 >='A' && num2 <= 'Z' )|| num2=='_')
      cout <<"Yes"<<endl;
      else
      cout <<"No"<<endl;

   }
   else
   cout <<"No"<<endl;


}
