
#include <iostream>

using namespace std;

int sum(int n){
  int numbies = 0;
  for(int i =0; i <= n; i++){
    numbies = numbies + i;
  }
  return numbies;
}

int mult(int n){
  int multies = 1;
  for(int i =1; i <= n; i++){
    multies = multies * i;
  }
  return multies;
}


int main() {

  int input;
  cout << "Please enter a number \n";
  cin >> input;
  
  cout << sum(input) << "\n";
  cout << mult(input) << "\n";
  
  return 0;
}
