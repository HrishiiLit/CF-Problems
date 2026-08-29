#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin>>tc;
    
    while(tc--) {
        int n;
        cin>>n;
        
        int total=0;
        int num;
        for(int i=0;i<n-1;i++){
            cin>>num;
            total+=num;
        }
        total*=-1;
        cout<<total<<"
";
        
    }
    
    return 0;
}