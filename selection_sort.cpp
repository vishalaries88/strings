#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void swap(int * i , int *j)
{
    int x = *j;
    *j=*i;
    *i=x;
}
int selection_sort(vector<int>& vec)
{
    for(int i = 0 ;i<vec.size()-1;i++)
    {
        int min =i;
        for (int j = i+1;j <=vec.size()-1;j++)
        {
            if(vec[min] > vec[j])
                min = j;
        }
    swap(&vec[i],&vec[min]);
    }

}
int main()
{
    vector<int> vec ={3,1,55,22,0,33,31,54,16,20};
    for(auto it : vec)
        cout<<it<<",";
    cout<<endl;
    
    selection_sort(vec);
        for(auto it : vec)
        cout<<it<<",";
    cout<<endl;
    
    
    
}
