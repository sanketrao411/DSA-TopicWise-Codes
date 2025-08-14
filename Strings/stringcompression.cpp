#include <bits/stdc++.h>
using namespace std;

void adding(vector<char>& chars,vector<char>& tempChar, int i, int j, int count)
{
    if(count == 1)
    {
        
        chars.push_back(tempChar[i]);
    }
    if(count > 1 && count < 10)
    {
        
        chars.push_back(tempChar[i]);

        char tempNum = '0' + count;
        chars.push_back(tempNum);
    }
    if(count >= 10 && count < 100)
    {
        
        chars.push_back(tempChar[i]);


        int tens = count / 10;
        char temptens = '0' + tens;
        chars.push_back(temptens);


        int unit = count % 10;
        char tempNum = '0' + unit;
        chars.push_back(tempNum);
    }
    if(count >= 100 && count < 1000)
    {
        
        chars.push_back(tempChar[i]);

        int hundred = count / 100;
        char temphundred = '0' + hundred;
        chars.push_back(temphundred);

        count = count % 100;

        int tens = count / 10;
        char temptens = '0' + tens;
        chars.push_back(temptens);

        count = count % 10;


        int unit = count / 1;
        char tempNum = '0' + unit;
        chars.push_back(tempNum);
    }
    if(count >= 1000 && count < 10000)
    {
        
        chars.push_back(tempChar[i]);

        int thousand = count / 1000;
        char tempthousand = '0' + thousand;
        chars.push_back(tempthousand);

        count = count % 1000;

        int hundred = count / 100;
        char temphundred = '0' + hundred;
        chars.push_back(temphundred);

        count = count % 100;

        int tens = count / 10;
        char temptens = '0' + tens;
        chars.push_back(temptens);

        count = count % 10;

        int unit = count / 1;
        char tempNum = '0' + unit;
        chars.push_back(tempNum);
    }

}

int compress(vector<char>& chars) {

        vector<char> tempChar = chars;
        chars.clear();
        int i = 0;
        int j = 0;
        int count = 1;
        while(j < tempChar.size())
        {
            if(tempChar[j] == tempChar[j+1])
            {
                count++;
                j++;
            }
            else
            {
                adding(chars, tempChar, i, j, count);
                j++;
                i = j;
                count = 1;
            }
        }             
        for (int i = 0; i < chars.size(); i++)
        {
            cout << chars[i] << " " ;
        }
        cout << endl;
        

        return chars.size();
    }

int main()
{

  vector<char> chars = {'a','b','c','a','a'};
//   vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','c','c','c'};
  // a = 1 b = 20 c = 3
  
//   vector<char> chars = {'a' , 'a', 'a', 'b', 'b', 'a', 'a'};
//    vector<char> chars;

//    chars.push_back('a');
//    for (int i = 0; i < 411; i++)
//    {
//       chars.push_back('b');
//    }
   

  int ans = compress(chars);

  cout << endl;

  cout << "Length : " << ans << endl;

  return 0; 
}