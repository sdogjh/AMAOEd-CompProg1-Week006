#include <iostream>

using namespace std;

int main() {
    float num1, num2, ans;

    cout << "Enter your 1st number:\n ";
    cin >> num1;
    cout << "Enter your 2nd number:\n ";
    cin >> num2;
    if(num2 != 0){
      ans = num1/num2;
    } else{
    cout << "Division is not possible\n";
    return ans;
    }
    cout << "The quotient is: " << ans << endl;
    return 0;



}
