#include <bits/stdc++.h>
using namespace std;

void toolong(){
    int n;
    cin >> n;
    vector<string> answers;

    vector<string> s(n);
    for (int i=0; i<n; i++){
        cin >> s[i];
    }

    for (int i =0; i< n; i++ ){
        int length = s[i].size();
        if (length > 10){
            string result = string(s[i][0]+ to_string(length-2)+ s[i].back());
            answers.push_back(result);
       }
       else{
        answers.push_back(s[i]);
       }
    }

    for (string ans : answers) {
    cout << ans << "\n";
    }

}

int main () {
    toolong();
    return 0;

}