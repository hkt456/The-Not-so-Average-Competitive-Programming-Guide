#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        string formula;
        cin>>formula;
        stack<char> st;
        for(int i=0; i<(int) formula.size(); i++){
            if('a'<=formula[i]&&'z'>=formula[i]){
                cout<<formula[i];
            }
            else if(formula[i]==')'){
                cout<<st.top();
                st.pop();
            }
            else if(formula[i]=='(') continue;
            else st.push(formula[i]);
        }
        cout<<endl;
    }
    return 0;
}