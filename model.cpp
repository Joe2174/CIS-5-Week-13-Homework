#include <iostream>
#include <string>

using std::string;
using std::cout;

// Practice 13 · Part 2 — Joe Barron
// CIS 5 Week 13 · The struct your final needs

// TODO: rename this struct and its fields to fit your track.
struct Account 
{
  string name;
  double balance;
};

void printAccount(const Account& a) 
{
  // TODO: print every field on one line, then "\n"
	  cout << "Name: " << a.name << ", Balance: $" << a.balance << "\n";
}

int main() 
{
  // TODO: make two records with braces, then print both with your helper
  Account a1 = {"Ada", 50.25};
  Account a2 = {"Ben", 120.5};
  printAccount(a1);
  printAccount(a2);

  return 0;
}
