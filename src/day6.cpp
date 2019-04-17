#include <cmath>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int nbrOfLines;
  cin >> nbrOfLines;
  char line, even, odd;
  even = odd = "";
  while (cin >> line) {
    for (int i = 0; i < strlen(line) - 1; i =+ 2) {
      strcat(even,line[i]);
      strcat(odd,line[i+1]);
      cout << even + " " + odd << endl;
    }
  }
  return 0;
}
