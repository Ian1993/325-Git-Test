//File: main.cpp
#include <iostream>

using namespace std;

int usersum(int n);

int userprod(int n);

int main(){

  cout << "Hello World!" << endl;

  cout << "Input a number" << endl;

  int x;

  cin >> x;

  int y = usersum(x);

  int q = userprod(x);

  cout << "Your Number's sum from 1 to " << x << " is: " << y << " the product is "<< q << endl;

  
  
}

int usersum(int n){
  int z = 0;
  for(int i = 1; i <= n ; i++){

    z = z + i;
    
  }

  return z;
  
}

int userprod( int n){

  int t = 1;

  for (int m = 1; m <= n; m++){

    t = t * m;

  }

  return t;

}
