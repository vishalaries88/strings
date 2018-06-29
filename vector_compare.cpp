#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class student
{
public:
	string name;
	int age;
	student(string name,int age)	
	{
		this->name = name;
		this->age  = age;
	}

};

 
class compare{
public:
    bool operator()(const student& lhs, const student& rhs){
        return lhs.age < rhs.age;
    }
};
int main() {
    vector<student> v;
    student s1("AAA",20);
    student s2("BBB",12);
    v.push_back(s1);
    v.push_back(s2);
        
    cout << "Before Sorting: \n";
    for(int i=0; i<v.size() ; ++i){
        cout << v[i].name << " ";
    }
    cout << endl;
    cout << "After Sorting: \n";
    
    sort(v.begin(), v.end(), compare());
    
    for(int i=0; i<v.size(); ++i){
        cout << v[i].name << " ";
    }
}
