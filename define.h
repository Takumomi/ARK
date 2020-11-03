/*シミュレート条件*/
//----------------------------------------------------------------------------//
#define TYPE 2	                    //0:2段パラシュート展開, 1:1段目のみ展開, 2:弾道飛行落下, 3,最高高度での開傘
#define DT 0.01          			//微小時間(シミュレーションの精度に影響)	
#define SAMPLING_T 0.01				//サンプリング周期[sec]
#define MAX_WIND 7                  //最大風速
#define DEV 8                       //風向の数
#define T0 25.0       					//地上気温(2mで計測)

/*ランチャー関係*/
//----------------------------------------------------------------------------//
#define LAUNCHER_ANGLE deg_to_rad(17.0)	//ランチャー角[rad](Min 87.0)_z軸からの角度を採用
#define AZIMUTH_ANGLE deg_to_rad(0.0)	//打上方位角[rad]_磁東からの角度(反時計回りが正)
#define LAUNCHER_L 5.0     				//ランチャー長[m]

/*機体パラメータ*/
//----------------------------------------------------------------------------//
#define Length 2.145//2.18//実測//2.1775/*1.48*/                      //ロケット全長[m]
#define S 0.0064//実測 //0.006539/*0.016		*/					//ロケット縦断面積（上から見た断面積）[m^2]
#define S_2 0.206256/*0.253	*/					    //ロケット横断面積（横から見た断面積）[m^2]
#define Suf_area /*0.845*/                          //ロケット表面積　（ノーズを除く面積）[m^2]( ☆フィンは表裏の両面を)
#define M 5.095//実測//5.55/*6.5*/								//ロケット酸化剤充填時質量[kg](7.56)		
#define M_ 4.595//実測//4.9										//ロケット乾燥質量[kg]
#define distane_between_Cp_and_Cd  0.230//実測//0.135/*0.211*/          //(空力中心)-(重力中心) [m]  [(安定比)×(代表長さ)に一致する]

/*慣性テンソル[kg*m^2] (対称行列)*/
//----------------------------------------------------------------------------//
#define I_xx 2.56/*0.985*/						    //慣性テンソル[kg*m^2] (対称行列)
#define I_xy 0.0/*0.0*/
#define I_xz 0.00267//-0.000622129865/*0.0*/
#define I_yy 2.56/*0.985*/
#define I_yz 0.0/*0.0*/
#define I_zz 0.00606/*0.017*/

/*パラシュート関係*/
//----------------------------------------------------------------------------//
#define PARA_CD  1.1				    //パラシュートの抗力係数うふ
#define	PARA_S_1 0.5					//ドローシュート投影面積[m^2]あは
#define PARA_S_2 0					    //メインパラシュート投影面積[m^2]えへ
#define PARA_1_T 10.0					//ドローシュート開傘時間[sec] (点火後からの経過時間)うひょ
#define PARA_2_TIME	2.0					//メインパラシュート開傘時間[sec] (ドローシュート射出後からの経過時間)うへうへ
#define PARA_1_ERROR 1.0        		//動作からドローシュート展開までの誤差時間 [sec]いひひひ
#define PARA_2_ERROR 1.0				//動作からメインパラシュート展開までの誤差時間 [sec]

//#define ALPHA_ERROR 0.1               //ALPHAの係数
#define ENGINE_ERROR 0.80               //エンジン推力の誤差（倍）
//-----------------------------------------------------------------------------//



/*計算用定数設定*/
//-----------------------------------------------------------------------------//
#define Pa_AVE 101342.5		//基準大気圧(米本先生資料より) ＊単位は[Pa]に変更
#define Ra 287.05287		//空気の気体定数(米本先生資料より)

#define Ta_AVE 288.15		//基準大気温度(米本先生資料より) 

#define Cd 0.32/*0.33	*/			//抗力係数(進行方向)
#define Cd_2 0.5			//抗力係数（横方向）

#define Cn  5.22/*6.17*/              //法線力係数

#define Vic_static 0.000018 //空気の粘性係数
#define Vic_dynamic 0.00001635 //空気の動粘性係数

#define G 9.80665			//重力加速度
//-----------------------------------------------------------------------------//



#define MAX_HEIGHT(x, y) (x > y ? x : y)
#define MAX_VELOCITY(x,y) (x > y ? x : y)
#define MAX_DISTANCE(x,y) (x > y ? x : y)
#define TIME_DEVELOP(x,y) (x > y ? x : y)
#define deg_to_rad(x) ((x/180.0)*M_PI)
#define R_V_X 9
#define R_V_Y 10
#define R_V_Z 11
#define R_X 6
#define R_Y 7
#define R_Z 8
#define V_X 3
#define V_Y 4
#define V_Z 5
#define X 0
#define Y 1
#define Z 2


#define M_PI 3.1415	
#include "struct.h"