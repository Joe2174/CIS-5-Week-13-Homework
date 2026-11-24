#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

// Practice 13 · Part 1 — Joe Barron
// CIS 5 Week 13 · Word tools

string banner(const string& name) 
{
  return "Hello, " + name + "!";
}

string initials(const string& first, const string& last) 
{
  string out = "";
 
  if (!first.size()) 
  {
    out += first[0];
  }
 
  if (!last.size()) 
  {
    out += last[0];
  }
  return out;
}

int main() 
{
  string first, last;
  cout << "First: ";
  cin >> first;
  cout << "Last: ";
  cin >> last;

  string full = first + " " + last;
  cout << banner(full) << "\n";
  cout << "Length: " << full.size() << "\n";
  cout << "Initials: " << initials(first, last) << "\n";

  return 0;
}
