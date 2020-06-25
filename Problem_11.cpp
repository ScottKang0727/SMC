/* 
The purpose is to calculate the maximum area.
The pair of points start at the right and the left end, and they shift to the center.
Since the bottom gets smaller, and the height should be higher than the previous one 
to the next area have the possibility of being greater than the previous area.   
Since the lower bar determines the height, we need to move on the lower bar.
*/

#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int area = 0;
        int maxArea = 0;
        
        int lower_bar = 0;
        int left = 0;
        int right = height.size()-1;
        
        while(left<right){
                
                if(height[left] < height[right]){
                    lower_bar = height[left];
                    area = (right-left)*lower_bar;
                    left++;
                }
                else if(height[left] > height[right]){
                    lower_bar = height[right];
                    area = (right-left)*lower_bar;
                    right--;
                }
                else{
                    lower_bar = height[left];
                    area = (right-left)*lower_bar;
                    left++;
                    right--;
                }
                
                if(area>maxArea){
                    maxArea = area;
                }
        }
            
        return maxArea;
    }
};
