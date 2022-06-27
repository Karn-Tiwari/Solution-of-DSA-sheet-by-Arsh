
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void Answer();

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while (t--)
	    Answer();
	return 0;
}

void Answer()
{
    int n,k,v;
    cin>>n>>k>>v;
    vector<int>ans(n);
    for(int i = 0;i<n; i++)
    {
        cin>>ans[i];
    }
    int sum = accumulate(ans.begin(),ans.end(),0);
    int KA = (v*(n+k)-sum);
    if(KA>0 && KA%k==0)
    {
        cout<<KA/k<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}