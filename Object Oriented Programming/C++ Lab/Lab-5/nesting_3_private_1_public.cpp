#include <iostream>
using namespace std;

class ATM
{
	private:
		int correctPIN=1234,enteredPIN;
	    float availableBalance=10000.0,withdrawalAmount;
	    
	    void PIN()
	    {
	    	cout<<"Enter PIN:";
	    	cin>>enteredPIN;
	    	if (enteredPIN==correctPIN)
	    	{
	    		cout<<"PIN Verified Successfully !"<<endl;
	    		checkBalance();
			}
			else
			{
				cout<<"Incorrect PIN , Transction Cancelled...."<<endl;
			}
		}
	    void checkBalance()
	    {
	    	cout<<"Available Balance:"<<availableBalance<<endl;
	    	withdraw();
		}
		void withdraw()
		{
			cout<<"Enter Amount to withdraw:";
			cin>>withdrawalAmount;
			if (withdrawalAmount<=availableBalance)
			 {
			 	availableBalance-=withdrawalAmount;
			 	cout<<"Collect Your Cash !"<<endl;
			 	cout<<"Remaining Balance:"<<availableBalance<<endl;
			 }
			else
			 {
			    cout<<"Insufficient Balance !"<<endl;	
			 } 
		}
	public:
	    void transction()
		{
			cout<<"...ATM Transction Started..."<<endl;
			PIN();
		}	
};
int main()
{
	ATM m1;
	m1.transction(); //Q3 put any private member function
	return 0;
}
