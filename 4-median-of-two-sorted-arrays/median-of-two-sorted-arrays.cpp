class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> lista;
        int i = 0;
        int j = 0;
        while(nums1.size() > i && nums2.size() >j){
            if(nums1.at(i) < nums2.at(j)){
                lista.push_back(nums1.at(i));
                i++;
            }
            else{
                lista.push_back(nums2.at(j));
                j++;
            }
        }
        while(i < nums1.size()){
            lista.push_back(nums1.at(i));
            i++;
        }
        while(j < nums2.size()){
            lista.push_back(nums2.at(j));
            j++;
        }
        int total = i+j;
        if(total % 2 != 0){
            int z = total/2;
            return lista.at(z)/1.0;
        }else{
            int z = total/2;
            int x = total/2 -1;
            return (lista.at(z) + lista.at(x)) / 2.0;
        }
    }
};