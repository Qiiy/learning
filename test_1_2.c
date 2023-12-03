#include<stdio.h>

//int main() {
//    while (1)
//        printf("呵呵\n");
//
//
//    return 0;
//}

//int main() {
//  i是循环变量
//    int i = 1;//循环初始化
//    while (i <= 10)//循环判断
//    {
//        printf("%d ", i);
//        i++;//循环调整
//
//    }
//
//    return 0;
//}

//int main() {
//    int n = 0;
//    scanf_s("%d", &n, 4);
//    while (n) {
//        printf("%d ", n % 10);
//        n = n / 10;
//    }
//    return 0;
//}

//int main(){
//    int a = 0;
//    for (a = 1; a <= 10; ++a){
//        printf("%d ", a);
//    }
//    return 0;
//}

//int main() {
//    int i = 0;
//    int sum = 0;
//    for (i = 1; i <= 100; i++) {
//        if (i % 3 == 0)
//            sum = sum + i;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

int main() {
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);


    return 0;
}