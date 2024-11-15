#include <stdio.h>
int main(void)
{
    int Taro,Hanako,Jiro;
    
    Taro=30; //torouの年齢
    Hanako=60; //hanakoの年齢
    Jiro=10; //jiroの年齢
    
    //変数と定数の比較
    if(Taro==30)
    printf("Taroは30歳です\n");
    if(Hanako !=20)
    printf("Hanakoは20歳ではありません\n");
    if(Hanako>=20)
    printf("Hanakoは20歳以上です\n");
    if(Jiro<20)
    printf("Jiroは20歳未満です\n");
    
    //変数と変数の比較
    
    if(Taro>Jiro)
    printf("TaroはJiroより年上です\n");
    if(Hanako>Taro)
    printf("HanakoはTaroより年上です\n");

    return 0;
}
