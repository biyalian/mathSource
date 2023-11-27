
void PrintAllnPr(int arr[],int n,int r, int depth) {
    int static count = 0;
    static int nowNumbers[] = { 0,};
    for (int index = 0; index < n; index++) {
        nowNumbers[depth] = arr[index];
        if (r > depth+1) {
            PrintAllnPr(arr,n,r,depth+1);
        }
        else if (IsSame(nowNumbers,r) == 0) {
            for (int index = 0; index < r; index++) {
                printf("%d ", nowNumbers[index]);
                count++;
            }
            printf("\n");
        }
    }
}

int IsSame(int arr[],int len) {
    for (int repeat = 0; repeat < len; repeat++) {
        for (int index = repeat+1; index < len; index++) {
            if (arr[repeat] == arr[index]) {
                return 1;
            }
        }
    }
    return 0;
}
