#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin>>tc;
    
    int min=100000;
    
    for(int i=0;i<tc;i++)
    {
        int num;
        cin>>num;
        if(num<0)num*=-1;
        if(min>num) min = num;
    }
    cout<<min;
    
    return 0;
}