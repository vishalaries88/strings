#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary_search(vector<int> vec,int l , int r,int num)
{

if(r>=1){
    int mid = l + (r - l)/2;
    if (vec[mid] ==num)
        return mid;
     if(vec[mid] < num)
    {
        return binary_search(vec, mid+1, r,num);
    }
     if (vec[mid] > num)
    {
        return binary_search(vec, l, mid-1,num);
    }
    
    }
return -1;

}
int main()
{
    vector<int> vec ={3,1,55,22,0,33,31,54,16,20};
    sort(vec.begin(),vec.end());
    for(auto it : vec)
        cout<<it<<",";
    cout<<endl;
    
    cout <<"Element pressent at "<<binary_search(vec,0 , vec.size()-1, 31)<<endl;
    
    
    
}
