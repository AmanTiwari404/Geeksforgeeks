//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++
class Solution {
  public:
    vector<int> twoRepeated (int arr[], int n) {
      vector<int>v;
        int m = n+1;
        for (int i = 0; i < n+2; i++) {
            arr[arr[i] % m - 1] += m;
            if ((arr[arr[i] % m - 1] / m) == 2){
                v.push_back(arr[i] % m);
            }
        }
        return v; 
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends