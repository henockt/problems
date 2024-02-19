class Solution {
public:
    void merge(vector<int>& arr, int low, int mid, int high) {
        int temp_size = high-low+1;
        vector<int> temp(temp_size);
        int temp_index = 0;
        int left = low, right = mid+1;

        while (left <= mid && right <= high)
        {
            if (arr[left] < arr[right])
                temp[temp_index++] = arr[left++];
            else
                temp[temp_index++] = arr[right++];
        }

        while (left <= mid)
            temp[temp_index++] = arr[left++];
        while (right <= high)
            temp[temp_index++] = arr[right++];

        for (int i = low, j = 0; i <= high; i++)
            arr[i] = temp[j++];
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if (low == high) return;
        int mid = (low + high) / 2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid+1, high);
        merge(nums, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;    
    }
};