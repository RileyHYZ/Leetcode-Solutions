#include <vector>
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
        cout<<"1 "<<j<<endl;
        if(nums1[i]==nums2[j++]){
            intersection.push_back(nums1[i++]);
            cout<<"2 "<<j<<endl;
        } 
        else if(nums1[i]<nums2[j]){
            cout<<"3 "<<j<<endl;
            i++;
        }
        else{
            cout<<"4 "<<j<<endl;
            j++;
        } 
        cout<<"5 "<<j<<endl;
    }
    return intersection;
    
}
