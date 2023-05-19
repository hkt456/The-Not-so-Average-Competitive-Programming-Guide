#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0) break;
        int a[n],i,k;
        for(i=0;i<n;i++) cin>>a[i];
        stack <int> st;
        int f=0,j=1;
        for(i=0;i<n;i++)
        {
            st.push(a[i]);
            while(st.size())
            {
                if(st.top()==j)
                {
                    j++;
                    st.pop();
                }
                else
                break;
            }
        }
        if(st.size()>0) cout<<"no";
        else cout<<"yes";
    }
    return 0;

}
