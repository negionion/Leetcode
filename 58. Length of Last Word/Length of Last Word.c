int lengthOfLastWord(char* s) {
    int ans = 0, tmpAns = 0;
    while(*s != '\0') {
        if (*s == ' ') {
            if (ans > 0)
                tmpAns = ans;
            ans = 0;
        } else {
            ans++;
        }
        s++;
    }
    if (ans == 0)
        ans = tmpAns;
    return ans;
}