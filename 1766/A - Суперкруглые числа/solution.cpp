#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin>>tc;
    
    while(tc--) {
        int num;
        cin>>num;
        int cnt=0;
        
            int temp = num;
            while(temp>=10)
            {
                temp/=10;
            }
            cnt = temp;
            num/=10;
            while(num>0)
            {
                cnt+=9;
                num/=10;
            }
            cout<<cnt<<"
";
    }
    
    return 0;
}