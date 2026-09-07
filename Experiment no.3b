#include<iostream>
#include<string>
using namespace std;


class SavingAcc {
private :
string AccHolderName;
int AccNumber;
double balance;
float interest;

public:
SavingAcc(string name, int accno, double bal, float inte)
{
AccHolderName=name;
AccNumber= accno;
balance=bal;
interest=inte;
}
void deposite(double amount) {
if (amount>0) {
balance += amount;
cout<<"Deposited $ : "<<amount<<endl;
}
}

void withdraw(double amount) {
if (amount>0&&amount<=balance) {
balance -= amount;
cout<<"Withdrawan $ : "<<amount<<endl;
}

else {
cout<<"Insuffient balance!!"<<endl;
}
}

void appin() {
double amount;
amount = balance*interest/100;
balance += amount;
cout<<"interest aplied $ : "<<amount<<endl;
}

void display() {
cout<<"------Saving Account Info------"<<endl;
cout<<"Account Holder Name : "<<AccHolderName<<endl;
cout<<"Account Number      : "<<AccNumber<<endl;
cout<<"Account Balance $   : "<<balance<<endl;
cout<<"Interest Rate %     : "<<interest<<endl;
cout<<"------ End of Saving Account Info------"<<endl;
}
};



class CheckingAcc {
private :
string AccHolderName;
int AccNumber;
double balance;
int TransactionFee;

public:
CheckingAcc(string name, int accno, double bal, float fee)
{
AccHolderName=name;
AccNumber= accno;
balance-bal;
TransactionFee=fee;
}
void deposite(double amount) {
if (amount>0) {
balance += amount;
cout<<"Deposited $ : "<<amount<<endl;
}
}

void withdraw(double amount) {
double total = amount+TransactionFee;
if (total<=balance) {
balance -= total;
cout<<"Withdrawan Amount + Transaction Fee $ : "<<total<<endl;
}

else {
cout<<"Insuffient balance!!"<<endl;
}
}




void display() {
cout<<"------Checking Account Info------"<<endl;
cout<<"Account Holder Name : "<<AccHolderName<<endl;
cout<<"Account Number      : "<<AccNumber<<endl;
cout<<"Account Balance $   : "<<balance<<endl;
cout<<"------ End of Checking Account Info------"<<endl;
}
};


int main() {
SavingAcc saving("Shreyash", 26, 1000, 10);
CheckingAcc checking("Sanskar", 29, 2000,20);
saving.display();
saving.deposite(500);
saving.withdraw(50);
saving.appin();
saving.display();

checking.display();
checking.deposite(500);
checking.withdraw(500);
checking.display();

return 0;
}
