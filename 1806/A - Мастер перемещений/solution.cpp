#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin>>tc;
    
    while(tc--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        if(b<=d){
            if(c<=(a+d-b)){
                cout<<d-b+a+d-b-c<<"
";
            }
            else{
                cout<<-1<<"
";
            }
        }
        else cout<<-1<<"
";
    }
    
    return 0;
}