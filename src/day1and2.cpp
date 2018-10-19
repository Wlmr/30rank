#include <iostream>
#include <iomanip>
#include <limits>


using namespace std;

int day1() {
  int i = 4;
  double d = 4.0;
  string s = "HackerRank ";
  typedef numeric_limits< double > dbl;
  cout << fixed << setprecision(2);
  int i1;
  double d1;
  string s1;
  cin >> i1;
  cin >> d1;
  cin.ignore();
  getline(cin,s1);
  cout << i + i1 << endl; 
  cout << d + d1 << endl;
  cout << s + s1 << endl;
  return 0;
}

// ------------------------------------------

#include <bits/stdc++.h>


// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
  cout << round(meal_cost + (meal_cost/100)*tip_percent + (meal_cost/100)*tax_percent) << endl;
}

int day2()
{
  double meal_cost;
  cin >> meal_cost;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int tip_percent;
  cin >> tip_percent;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int tax_percent;
  cin >> tax_percent;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  solve(meal_cost, tip_percent, tax_percent);

  return 0;
}

// -----------------------------------------

