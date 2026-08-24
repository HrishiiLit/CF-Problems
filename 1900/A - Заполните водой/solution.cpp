#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin>>tc;
    
    while(tc--) {
        int empty=0,emp=0;
        int maxi=0;
        char ch;
        int n;
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            cin>>ch;
            if(ch=='.'){
                empty++;
                emp++;
            } 
            else empty=0;
            
            if(empty>maxi) maxi=empty;
        }
        
        if(maxi>2) cout<<2<<"
";
        else cout<<emp<<"
";
        
    }
    
    return 0;
}