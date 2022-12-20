#include<iostream>
using namespace std;

char before(char x)
{
	int num = x ;
	char T = num ;
	if(num <= 91 && num > 48)
	{
		 num--;
		 if(num < 65)
		 {
			num += 26 ;
		 }
	
	}else 
		{
			num = 48 ;
		}
		T = num ;
		return T ;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
