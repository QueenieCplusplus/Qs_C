// after 3 months of non-stop practice of progrming, this is a re-start to C, by Queenie

#include <stdio.h> //前置詞處理器 pre-processor

// 敘述句 statement 如同 java 需要以 ; 分號結尾 called semicolon

double circle(double d){ //定義函式

    const double fix_number = 3.1416; // 定義宣告常數
    return fix_number * d * d; // d 是變數，即方程式的參數

}


int main(){

    double r = 1.0, area = 0.0; // 變數均需先行宣告定義

    area = circle(r);

    printf(" Area of Circle \n\n"); // back slash to be empty line
    printf("%10.1f",area); // 10.1 means ______

    return 0;
}