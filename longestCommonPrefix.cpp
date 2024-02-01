#include <iostream>
using namespace std;

class Solution{
    public :
    string longestCommonPrefix(string strs){
        string ans="";
        int n=strs.size();
        string min=strs[0];
        for(int i=1;i<n;i++){ //找到最小字符串
            if(strs[i].size()<min.size())
                min=strs[i];
        }


        for( int j=0;j<min.size();j++){  //比较
            {
                for(i=0;i<n;i++){

                    if(min[j]!=strs[m][j])
                    return ans;
                }
                ans=ans+min[j];
            }


        }
        return ans;
    }

};