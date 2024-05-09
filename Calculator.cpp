#include <iostream>
#include <cstdlib>
using namespace std;

<!-----My Calculator----->
int main()
{
	char op;
	double num1,num2;
	
	cout << "Enter the Operator ( +, -, *, /, % ) :"<<endl;
	cin >> op;
	
	cout << "Enter First Number :"<<endl;
	cin >> num1;
	
	cout << "Enter Second Number :"<<endl;
	cin >> num2;
	
	switch ( op )
	{
		case '+':
			cout << num1 <<" + " << num2 << " = "<<(num1+num2)<<endl;
			break;
			
		case '-':
			cout << num1 <<" - " << num2 << " = "<<(num1-num2)<<endl;
			break;
			
		case '*':
			cout << num1 <<" * " << num2 << " = "<<(num1*num2)<<endl;
			break;
			
		case '/':
			if(num2 !=0.0)
				cout << num1 <<" / " << num2 << " = "<<(num1/num2)<<endl;
			else 
				cout<<"Divided By Zero Situation";
			break;	
			
		default :
			cout << op << "is invalid Operator"<<endl;
	}
	
	
}
