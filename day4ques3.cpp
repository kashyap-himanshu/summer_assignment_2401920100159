class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
          vector<int> hima;

        int high = 0;
        int low = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while (high <= low && left <= right) {

            for (int j = left; j <= right; j++) {
                hima.push_back(matrix[high][j]);
            }
            high++;

           
            for (int i = high; i <= low; i++) {
                hima.push_back(matrix[i][right]);
            }
            right--;

            
            if (high <= low) {
                for (int j = right; j >= left; j--) {
                    hima.push_back(matrix[low][j]);
                }
                low--;
            }

            
            if (left <= right) {
                for (int i = low; i >= high; i--) {
                    hima.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return hima;
    }
};
