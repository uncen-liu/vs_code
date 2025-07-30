#include "Hero.h"
#include <stdio.h>

// //英雄的发布上线时间
// typedef struct myTime
// {
//     int year;
//     int month;
//     int day;

// }myTime;


// typedef struct Hero  //借助typedef关键字就无需再写struct关键字了
// {
//     char name[50];   //英雄名称
//     char sex;        //性别
//     char job[10];    //职业
//     int life;        //生命值
//     double atk_speed;//攻击速度
//     char ability[10];    //特殊能力
//     myTime pubTime;

// }Hero;

Hero heros[] = {
  {
   .name = "影流之主",
   .sex = 'm',
   .job = "刺客",
   .life = 579,
   .atk_speed = 0.644,
   .ability = "位移",
   .pubTime = {
    .year = 2012,
    .month = 8,
    .day = 15
   }

  },

  {
   .name = "仙女",
   .sex = 'f',
   .job = "法师",
   .life = 482,
   .atk_speed = 0.644,
   .ability = "减速,治疗",
   .pubTime = {
    .year = 2010,
    .month = 9,
    .day = 20
   }

  },
  {
   .name = "剑豪",
   .sex = 'm',
   .job = "战士",
   .life = 517,
   .atk_speed = 0.69,
   .ability = "护盾,位移",
   .pubTime = {
    .year = 2013,
    .month = 12,
    .day = 23
   }

  }
};

void show()
{
  //如何知道结构数组的大小呢
  int count = sizeof(heros)/sizeof(Hero);
  //printf("hero的个数:%d",len);
  printf("请输入名称:");  
  scanf_s("%s",heros[0].name);
  //fgets(heros[0].name, sizeof(heros[0].name), stdin);   //更改名称
  for (int i = 0; i < count; i++)
  {
    printf("%s\t%s\t%d-%d-%d\n",
      heros[i].name,  
      heros[i].job,
      heros[i].pubTime.year,
      heros[i].pubTime.month,
      heros[i].pubTime.day);
  }
  

}