#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[200005];
    stack<int> candidates;
    for(int i=1; i<=n; i++) cin>>arr[i];
    candidates.push(0);
    for(int i=1; i<=n; i++){
        while(!candidates.empty()){
            int pos= candidates.top();
            if(arr[pos]>=arr[i]){
                candidates.pop();
            }
            else{
                cout<<pos<<" ";
                break;
            }
        }
        candidates.push(i);
    }
    return 0;
}