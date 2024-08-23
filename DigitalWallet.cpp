#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool comp(const pair<int,int>&a, const pair<int,int>&b){
    return a.second<b.second;
    }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>>arr;
    for(auto i=0;i<n;i++){
        int c,d;
        cin>>c>>d;
        arr.push_back(make_pair(c,d));
    }
    int t;
    cin>>t;
    vector<pair<int,int>>v;
    vector<int>p;
    for(int i=0;i<t;i++){
        int r,q,s;
        cin>>r>>q>>s;
        v.push_back(make_pair(r,q));
        p.push_back(s);
    }
    int k=v.size();
    for(int i=0;i<k;i++){
        int from_user=v[i].first-1;
        int to_user=v[i].second-1;
        if(arr[from_user].second>=p[i]){
            arr[from_user].second-=p[i];
            arr[to_user].second+=p[i];
            cout<<"Success"<<"\n";
        }
        else
            cout<<"Failure"<<"\n";
    }
    sort(arr.begin(),arr.end(),comp);
    cout<<"\n";
    for(int i=0;i<n;i++)
        cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    return 0;
}
