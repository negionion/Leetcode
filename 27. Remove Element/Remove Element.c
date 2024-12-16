int removeElement(int* nums, int numsSize, int val) {
    int i;
    for (i = numsSize - 1; i >= 0; i--) {
        if (nums[i] == val) {
            nums[i] = nums[numsSize - 1];
            numsSize--;
        }
    }
    return numsSize;
}