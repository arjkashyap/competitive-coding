#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        unordered_map<int, int> map;
        int count = 0;
        string arr;
        cin >> arr;
        int size = arr.length(); 
        for(int i = 0; i < size; i++){
            if( arr[i] == '1' ){
                // 1 not present in map
                if(map.find(arr[i]) == map.end()){
                    map[arr[i]] = i;
                }
                // 1 is present
                else{
                    int index = -1;
                    index = map['1'];
                    count += i - index - 1;
                    map['1'] = i;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}
