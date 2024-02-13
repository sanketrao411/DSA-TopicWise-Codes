#include <bits/stdc++.h>
using namespace std;

int kthsmall(int n, int m, int k, vector<vector<int>> &mat)
{
    vector<int> ans(m*m);


    

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    

    return ans[k];
}

int main(){
    
    vector<vector<int>> mat = {{1,2,3},{4,5,6}};

    int n = 2;
    int m = 3;

    int k = 0;

    int ans = kthsmall(n, m, k, mat);

    cout << "Smallest is " << ans << endl;

    
    return 0;
} 