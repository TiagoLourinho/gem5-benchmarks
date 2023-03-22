int main() {
    int array[100000], x = 0, jump = 16;
    for (int j = 0; j < jump; j++) {
        for (int i = j; i < 100000; i += jump) {
            array[i] = i;
        }
    }

    return 0;
}
