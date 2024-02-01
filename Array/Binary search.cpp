#include<iostream>
using namespace std;

class Solution{
public:
    int search (int nums[],int target){
        for(int i=0;i<sizeof(nums);i++){
            if( nums[i] == target )
                return i;
        }
            return -1;

    }
};

int main(){
    int nums[3]={1,2,3};
        Solution a;
        a.search(nums,3);
        system("pause");
        return 0 ;
}