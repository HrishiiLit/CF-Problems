#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin>>tc;
    
    while(tc--) {
        int points=0;
        char ch;
        
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cin>>ch;
                if(ch=='X'){
                    if(i==0 || j==0 || i==9 || j==9) points+=1;
                    else if(i==1 || j==1 || i==8 || j==8) points+=2;
                    else if(i==2 || j==2 || i==7 || j==7) points+=3;
                    else if(i==3 || j==3 || i==6 || j==6) points+=4;
                    else if(i==4 || j==4 || i==5 || j==5) points+=5;
                }
            }
        }
        
        cout<<points<<"
";
    }
    
    return 0;
}