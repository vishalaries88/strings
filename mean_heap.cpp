#include<iostream>
#include<vector>

using namespace std;
/*
struct Node
{
    int node_data;
    Node* l_child;
    Node* r_child;
    Node* parent ;    
};
*/
class MinHeap
{
        

    public:
        vector<int> minHeap;
    MinHeap(int data)
        {
            minHeap.push_back(data);            
        }
    int parent(int i);
    int r_child(int i);
    int l_child(int i);
    void delete_node(int data);
    void insert_node(int data);
    void swap(int i , int j);
    void heapify(int index);  
    void reorder(int parent);
};

int MinHeap::parent(int index)
{
         return (index-1)/2;    
}
int MinHeap::l_child(int index)
{
        return 2*index + 1;
}

int MinHeap::r_child(int index)
{
   return 2*index + 2;    
}

void MinHeap::heapify(int index)
{
 
}

void MinHeap::insert_node(int data)
{
    minHeap.push_back(data);   
    int i = minHeap.size()-1;
    while(i!=0 && minHeap[parent(i)]>minHeap[i])
    {
        swap(parent(i),i);
        i = parent(i);
    }     
}

void MinHeap::swap(int i , int j)
{
    int tmp = minHeap[i];
    minHeap[i] = minHeap[j];
    minHeap[j] = tmp;  

}

void MinHeap::delete_node(int index)
{
    minHeap[index]= 0;
    reorder(index);


}
void MinHeap::reorder(int parent)
{
    
    if(minHeap[r_child(parent)]==0 && minHeap[l_child(parent)]==0)
        return;
    else
    {
        if(minHeap[r_child(parent)] > minHeap[l_child(parent)])
        {
            swap(parent,l_child(parent));
            reorder(l_child(parent));
        }
        else
        {
            swap(parent,r_child(parent));
            reorder(r_child(parent));
        }
                        
    }
    
}

int main ()
{

MinHeap min_heap(9);

min_heap.insert_node(3);
min_heap.insert_node(5);
min_heap.insert_node(6);
min_heap.insert_node(8);
min_heap.insert_node(1);
for (auto it : min_heap.minHeap)
    cout<<"Node value is before "<<it<<endl;

min_heap.delete_node(1);


for (auto it : min_heap.minHeap)
    cout<<"Node value is "<<it<<endl;

//cout<<"Root data is "<<min_heap.root->node_data<<endl;
return 0;


}


