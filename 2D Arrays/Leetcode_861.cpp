///////////////// Score after flipping matrix/////////////////////


// class Solution {
// public:
//     int matrixScore(vector<vector<int>>& grid) {
//         int rows=grid.size();
//         int cols=grid[0].size();
//         //Making the first column all 1's
//         for(int i=0;i<rows;i++){
//             if(grid[i][0]==0){
//                 //flip
//                 for(int j=0;j<cols;j++){
//                     if(grid[i][j]==0) grid[i][j]=1;
//                     else grid[i][j]=0;
//                 }
//             }
//         }
//         //flip the columns where no.of zeroes>no.of one's
//         for(int j=0;j<cols;j++){
//             int noint noO=0;Z=0;
//             
//             for(int i=0;i<rows;i++){
//                 if(grid[i][j]==0) noZ++;
//                 else noO++;
//             }
//             if(noZ>noO){//flip
//                 for(int i=0;i<rows;i++){
//                     if(grid[i][j]==0) grid[i][j]=1;
//                     else grid[i][j]=0;
//                 }
//             }
//         }
//         int sum=0;
//         for(int i=0;i<rows;i++){
//             int x=1;
//             for(int j=cols-1;j>=0;j--){
//                 sum+=grid[i][j]*x;
//                 x*=2;
//             }
//         }
//         return sum;
//     }
// };