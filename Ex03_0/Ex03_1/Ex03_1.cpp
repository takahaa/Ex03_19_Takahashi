// list4-3pre.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<iomanip>
#include"getBmi.h"
#include"getObesity.h"
using namespace std;

int main()
{
    const int STD_BMI = 22; // 標準BMI
    double height;      // 身長
    double weight;      // 体重
    double bmi = 0;     // bmi
    double stdWeight;   // 標準体重

    //キー入力をheightに格納する
    cout << "身長(cm)を入力してください";
    cin >> height;

    //キー入力をweightに格納する
    cout << "体重(kg)を入力してください";
    cin >> weight;

    // 標準体重を計算する
    stdWeight = STD_BMI * (height / 100) * (height / 100);

    //BMIを求める
    bmi = getBmi(height, weight);

    // bmiを画面に表示する
    cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;
    // 標準体重を画面に表示する
    cout << "あなたの標準体重は、" << stdWeight << "です" << endl;

    switch (getObesity(bmi))
    {
    case -1:
        cout << "低体重です。";
        break;

    case 0:
        cout << "普通体重です。";
        break;

    case 1:
        cout << "肥満(1度)です。";
        break;

    case 2:
        cout << "肥満(2度)です。";
        break;

    case 3:
        cout << "肥満(3度)です。";
        break;

    case 4:
        cout << "肥満(4度)です。";
        break;

    default:
        break;
    }

    int a;
    cin >> a;

    return 0;
}