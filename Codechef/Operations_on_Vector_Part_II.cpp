#include <bits/stdc++.h>
using namespace std;

int mul(int x,int y){
            return (x*y);
        }

int main() 
{   int t;
    long long product;
	cin>>t;
	while(t--)
	{
	    int n;
        cin >> n;
        vector < long long > v(n);
        for (int i = 0; i < n; i++)
        {
           cin>>v[i];
        }
        
        long long second=0,next;
        long long p1=1,p2;
        for ( int i = 0; i < n; i++)
            {
                long long first = v[i];
                next=first+second;
                second=next;
                product = p1*next;
                p1=product;                 
            }

        cout<<product<<" ";        

        auto max = max_element(v.begin(),v.end()); 
        auto min = min_element(v.begin(),v.end());

        if ((product)%(*min)==0 && (product)%(*max)==0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
	}

}