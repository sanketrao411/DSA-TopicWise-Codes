#include<bits/stdc++.h>
using namespace std;

int main() 
{
  int num;
  cin >> num;
  if(num >= 90){
    cout << "Grade A" << endl;
  } else if(num >= 70){
    cout << "Grade B" << endl;
  } else if(num >= 50){
    cout << "Grade C" << endl;
  } else if(num >= 35){
    cout << "Grade D" << endl;
  } else {
    cout << "Fail" << endl;
  }
  return 0;
}