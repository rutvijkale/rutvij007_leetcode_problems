class Solution {
public:
    int hIndex(vector<int>& c) {
        int n = c.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (c[mid] >= n - mid) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return n - low;
    }
};