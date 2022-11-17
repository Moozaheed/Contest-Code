

    ///0 based index
    ///d1[i] = i center dhore koyta odd palindrome ase
    ///d2[i] = koyta even , 2 ta mider 2nd ta center
    void manacher() {
        int l = 0, r = -1;
        for(int i=0;i<n;i++) {
        int k = (i > r ? 1 : min(d1[l+r-i], r-i));
        while(i-k >= 0 && i+k < n && a[i-k] == a[i+k]) ++k;
        d1[i] = k--;
        if(i+k > r) l = i-k, r = i+k;
        }
        l = 0, r = -1;
        for(int i=0;i<n;i++) {
        int k = (i > r? 0: min(d2[l+r-i+1], r-i+1))+1;
        while(i-k >= 0 && i+k-1 < n && a[i-k] == a[i+k-1]) ++k;
        d2[i] = --k;
        if(i+k-1 > r) l = i-k, r = i+k-1;
        }
    }
