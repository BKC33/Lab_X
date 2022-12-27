#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double loan,per,per2y;
	cout << "Enter initial loan: ";
	cin>> loan;
	cout << "Enter interest rate per year (%): ";
	cin>> per;
	cout << "Enter amount you can pay per year: ";
	cin >> per2y;


	double PrevBalance,Interest,Total,Payment,NewBalance ;
	PrevBalance = loan;
	Payment = per2y;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	for(int i=0;i>=0;i++){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1+i; 
	cout << setw(13) << left << PrevBalance;

	Interest = PrevBalance*(per/100);
	cout << setw(13) << left << Interest;

	Total = PrevBalance+Interest;
	cout << setw(13) << left << Total;

	if(Total<Payment) Payment =Total;
	cout << setw(13) << left << Payment;

	NewBalance = Total-Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
	PrevBalance = NewBalance;
	if(NewBalance <= 0) break;
	
	}
	return 0;
}
