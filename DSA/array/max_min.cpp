
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
    int n;
    cin>>n;
    vector<char>A(n-1);
    for(int i = 1; i<n; i++)
    {
        cin>>A[i-1];
    }
    char last = '0';// last element 0 hai ki nhi
    int count = A.back() == '0';// last element agar 0 ho gaya to ek peak element mill gaya aur usko count kar lenge
    for(int a:A)
    {
        if(last =='0' && a == '1'){//last zero and starting 1 to count badh jaeyga
            count++;
        }
        last = a;
    }
    cout<<count<<endl;
}