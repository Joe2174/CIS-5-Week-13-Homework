#include <iostream>
#include <string>

using std::string;
using std::cout;

// Practice 13 · Part 2 — Joe Barron
// CIS 5 Week 13 · The struct your final needs

struct Student 
{
  string name;
  double balance;
};

void printStudent(const Student& s) 
{
	  cout << "Name: " << s.name << ", Balance: $" << s.balance << "\n";
}

int main() 
{
  Student a1 = {"Ada", 50.25};
  Student a2 = {"Ben", 120.5};
  printStudent(a1);
  printStudent(a2);

  return 0;
}
