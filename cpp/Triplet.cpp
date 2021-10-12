#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n =5,k =6;
    
    
    int a[n] = {1,2,3,4,5};
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    sort(a,a+n);
    
   for(int i=0;i<n-2;i++)
        {
            
            int l =i+1;
            int r = n-1;
          while(l<r)
        {
            
            
            if(a[i]+a[l]+a[r]==k)
            {
            cout<<a[i]<<" "<<a[i]<<" "<<a[r]<<end;
           
            }
            
            else if(a[i]+a[l]+a[r]>k)
            r--;
            else
            l++;
        }
     }
cout<<"Not Present"<<endl;

return 0;
}

