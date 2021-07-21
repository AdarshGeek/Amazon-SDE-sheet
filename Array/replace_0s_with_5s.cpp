#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    // Convert the int to string data type
    // iterate over and change all 0's with 5's
    // return this string as integer
    string s = to_string(n);
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0') s[i]='5';
    }
    return stoi(s);
}
