#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue; // it will just skip perticular number and further will continue
    }
    cout << i << "\n";
  }   
  return 0;
}

