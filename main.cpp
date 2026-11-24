#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

// Practice 13 · Part 1 — Joe Barron
// CIS 5 Week 13 · Word tools

string banner(const string& name) 
{
  // TODO: return "Hello, " + name + "!"
  return "Hello, " + name + "!";
}

string initials(const string& first, const string& last) 
{
  string out = "";
  // TODO: if first.size() > 0, add first[0] to out
  if (first.size() > 0) 
  {
    out += first[0];
  }
  // TODO: if last.size() > 0, add last[0] to out
  if (last.size() > 0) 
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
  // TODO: print banner(full)
  // TODO: print "Length: " and full.size()
  // TODO: print "Initials: " and initials(first, last)
  cout << banner(full) << "\n";
  cout << "Length: " << full.size() << "\n";
  cout << "Initials: " << initials(first, last) << "\n";

  return 0;
}
