//----------------> Leetcode 42 Trapping Rain water

/////////////By using 3 arrays

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         int prev[n];
//         // Previous Greatest Element array 
//         prev[0]=-1;
//         int max = height[0];
//         for(int i=1;i<n;i++){
//             prev[i] = max;
//             if(height[i]> max) max = height[i];
//         }
//         //Next Greatest Element
//         int next[n];
//         next[n-1]=-1;
//         max=height[n-1];
//         for(int i = n-1;i>=0;i--){
//             next[i] = max;
//             if(height[i]> max) max = height[i];
//         }
//         //Minimum array
//         int mini[n];
//         for(int i=0;i<n;i++){
//             mini[i] = min(prev[i],next[i]);
//         }
//         //Calculating water
//         int water = 0;
//         for(int i =1;i<n-1;i++){
//             if(height[i]<mini[i]){
//                 water+=(mini[i]-height[i]);
//             }
//         }
//         return water;

//     }
// };




/////////By using Single array

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         int prev[n];
//         // Previous Greatest Element array 
//         prev[0]=-1;
//         int max = height[0];
//         for(int i=1;i<n;i++){
//             prev[i] = max;
//             if(height[i]> max) max = height[i];
//         }
//         //Next Greatest Element
//         prev[n-1]=-1;
//         max=height[n-1];
//         for(int i = n-1;i>=0;i--){
//             if(max<prev[i]){
//                 prev[i] = max;
//             }
//             if(height[i]> max) max = height[i];
//         }


//         //Calculating water
//         int water = 0;
//         for(int i =1;i<n-1;i++){
//             if(height[i]<prev[i]){
//                 water+=(prev[i]-height[i]);
//             }
//         }
//         return water;

//     }
// };