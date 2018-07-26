#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



void swap(int *a , int *b)
{
    int tmp = *a;
    *a = *b;
    *b = temp;
}
int partition(vector<int> &nums , int low , int high)
{
    int pivot = nums[high];
    int i = low;
    
    for(int j = low; j<high;j++)
    {
        if(nums[j]<=pivot)
        {
            i++;
            swap(&nums[i],&nums[j]);
        }
    }
}
void quick_sort(vector<int> &nums)
{
    int index = partition(nums ,0, nums.size()-1);
    partition(nums, 0,index-1);    
    partition(nums, index+1,nums.size()-1);

}
int main()
{
    vector<int> nums = {3,5,1,7,6,2,9,4,8};
}
