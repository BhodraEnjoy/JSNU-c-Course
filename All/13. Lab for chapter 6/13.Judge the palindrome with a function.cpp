#include<iostream>
using namespace std;
void Palindromes(int number)
{
	int s,t;
	if(number<100||number>1000) cout<<"The number inputed does not meet the requirements";
	else
	{
		int originalNumber = number;
		        int reversedNumber = 0;

		        while (number > 0) {
		            int digit = number % 10;
		            reversedNumber = reversedNumber * 10 + digit;
		            number /= 10;
		        }

		        if (originalNumber == reversedNumber)
		            cout << originalNumber << " is a palindrome" << endl;
		        else
		            cout << originalNumber << " is not a palindrome" << endl;

	}

}
int main()
 {
    int n;
	cin>>n;
	Palindromes(n);
	return 0;
}
