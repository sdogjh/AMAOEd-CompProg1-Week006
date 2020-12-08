#include <iostream>

using namespace std;

int main() {
  int x;
  cout << "Please enter an integer: ";
  cin >> x;

  switch (x)
  {
    case 0:
      cout << "Hello World\n" ;
      break;
    case 1:
      cout << "I am Groot\n" ;
      break;
    case 2:
      cout << "To the Top\n"  ;
      break;
    case 3:
      cout << "Where is the Horizon\n" ;
      break;
    case 4:
      cout << "I do not know\n";
      break;
    default:
      cout << "Yeah, I will.\n" ;
      break;
  }
  return 0;
}
