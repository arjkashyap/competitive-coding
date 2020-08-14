#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) 
{
    int valCount = 0;
    int level = 0;          // sea level
    for(int i = 0; i < s.length(); i++)
    {
        int prevLevel = level;
        level = ( s[i] == 'D' ) ? level - 1 : level + 1;
        if( prevLevel < 0 && level == 0) valCount++;

    }
    return valCount;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
