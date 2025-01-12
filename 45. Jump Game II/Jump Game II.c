int jump(int* nums, int numsSize) {
    int i = 0, farthest = 0, current = 0, cnt = 0;
    for (i = 0; i < numsSize - 1; i++) {
        farthest = (farthest >= (nums[i] + i)) ? farthest : (nums[i] + i);
        if (i == current) {
            cnt++;
            current = farthest;
        }
    }
    return cnt;
}