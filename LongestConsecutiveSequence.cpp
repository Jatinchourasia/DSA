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


// o(n2) 


int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
  
  sort(arr.begin(),arr.end());
  maxLen = 1;
  sequence =1;
  for(int i = 0; i<arr.size();i++){
      if(arr[i]==arr[i-1]+!)sequence++;
      else if(arr[i]==arr[i-1])continue;
      else sequence=1;

      maxLen = max(maxLen, sequence)
  }
  return maxLen;
}


// o(n) using unordered set

#include<bits/stdc++.h>
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int> box;
        int ans = 1;
    
    for(int i=0;i<n;i++){
        box.insert(arr[i]);
    }
    
    for(int i=0;i<n;i++){
 
       int start = arr[i];
//         if start not exist in box it will return end value of box thats what find return
        if(box.find(start-1) != box.end())continue;
        while(box.find(start) != box.end()){
            start++;
        }
        ans = max(ans,start-arr[i]);
        
    }
    return ans;
   
    
}
