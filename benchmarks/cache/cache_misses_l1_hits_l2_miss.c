int main() {
    int array[100000], x = 0, jump = 16, k = 0, v = 0, w = 0;
    for (int j = 0; j < jump; j++) {
        for (int i = j; i < 100000; i += jump) {
            array[i] = i;

            k = k + 1;
            k = w - 1;
            k = k * w;
            w = v + 1;
            v = w + k;
            v++;
            w--;
            k = 1;
            v = 1;
            w = 1;
            k = k * v * w;
            w = (v - 2) % 2;

            k = k + 1;
            k = w - 1;
            k = k * w;
            w = v + 1;
            v = w + k;
            v++;
            w--;
            k = 1;
            v = 1;
            w = 1;
            k = k * v * w;
            w = (v - 2) % 2;

            k = k + 1;
            k = w - 1;
            k = k * w;
            w = v + 1;
            v = w + k;
            v++;
            w--;
            k = 1;
            v = 1;
            w = 1;
            k = k * v * w;
            w = (v - 2) % 2;

            k = k + 1;
            k = w - 1;
            k = k * w;
            w = v + 1;
            v = w + k;
            v++;
            w--;
            k = 1;
            v = 1;
            w = 1;
            k = k * v * w;
            w = (v - 2) % 2;
        }
    }

    return 0;
}
