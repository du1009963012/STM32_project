#ifndef _CONFIG_VALUE_H
#define _CONFIG_VALUE_H
/******************************************
全局变量统一声明位置

****************************************************/
int location;
int position;
int offset_x;
int offset_y;

/**************************
人体位置
*********************************/
int people_step;
int people_left;
int people_rigth;
int people_on;
int people_down;
int people_face;

/********************
小车位置
**********************/
int car_step;
int car_left;
int car_rigth;
int car_on;
int car_dows;

/*******************
GPS参数
***********************/
u32 GPS_start;
u32 GPS_staut;
bool GPS_ENABLE;
u32 GPS_starting_num;
u32 GPS_position_N;
u32 GPS_positon_E;
u32 GPS_position_S;
u32 GPS_position_W;//GPS位置W
u32 GPS_Hight;//GPS高度位置
u32 GPS_Time;//GPS星历
#endif