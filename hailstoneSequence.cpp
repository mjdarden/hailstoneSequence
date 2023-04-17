#include <stdio.h>
#include <iostream>
using namespace std;

void getUserInput(int &num) {
  cout << "Please enter number greater than 0: \n";
  cin >> num;
  if (num <= 0) {
    cout << "Invalid input. ";
  }
}

void loop(int &num, int &count) {
  if (num % 2 == 0) {
    num = num / 2;
  }
  else {
    num = (num * 3) + 1;
  }
  count++;
  cout << count;
  cout << ". ";
  cout << num;
  cout << "\n";
}

int main() {
  int num = 0;
  int count = 1;
  while (num <= 0) {
    getUserInput(num);
  }
  cout << "Your number is: ";
  cout << num;
  cout << "\n here is the sequence: \n\n";
  cout << count;
  cout << ". ";
  cout << num;
  cout << "\n";
  while (num != 1) {
    loop(num, count);
  }
}