#include<iostream>
#Incl

int curr_sum = 0;
int min_len = INT_MAX;
int start = 0;

for(int i =0;i<nums.size();i++){
    curr_sum+=nums[i];
    while(curr_sum>=target){
        min_len = min(min_len,i - start + 1);
        curr_sum-=nums[start++];
    }
}

if(min_len == INT_MIN){
    return 0;
}

return min_len;