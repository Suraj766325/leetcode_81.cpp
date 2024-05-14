#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={8,10,2,3,5,7};
    int n=v.size(),l=0,r=n-1,mid,idx=-1,target=0,check=1;
    while(l<=r)
        {
            mid=l+(r-l)/2;
            if(target==v[mid]) 
            {
                idx=mid;
                break;
            }
            else if(v[mid]==v[r] && v[mid]==v[l])
            {
                l++;
                r--;
            }
            else if(v[mid]<=v[r])
            {
                if(target>=v[mid] && target<=v[r]) l=mid+1;
                else                               r=mid-1;
            }
            else
            {
                if(target>=v[l] && target<=v[mid]) r=mid-1;
                else                               l=mid+1;
            }
        }
        cout<<idx;
}
