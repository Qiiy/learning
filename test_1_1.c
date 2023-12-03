#include <stdio.h>


//输入一个整数，判断是否为奇数
//int main(){
//    int num = 0;
//    scanf_s("%d",&num,sizeof (num));
//    if (num % 2 == 1 ){
//        printf("奇数\n");
//    }
//    else
//        printf("偶数\n");
//    return 0;
//}


//输入一个年龄，>=18岁就输出：成年，否则就输出：未成年
//int main() {
//    int age = 0;
//    scanf_s("%d", &age, sizeof(age));
//    if (age >= 18){
//        printf("成年\n");
//        printf("可以谈恋爱了\n");
//    }
//    else{
//        printf("未成年\n");
//        printf("不能谈恋爱\n");
//    }
//
//    return 0;
//}



//嵌套if，比如：要求输入一个整数，判断输  者负数.
//int main() {
//    int num = 0;
//    scanf_s("%d", &num, sizeof(num));
//    if (num == 0)
//        printf("输入的数字为“0”\n");
//    else {
//        if (num > 0)
//            printf("输入的数字为正数\n");
//        else {
//            printf("输入的数字为负数\n");
//        }
//    }
//
//    return 0;
//}


//输入一个整数，如果是正数，再判断是奇数还是偶数，并输出；如果不是正数则输出：非正数。
//int main() {
//    int num = 0;
//    scanf_s("%d", &num, sizeof(num));
//    if (num > 0){
//        if (num % 2 == 0)
//            printf("偶数\n");
//        else
//            printf ("奇数\n");
//    }
//    else
//        printf ("非正数\n");
//                return 0;
//}
//



//练习
//int main() {
//    int age = 0;
//    scanf_s("%d", &age, sizeof(age));
//    if (age < 18)
//        printf("少年\n");
//    else if (age <= 44)
//        printf("青年\n");
//    else if (age <= 59)
//        printf("中年\n");
//    else if (age <= 89)
//        printf("老年\n");
//    else
//        printf("老寿星\n");
//
//    return 0;
//}


//int main (){
//    int a = 0;
//    int b = 2;
//    if (a == 1){
//        if (b == 2)
//            printf ("hehe\n");
//    }
//    else
//        printf ("haha\n");
//
//    return 0;
//}
//


//int main() {
//    int a = 0;
//    scanf_s("%d", &a, sizeof(a));
//    if (3 == a)
//        printf("hehe\n");
//    else
//        printf("哈哈\n");
//    return 0;
//}

//int main (){
//    int age =10;
//    printf("请输入18到36之间的数字\n");
//    scanf("%d", &age, sizeof (age));
//    if (age >=18 && age <= 36 )
//        printf("青年\n");
//    else
//        printf("输入错误，请重新输入！");
//    return 0;
//}


//条件操作符
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf_s("%d", &a, sizeof(a));
//    b = a > 5 ? 3 : -3;
//    printf("%d\n", b);
//    return 0;
//}

//使用条件表达式实现找两个数中的最大值
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf_s("%d %d", &a, &b, 4, 4);
//    int m = (a > b ? a : b);
//    printf("%d\n", m);
//
//    return 0;
//}

//逗号表达式举例
//int main (){
//    int b = 0;
//    int c = 4;
//    int a = (a = 3, a + 3, b = c + 3, c = 2 * a + b);
//    printf("%d\n", a);
//    printf("%d\n", c);
//    return 0;
//}


//逻辑取反运算符“！”
//int main (){
//    int flag = 0;
//    scanf_s ("%d", &flag, sizeof(flag));
//    if (flag == 0)
//        printf ("do some thing\n");
//    if (!flag)
//        printf ("do some thing\n");
//
//    return 0;
//}

//int main (){
//    int flag = 0;
//    scanf_s("%d", &flag, 4);
//    if (!flag)
//    {
//        printf ("do something\n");
//    }
//    return 0;
//}


//与运算符
//int main() {
//    int month = 0;
//    scanf_s("%d", &month, 4);
//    if (month >= 3 && month <= 5)
//        printf("春季\n");
//    else
//        printf("输入错误，请重新输入！");
//
//    return 0;
//}

//或运算符
//int main(){
//    int month = 0;
//    scanf_s("%d", &month, 4);
//    if (month == 1 || month == 2 || month == 12)
//        printf(" 冬季\n");
//
//    return 0;
//}

//闰年的判断
//int main() {
//    int yeas = 0;
//    scanf_s("%d", &yeas, 4);
//    if (((yeas % 4 == 0) && (yeas % 100 != 0)) || (yeas % 400 == 0))
//        printf("闰年\n");
//    else
//        printf("不是闰年\n");
//    return 0;
//}


////短路测试
//int main(){
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    //i = ++a && ++b && d++;
//    i = ++a || ++b || d++;
//    printf ("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//    return 0;
//}


//switch语句与if语句对比
//输入任意一个整数值，计算除3之后的余数
//int main() {
//    int a = 0;
//    scanf_s("%d", &a, 4);
//    if (a % 3 == 0)
//        printf("余数等于0\n");
//    else if (a % 3 == 1)
//        printf("余数等于1\n");
//    else
//        printf("余数等于2\n");
//    return 0;
//}

//int main() {
//    int a = 0;
//    scanf_s("%d", &a, 4);
//    switch (a % 3) {
//        case 0:
//            printf("整除，余数为0\n");
//            break;
//        case 1:
//            printf("余数是1\n");
//            break;
//        case 2:
//            printf("余数是2\n");
//            break;
//
//    }
//    return 0;
//}


////输入一个1~7的数字，打印对应的星期几
//int main(){
//    int day = 0;
//    printf("请输入1~7的数字\n");
//    scanf_s("%d", &day, 4);
//    switch (day){
//        case 1:
//            printf("星期一\n");
//            break;
//        case 2:
//            printf("星期二\n");
//            break;
//        case 3:
//            printf("星期三\n");
//            break;
//        case 4:
//            printf("星期四\n");
//            break;
//        case 5:
//            printf("星期五\n");
//            break;
//        case 6:
//            printf("星期六\n");
//            break;
//        case 7:
//            printf("星期天\n");
//            break;
//        default:
//            printf("输入错误，请重新输入！");
//            break;
//    }
//    return 0;
//}

//int main() {
//    int day = 0;
//    printf("请输入1~7的数字\n");
//    scanf_s ("%d", &day, 4);
//    switch (day){
//        case 1:
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//            printf("工作日\n");
//            break;
//        case 6:
//        case 7:
//            printf("休息日\n");
//            break;
//        default:
//            printf("输入错误请重新输入\n");
//    }
//    return 0;
//}

