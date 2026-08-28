#include <iostream>

using namespace std;

int main()
{
  int input = 0;
  //cin >> input;
  cout << "Before loop: " << input << endl;

  //while loop 
  //while (input == 5) {
  // cout << "During Loop: " << input << endl;
  //input += 1;
  //}


  // for loop
  for (input = 0; input <= 5; input += 1) {
    cout << "In for loop: " << input << endl;
  }

  cout << "After Loop: " << input << endl;
    return 0;
}
