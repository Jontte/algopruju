int modinv(int a, int m) {
    int r = m;
    int old_r = a;
    int s = 0;
    int old_s = 1;
    int t = 1;
    int old_t = 0;

    while (r != 0) {
        int q = old_r / r;
        int temp = s;
        s = old_s - q * s;
        old_s = temp;
        temp = t;
        t = old_t - q * t;
        old_t = temp;
        temp = r;
        r = old_r - q * r;
        old_r = temp;
    }

    return (old_s < 0) ? m + old_s : old_s;
}

