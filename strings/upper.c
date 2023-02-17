void upper(char s[]) {

    int i = 0;

    while (s[i]) {

        if ('a' <= s[i] && s[i] <= 'z') 
            s[i] = s[i] - 'a' + 'A';

        i++;
    }

}
