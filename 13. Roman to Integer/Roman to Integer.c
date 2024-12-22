int decode(char s) {
    switch (s) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}

int romanToInt(char* s) {
    char prev = 0;
    int ans = 0;
    while (s[0] != '\0') {
        if (decode(prev) < decode(*s))
            ans += decode(*s) - (decode(prev) * 2);
        else
            ans += decode(*s);
        prev = *s;
        s++;
    }
    return ans;
}