#include <bits/stdc++.h>
using namespace std;

int main()
{

  string str = "This is a String ";
  int size = str.length();

  cout << str << endl;

  for (int i = 0; i < size; i++)
  {
    if (str[i] == ' ')
    {
       str[i] = '%';
       str.insert(i+1, "2");
       str.insert(i+2, "0");
       
    }
  }

  cout << str << endl;

  return 0; 
}