#include<iostream>

using namespace std;

int adiff(int a, int b){
  int A ,B ,c;
  A = a%360;
  B = b%360;
  c = A - B;
  if(c < 0){
    c = c*(-1);
  }
  if(c > 180){
    c = 360 - c;
  }else if (c == 360){
   c = 0;
  }
  return c;
}

int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244);

  return 0;
}
