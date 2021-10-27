//prints the right triangle pattern
#include <iostream>

using namespace std;

int main()
{   int n;
    int i,j;
    cin>>n;
     for(i=0;i<n;i++)
     {
         for(int j=0;j<i;j++)
         {
             cout<<"*";
         }cout<<endl;
     }

    return 0;
}
