#include <iostream>
using namespace std;
class Bank {
private:
  string name;
  int account_No;
  int balance;

public:
  Bank(string name, int account_No, int balance) {
    this->name = name;
    this->account_No = account_No;
    this->balance = balance;
  }
  void check_balance() { cout << balance << endl; }

  void check_name() { cout << name << endl; }
  void deposite(int amount) { this->balance += amount; }

  void withdraw(int amount) {
    if (balance >= amount) {
      this->balance -= amount;
      cout << "withdraw" << endl;
    } else {
      cout << "can't withdraw " << endl;
    }
  }
};

int main() {

  Bank bank("jensi", 48816, 10000);

  bank.check_balance();
  bank.check_name();
  bank.deposite(3000);
  bank.check_balance();
  bank.withdraw(5000);
  bank.check_balance();

  return 0;
}
