#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    int p, a, b, qa, qb;      
    int sat = 0, cost = 1;
    cin >> p;               // budget
    cin >> a >> b;          // pine and prune Cost
    cin >> qa >> qb;      // quantity of pine and prune
    
    stack<int> pine, prune;
    
    cost = (qa*a + qb*b);

    for( int i = 0; i < qa; i++ ){ 
        int tmp;
        cin >> tmp;
        pine.push(tmp);
        sat += tmp;
    }

    for( int i = 0; i < qb; i++ ){ 
        int tmp;
        cin >> tmp;
        prune.push(tmp);
        sat += tmp;
    }
    int index = 0;
    while( cost >= p ){
        if( pine.top() < prune.top() ){
            sat -= pine.top();
            pine.pop();
            cost -= qa;
            
        }
        else{
            sat -= prune.top();
            prune.pop();
            cost -= qb;
        
        }
    }
    cout << sat << endl;
    return 0;
}
