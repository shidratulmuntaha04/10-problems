#include<bits/stdc++.h>
using namespace std;
int solve(int n, int m, int k, vector<int> &person, vector<int> &flat){
    sort(person.begin(), person.end());
    sort(flat.begin(), flat.end());
    int i=0, j=0, ans=0;
    while(i<n && j<m){
        if(abs(person[i]-flat[j]) <= k){
            ans++;
            i++;
            j++;
        }
        else if(person[i]<flat[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
int main(){
    vector<int> person = {60,45,80,60};
    vector<int> flat = {30, 60, 75};
    cout<<solve(4,3,5, person, flat);
}