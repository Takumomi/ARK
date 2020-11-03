#include "define.h"
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <direct.h>
#include <stdlib.h>	//exit関数


#ifdef GLOBAL_INSTANCE
#define GLOBAL 
//#define GNUPLOT_PATH "C:/PROGRA~2/gnuplot/bin/gnuplot.exe"

#else
#define GLOBAL extern
#endif


#include "function.h"


/*変数宣言部*/
GLOBAL double landing_time;
GLOBAL double g_max_height;
GLOBAL double max_distance_x;
GLOBAL double max_distance_y;
GLOBAL double max_distance_x_t;
GLOBAL double max_distance_y_t;
GLOBAL double max_distance_x_f;
GLOBAL double max_distance_y_f;
GLOBAL double max_distance_x_r;
GLOBAL double max_distance_y_r;
GLOBAL double max_velocity;
GLOBAL double max_time;
GLOBAL double WIND_DEG;
GLOBAL double WIND_ABS;
GLOBAL double PARA_1_TIME;

/*構造体変数宣言部*/
GLOBAL Wind_data Wind;

/*推力関係*/
//GLOBAL double data[266/*450*/];
GLOBAL double ThrustTimeStamp[512];
GLOBAL double Thrust[512];
GLOBAL int ThrustCount;
GLOBAL int ThrustIndex;