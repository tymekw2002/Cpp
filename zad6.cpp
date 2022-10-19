#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

	int PIN1 = stoi(argv[1]);
	int PIN;

	cout<<"Wpisz PIN: "<<endl;
	cin>>PIN;
	
	while(PIN!=PIN1)
	{
		cout<<"no nie mordeczko, sprobuj ponownie: "<<endl;
		cin>>PIN;
				
	}
	
		if(PIN==PIN1)
	{
		cout<<"smiga na elegancie"<<endl;	
		return 0;
	}

	
}