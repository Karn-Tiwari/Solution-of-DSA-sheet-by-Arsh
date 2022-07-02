// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void add_to_vector(vector<int> &A,int x);


void sort_vector_asc(vector<int> &A);


void reverse_vector(vector<int> &A);

int size_of_vector(vector<int> &A);

void sort_vector_desc(vector<int> &A);

void print_vector(vector<int> &A);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		vector<int> A;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				int x;
				cin>>x;
				add_to_vector(A,x);
			}
			if(c=='b')
			{
				sort_vector_asc(A);
			}
			if(c=='c')
			{
				reverse_vector(A);
			}
			if(c=='d')
			{
				cout<<size_of_vector(A)<<" ";
			}
			if(c=='e')
			{
				print_vector(A);
				
			}
			if(c=='f')
			{
				sort_vector_desc(A);
			}
			
		}
cout<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete below methods*/

/*inserts an element x at 
the back of the vector A */
void add_to_vector(vector<int> &A,int x)
{
	//Your code here
	A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A)
{
	//Your code here
	sort(A.begin(),A.end());
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A)
{
	//Your code here
   reverse(A.begin(),A.end());
}

/*returns the size of the vector  A */
int size_of_vector(vector<int> &A)
{
	//Your code here
	A.size();
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A)
{
	//Your code here
	sort(A.rbegin(),A.rend());
	
}

/*prints space separated 
elements of vector A*/
void print_vector(vector<int> &A)
{
	//Your code here
	for(int x: A)
	cout<<x<<" ";
}
//stl implementation


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void push(stack<int> &s,int x);
int pop(stack<int> &s);

int getSize(stack<int> &s);

int getTop(stack<int> &s);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		stack<int> s;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				int x;
				cin>>x;
				push(s,x);
			}
			if(c=='b')
			{
				cout<<pop(s)<<" ";
			}
			if(c=='c')
			{
				cout<<getSize(s)<<" ";
			}
			if(c=='d')
			{
				cout<<getTop(s)<<" ";
			}
		
		
		
		}
cout<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete below methods*/

/*the function pushes an element
x into the stack s */
void push(stack<int> &s,int x)
{
    //Your code here
    s.push(x);
}

/*pops the top element of the
stack and returns it */
int pop(stack<int> &s)
{
    //Your code here
    if(s.size()>0)
    {
    int temp = s.top();
    s.pop();
    return temp;
    }
    else
    return -1;
}
/*returns the size of the stack */
int getSize(stack<int> &s)
{
   //Your code here
   return s.size();
}

/*returns the top element 
of the stack */
int getTop(stack<int> &s)
{
   //Your code here
    if(s.size()>0)
    {
        return s.top();
    }
    
    else
    return -1;
}
//stack implementation in stl