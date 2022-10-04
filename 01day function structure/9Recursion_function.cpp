#include <iostream>
using namespace std;

//This function return int type value
int sum(int k) {
  if (k > 0) {
    //call function by itself
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}
