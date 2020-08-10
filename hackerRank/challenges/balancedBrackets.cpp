#include <bits/stdc++.h>

using namespace std;

bool isMatch(char b1, char b2)
{
    if(b1 == '(' && b2 == ')') return true;
    if(b1 ==  '{' && b2 == '}') return true;
    if(b1 == '[' && b2 == ']') return true;

    return false;
}

// Complete the isBalanced function below.
string isBalanced(string s) 
{
    stack<char> st;
    bool balanced = true;
    int n = s.length();
    for(int i = 0; i < n; i++){
        char bracket = s[i];
        if(bracket == '(' || bracket == '{' || bracket == '[')
            st.push(bracket);
        else if(bracket == ')' || bracket == '}' || bracket == ']'){
            if( st.empty() ){
                balanced = false;
                break;
            }
            else if(!isMatch(st.top(), bracket)){
                balanced = false;
                break;
            }
            else{
                st.pop();
            }
            
        }
    }
    string res = ( balanced && st.empty() ) ? "YES" : "NO";
    return res;    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
