#include <iostream>
using namespace std;

int main() {

  int n, reversed_number = 0, remainder;

  cout << "Ingresa un numero: ";
  cin >> n;

  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }

  cout << "Numero alreves = " << reversed_number;

  return 0;
}
