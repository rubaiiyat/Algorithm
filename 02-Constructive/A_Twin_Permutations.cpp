#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int arr2[n]={0};
        int num=n+1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i]+arr[j]==num)
                {
                    arr2[i]+=(arr[j]);
                }
                
            }
            
        }


        for(int val : arr2){
            cout<<val<<" ";
        }

        cout<<endl;
        
        
    }
    




    return 0;
}