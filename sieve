#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>s(1000001,1);
void sieve()
{
    s[0]=0;
    s[1]=0;
    int n=100000+1;
    for(int i=2;i*i<=n;i++)
    {
        if(s[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                s[j]=0;
            }
        }
    }
}
int main()
{
  int n;
  cin>>n;
  sieve();
  cout<<s[n];
}
