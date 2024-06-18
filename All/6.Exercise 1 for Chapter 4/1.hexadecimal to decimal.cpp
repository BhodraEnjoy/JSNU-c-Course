#include<iostream>

using namespace std;

int main()
{

   char hex;
   cin >> hex;
   if(hex >='0' && hex <='9')
    cout <<hex-'0';
   else if(hex >='a' && hex <='f')
   cout <<hex-'a'+10;
   else if(hex >='A' && hex<='F')
   cout <<hex-'A'+10;
   return 0;
   }
