#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    int idealOrder[n];
    queue <int> callOrder;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        callOrder.push(tmp);
    }
    for(int i = 0; i < n; i++) cin >> idealOrder[i];
    
    int timeUnit = -1;
    int index = 0;
    while(!callOrder.empty()){
        while(idealOrder[index] != callOrder.front()){
            int temp = callOrder.front();
            callOrder.pop();
            callOrder.push(temp);
            timeUnit++;
        }

        callOrder.pop();
        index++;
        timeUnit++;
    }
    cout << timeUnit << endl;
    return 0;
}
