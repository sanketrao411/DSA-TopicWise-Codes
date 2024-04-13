// #include<bits/stdc++.h>
// using namespace std;

// string solve(string str, int n)
// {

//     if(n <= 2)
//     {
//         return "NO";
//     }
       
//     int oneCount = 0;
//     int zeroCount = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if(str[i] == '1')
//             oneCount++;
//         if(str[i] == '0')
//             zeroCount++;
//     }
//     if(oneCount == n)
//     {
//         return "YES";
//     }
        
//     if(zeroCount == n)
//     {
//         return "YES";
//     }
//     if(oneCount % 2 != 0) 
//     {
//         return "NO";
//     }
//     else
//     {
//         int s = 0;
//         int e = n / 2;

//         while(s < n/2)
//         {
//             if(str[s] == str[e])
//             {
//                 s++;
//                 e++;
//             }
//             else
//             {
//                 return "NO";
//             }
//         }
//     }
    

//     return "YES";
    
// }

// int main() 
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         string str;
//         cin >> str;
//         string ans = solve(str, str.length());
//         cout << ans << endl;
//     }
    
//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        // Check if there's more than one '1' in the string
        size_t pos = s.find("11");
        
        if (pos == string::npos || pos == n - 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}

