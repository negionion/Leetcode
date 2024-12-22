#define INVAL 65535

int removeDuplicates(int* nums, int numsSize) {
    int cnt = 1;
    int i, inv = 0;
    int removeCnt = 0;
    int base = nums[0];

    for (i = 1; i < numsSize; i++) {
        if (nums[i] == base) {
            cnt++;
        } else {
            cnt = 1;
            base = nums[i];
        }
        if (cnt > 2) {
            nums[i] = INVAL;
            removeCnt++;

        } else {
            while (nums[inv] != INVAL && inv < i) {
                inv++;
            }
            if (inv < i) {
                nums[inv] = nums[i];
                nums[i] = INVAL;
            }
        }
    }
    return numsSize - removeCnt;
}