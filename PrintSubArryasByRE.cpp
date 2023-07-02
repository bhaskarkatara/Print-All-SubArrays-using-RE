
//print all subarrys with the help of RE
#include <iostream>
#include<vector>
using namespace std;

void solve(vector<int>&nums,int start,int end){
 
   // if when end reached out at the last,means
   // one cycle complete start++ and end = start
   if(end == nums.size()){
      start++;
     end = start;
   }

  //base case
   if(start == nums.size()){
    return;
   }

   for(int i = start;i<=end;i++){
     cout<<nums[i]<<" ";
   }
   cout<<endl;

   solve(nums,start,end+1);
}
int main() {
  vector<int>nums{1,2,3};
  solve(nums,0,0);
  return 0;
}
