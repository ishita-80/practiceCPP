#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={23,-7,12,-10,40,60};
int j=0;
    for(int i=0;i<arr.size()-1;i++){
       
            if((arr[i]<0 ) ){
                swap(arr[i],arr[j++]);

            }
        
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
