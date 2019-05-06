/*************************************************************************
	> File Name: 0.shuzu.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年05月04日 星期六 16时50分10秒
 ************************************************************************/

#include <stdio.h>

//int func_1(int *a) {//a是型参   //把整型变量看成数组*a=*(a+0)=a[0]=^(&a[0])=(&a[0])[0]
//  printf("sizeof(*a) = %lu\n", sizeof(a));
//  return 0;
//}
//函数传数组只能省略一维
int func_2(int (*a)[200][300]) {//方便进行校验
//    a[2][3]= *(*(a + 2) + 3) =*(a[2] + 3) =  *(*(&a[0] + 2) + 3)= (a[2] + 3)[0]= (a+2)[0][3] = (*(a + 2) + 3)[0]
    return 0;
}

int main() {
    int arr[100][200][300];
    //func_2(arr);
    printf("&arr[0] = %p arr = %p\n", &arr[0], arr);
    printf("arr + 1 = %p arr + 2 = %p\n", arr + 1, arr + 2);
    char *p = (char *)arr;
    printf("p + 1 = %p p + 2 = %p\n", p + 1, p + 2);
    printf("sizeof(arr) = %lu\n", sizeof(arr));
//    func_1(arr);
//    func_2(100, arr);//func(&n)实参
    //a[1] != arr[1];
    return 0;
}
