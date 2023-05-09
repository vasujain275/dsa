class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int freq[1000]={0};
        for(int i=0;i<size;i++){
            int count=0;
            for(int j=0;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
        }
    }
};