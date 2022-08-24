#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<stack>
#define md 1000000007
#define ll long long int
#define F first
#define S second
using namespace std;

int main(){
    int t=0,n=0,k=0;
    cin>>t;
    string s;
    while(t--){
        stack<char> st;
        cin>>n>>k;
        cin>>s;
        int i=0,j=k-1;
        while(i<=j){
            if(i==j)
                st.push(s[i]);
            else{
                st.push(s[i]);
                st.push(s[j]);
            }
            i++;
            j--;
        }
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
        for(int i=k;i<n;i++)cout<<s[i];
        cout<<"\n";
    }
    return 0;
}
