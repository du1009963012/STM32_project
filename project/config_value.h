#ifndef _CONFIG_VALUE_H
#define _CONFIG_VALUE_H
/******************************************
ȫ�ֱ���ͳһ����λ��

****************************************************/
int location;
int position;
int offset_x;
int offset_y;

/**************************
����λ��
*********************************/
int people_step;
int people_left;
int people_rigth;
int people_on;
int people_down;
int people_face;

/********************
С��λ��
**********************/
int car_step;
int car_left;
int car_rigth;
int car_on;
int car_dows;

/*******************
GPS����
***********************/
u32 GPS_start;
u32 GPS_staut;
bool GPS_ENABLE;
u32 GPS_starting_num;
u32 GPS_position_N;
u32 GPS_positon_E;
u32 GPS_position_S;
u32 GPS_position_W;//GPSλ��W
u32 GPS_Hight;//GPS�߶�λ��
u32 GPS_Time;//GPS����
#endif