#include <iostream>
#include <string>
using namespace std;
void Order_String3(string s1,string s2,string s3)
{
    string temp;

       if (s1 > s2) {
           temp = s1;
           s1 = s2;
           s2 = temp;
       }

       if (s1 > s3) {
           temp = s1;
           s1 = s3;
           s3 = temp;
       }
       if (s2 > s3) {
           temp = s2;
           s2 = s3;
           s3 = temp;
       }

       cout << s1 << " " << s2 << " " << s3 << endl;
}
int main()
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;


	    Order_String3(s1, s2, s3);;
	return 0;
}
