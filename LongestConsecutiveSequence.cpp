// BruteForce

bool findNumber (int num , vector<int> &arr){
    for(int a:arr){ //o(n)
        if(a == num)return true;
    
    }
        return false;
    
}
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    int ans = 0;
    for( int i = 0 ; i < n ; i++){   //o(n)
    int start = arr[i];
        while(findNumber(start,arr)){ 
            start++;
        }
        ans = max(ans,start - arr[i]);
    }
    return ans;
}