#include <iostream>
using namespace std;

class Palindromi {
private:
  int array[6];
  bool isPalindrom = true;

public:
  bool kontrolloPalindromi() {
    for (int i = 0; i < 6 / 2; i++)
      if (array[i] != array[6 - i - 1])
        isPalindrom = false;
    return isPalindrom;
  }

  void merVektorin(int hyrje[6]) {
    for (int i = 0; i < 6; i++) {
      array[i] = hyrje[i];
    }
  }

  void shfaqVektorin() {
    for (int i = 0; i < 6; i++) {
      cout << array[i] << endl;
    }
  }
};

int main() {
  Palindromi p;
  int hyrje[6];

  for (int i = 0; i < 6; i++) {
    cin >> hyrje[i];
  }

  p.merVektorin(hyrje);
  cout << "Vektori juaj eshte: " << endl;
  p.shfaqVektorin();
  cout << "Vektori juaj eshte: " << endl;
  if (p.kontrolloPalindromi())
    cout << "Palindrom" << endl;
  else
    cout << "Jo Palindrom" << endl;
}