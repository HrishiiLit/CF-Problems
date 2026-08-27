#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin>>tc;
    
    while(tc--) {
        string str;
        cin>>str;
        
        if(str.size()<11)
        {
            cout<<str<<"
";
        }
        else{
            cout<<str[0]<<str.size()-2<<str[str.size()-1]<<"
";
        }
    }
    
    return 0;
}