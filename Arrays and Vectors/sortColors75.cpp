// -------------> Leetcode 75  Sort  Colors <----------------------


///////////////////// Method 1 (Two Pass Method)

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         int noZ=0;
//         int noO=0;
//         int noT=0;
//         for(int i =0; i<n ;i++){
//             if(nums[i]==0) noZ++;
//             else if(nums[i]==1) noO++;
//             else noT++;
//         }
//          for(int i =0; i<n ;i++){
//             if(i<noZ) nums[i]=0;
//             else if(i<(noZ+noO)) nums[i]=1;
//             else nums[i]=2; 
            
//         }

//     }
// };


//////////////////// Method 2  Dutch Flag Algorithm


// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n  =nums.size();
//         int lo = 0;
//         int mid =0;
//         int hi = n-1;
//         while(mid<=hi){
//             if(nums[mid]==2){
//                 int temp = nums[mid];
//                 nums[mid]=nums[hi];
//                 nums[hi]=2;
//                 hi--;
//             }
//             else if(nums[mid]==0){
//                 int temp = nums[mid];
//                 nums[mid] = nums[lo];
//                 nums[lo]=0;
//                 lo++;
//                 mid++;
//             }
//             else mid++;
//         }

//     }    
// };
