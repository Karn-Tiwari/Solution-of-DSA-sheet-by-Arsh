// starting the solution
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int getGray(int n) {
        // code here
        return n^(n>>1);// msb taken as same and rest of element xoring with previous element
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.getGray(n) << endl;
    }
    return 0;
}  