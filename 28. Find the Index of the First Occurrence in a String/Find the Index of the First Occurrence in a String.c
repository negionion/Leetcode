int check(char* haystack, char* needle) {
    while (*needle != '\0' && *haystack!= '\0') {
        if (*haystack != *needle)
            return -1;
        needle++;
        haystack++;
    }
    if (*needle == '\0')
        return 0;
    return -1;
}

int strStr(char* haystack, char* needle) {
    int i;
    for (i = 0; *haystack != '\0'; i++) {
        if (!check(haystack, needle))
            return i;
        haystack++;
    }
    return -1;
}