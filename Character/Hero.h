#ifndef HERO_N_INCLUDE
#define HERO_N_INCLUDE



//英雄的发布上线时间
typedef struct myTime
{
    int year;
    int month;
    int day;

}myTime;


typedef struct Hero  //借助typedef关键字就无需再写struct关键字了
{
    char name[50];   //英雄名称
    char sex;        //性别
    char job[10];    //职业
    int life;        //生命值
    double atk_speed;//攻击速度
    char ability[20];    //特殊能力
    myTime pubTime;

}Hero;

void show();



#endif