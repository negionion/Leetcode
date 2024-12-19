int majorityElement(int* nums, int numsSize) {
    int major = nums[0], cnt = 0, i = 0;
    while (i < numsSize) {
        (major == nums[i]) ? cnt++ : cnt--;
        if (cnt <= 0) { 
            major = nums[i];
            cnt = 1;
        }
        i++;
    }
    return major;
}