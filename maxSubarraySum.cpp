#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &arr){
    int ans = arr[0];
    for(int i=0; i<arr.size(); i++){
        int currentSum = 0;
        for(int j=i; j<arr.size(); j++){
            currentSum = currentSum + arr[j];

            ans = max(ans, currentSum);
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {2,3,-8,7,-1,2,3};
    cout<<solve(arr);
}