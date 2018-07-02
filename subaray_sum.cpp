#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> find_sub_array(vector<int> vec, int target)
{
        sort(vec.begin(),vec.end());
                for (auto i : vec)
                cout<<"Value is"<<i<<endl<<endl<<endl;

	vector <int> res;
        int i=0,sum=0;
        int start = i;
        int end = start;
        int j = vec.size()-1;
        while(end<vec.size()-1 && vec[end]<=target)
        {

		cout<<"sum is "<<sum<<"start = "<<start<<" end= "<<end<<endl;
                if(target > sum)
		{
                        sum = sum+vec[++end];
		}
                else if (target < sum)
                        {
				
                                if (end==0)
                                        return vec;
                                else
                                        sum = sum - vec[++start];
                        }
                if(target == sum)
                        {
                                res.push_back(start);
                                res.push_back(end);
				break;
                        }

        }
        return res;



}


int main()

{

	vector<int> vec ;
	for (auto i =0;i<10;i++)
		{
			vec.push_back(rand() % 100);
		}

	auto res = find_sub_array(vec,246);
	if(res.size()==0)
		cout<<"No sub array found "<<endl;
	else
		{
			cout <<"size of result array  is "<<res.size()<<endl;
			for (i:res)
				cout<< "Index value is "<<i<<endl;
		}

}



