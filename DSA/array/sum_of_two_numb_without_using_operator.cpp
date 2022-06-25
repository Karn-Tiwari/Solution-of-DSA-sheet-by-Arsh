
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	// taking 32 bit mask in hexadecimal format 0xAAAAAAAA and each A = 1010 and each 5 = 0101 
    	// taking for unchanged the odd bit in even opereation and viceversa
    	// and shifting so we can regain its position 
    	// and | operator gives answer
    	unsigned int odd_place,even_place;
    
    	even_place = n&0xAAAAAAAA;
    	odd_place = n&0x55555555;
    	even_place = even_place>>1;
    	odd_place = odd_place<<1;
    	return odd_place|even_place;
    }
};



int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}  