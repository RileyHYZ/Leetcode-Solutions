#include <vector>
#include <iostream>
using namespace std;
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> intersection;
    if(nums1.size()==0||nums2.size()==0) return intersection;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int i=0,j=0;
    while(i<nums1.size()){
        if(nums1[i]<nums2[0]) i++;
        else break;
    }
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]==nums2[j]){
            j++;
            intersection.push_back(nums1[i++]);
        } 
        else if(nums1[i]<nums2[j]) i++;
        else if(nums1[i]>nums2[j]) j++;
    }
    return intersection;
    
}

int main(){
    int myints[] = {32,71,12,45,26,80,53,33};
    std::vector<int> myvector (myints, myints+8);
    int a[] = {1,3,2};
    vector<int> ab(a,a+3);
    int b[] = {1,3};
    vector<int> bb(b,b+2);
    vector<int> out=intersect(ab,bb);
    for(int i=0;i<out.size();i++){
        cout<<out[i]<<endl;
    }
}
