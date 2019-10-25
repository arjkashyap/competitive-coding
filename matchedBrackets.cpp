#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    int n, maxDepth = 0, depthPos = 0, maxSeq = 0, seqPos = 0;
    int b_index = 0;
    cin >> n;
    stack < int > s;
    for( int i = 0; i < n; i++ ){
        int bracket;
        cin >> bracket;
        if( bracket == 1 ){
            if( s.empty() )
                b_index = i;
            s.push(bracket);
            int depth = s.size();
            if( depth > maxDepth ){
                maxDepth = depth;
                depthPos = i + 1;
            }
        }
        else{
            s.pop();
            if( s.empty() ){
                if( i - b_index > maxSeq ){
                    maxSeq = (i - b_index) + 1;
                    seqPos = b_index + 1;
                }
                b_index = 0;
            }

        }
    }
    cout << maxDepth << " " << depthPos << " ";
    cout << maxSeq << " " << seqPos << endl;
    return 0;
}
