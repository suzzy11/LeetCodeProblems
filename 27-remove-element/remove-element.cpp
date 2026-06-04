class Solution {
public:
    int removeElement(vector<int>& arr, int ele) {
        int count=0;
        for( int i=0;i<arr.size();i++){
            if(arr[i]!= ele){
                swap(arr[count],arr[i]);
                count++;
            }
            
        }
        return count;
        
    }
    
};