class Solution {
public:
    int merge(vector<int>& arr, const int low, const int mid, const int high)
    {
        int temp_leng = high - low + 1, temp_index = 0;
        vector<int> temp(temp_leng);
        int cnt = 0;

        // count
        for (int le = low, ri = mid+1; le <= mid; le++)
        {
            while (ri <= high && arr.at(le) > (2 * (long) arr.at(ri))) {
                ri++;
            }
            cnt += ri - mid - 1;
        }

        // merge
        int left = low, right = mid+1;
        while (left <= mid && right <= high)
        {
            if (arr.at(left) <= arr.at(right))
                temp[temp_index++] = arr.at(left++);
            else
                temp[temp_index++] = arr.at(right++);
        }

        // exhaust both halves
        while (left <= mid)
            temp[temp_index++] = arr[left++];
        while (right <= high)
            temp[temp_index++] = arr[right++];

        // overwrite
        for (int i = low, j = 0; i <= high; i++)
            arr[i] = temp[j++];
        
        return cnt;
    }

    int divide(vector<int>& nums, int low, int high) {
        if (low == high) return 0;
        int mid = (low + high) / 2;
        int cnt = 0;
        cnt += divide(nums, low, mid);
        cnt += divide(nums, mid+1, high);
        return cnt + merge(nums, low, mid, high);
    }

    int reversePairs(vector<int>& nums) {
        return divide(nums, 0, nums.size()-1);   
    }
};