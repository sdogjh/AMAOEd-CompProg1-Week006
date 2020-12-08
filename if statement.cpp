#include <iostream>

using namespace std;

int main() {
  int x;
  cout << "Please enter an integer: ";
  cin >> x;
  if (x == 0) {
    cout << "Hello World\n" ;
  } else if (x == 1) {
    cout << "I am Groot\n";
  } else if (x == 2) {
    cout << "To the Top\n" ;
  } else if (x == 3) {
    cout << "Where is the Horizon\n" ;
  } else if (x == 4) {
    cout << "I do not know\n" ;
  } else {
    cout << "Yeah, I will.\n";
  }
  return 0;

}
