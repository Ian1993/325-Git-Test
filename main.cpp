//File: main.cpp
#include <iostream>

using namespace std;

int usersum(int n);

int main(){

  cout << "Hello World!" << endl;

  cout << "Input a number" << endl;

  int x;

  cin >> x;

  int y = usersum(x);

  cout << "Your Number's sum from 1 to " << x << " is: " << y << endl;

  
  
}

int usersum(int n){
  int z = 0;
  for(int i = 1; i <= n ; i++){

    z = z + i;
    
  }

  return z;
  
}
