#ifndef _DEFINE_H
#define _DEFINE_H





#define ONOFF_STATE_EEPROM  100

#define ON  1
#define OFF 0
#define relay1off  OFF   //1     Relay1 = off
#define relay1on   ON   //2	   Relay1 = on
#define relay2off  OFF   //3	   Relay2 = off
#define relay2on   ON   //4     Relay2 = on




#define STRIKE_1 1
#define STRIKE_2 2
#define STRIKE_3 3
#define STRIKE_4 4
#define STRIKE_5 5
#define STRIKE_6 6
#define STRIKE_7 7
#define STRIKE_8 8
#define STRIKE_9 9
#define STRIKE_10 10


#define TICKTOCK_STATE_EEPROM_R1 101
#define TICKTOCK_STATE_EEPROM_R2 102
#define TICKTOCKOFF 255
#define TICKTOCK1_1  1
#define TICKTOCK1_2  2
#define TICKTOCK1_3  3
#define TICKTOCK1_4  4 
#define TICKTOCK1_5  5
#define TICKTOCK2_1  1
#define TICKTOCK2_2  2
#define TICKTOCK2_3  3
#define TICKTOCK2_4  4
#define TICKTOCK2_5  5

//Ring EEprom
#define RingEEprom 108
//eeprom master...........
//M  0  9  2  1  1  7  1  0  1  1  4
//0  1  2  3  4  5  6  7  8  9  10  11
#define EE_MASTER_SECTION_MD 		    0
#define EE_MASTER_SECTION_1 		    1
#define EE_MASTER_SECTION_12_end    12

//eeprom slave...............
// A  0  9  2  1  1  7  1  0  1  1   4   5==state
//13  14 15 16 17 18 19 20 21 22 23  24  25  26  27  28  29  30  31 ->A
//32 33 34 35 36 37 38 39 40 41  42  43  44  45  46  47  48  49  50->B
//51 52 53 54 55 56 57 58 59  60  61 62  63  64  65  66  67  68 69->C
//70 71 72 73 74 75 76 77  78  79 80  81  82  83  84  85  86  87 88->D
//89 90 91 92 93 94 95 96  97  98 99  100 101 102 103 104 105 106 107->E


#define EE_SLAVE_A   		 				13
#define EE_SLAVE0_1   		  		14
#define EE_SLAVE0_24_END    		25//14+11
#define EE_SLAVE_A_State_byt1   26
#define EE_SLAVE_A_State_byt2   27
#define EE_SLAVE_A_State_byt3   28
#define EE_SLAVE_A_State_byt4   29
#define EE_SLAVE_A_State_byt5   30
#define EE_SLAVE_A_State_byt6   31
#define EE_SLAVE_A_State_byt7   32




// B   0   9   2   1   1   7   1   0   1   1   4
// 33  34  35  36  37  38  39  40  41  42  43  44
#define EE_SLAVE_B   		        33
#define EE_SLAVE1_1   		  	  34 
#define EE_SLAVE1_43_END    	  44//34+10
#define EE_SLAVE_B_State_byt1   45
#define EE_SLAVE_B_State_byt2   46
#define EE_SLAVE_B_State_byt3   47
#define EE_SLAVE_B_State_byt4   48
#define EE_SLAVE_B_State_byt5   49
#define EE_SLAVE_B_State_byt6   50
#define EE_SLAVE_B_State_byt7   51

// C   0   9   2   1   1   7   1   0   1   1   4
// 52  53  54  55  56  57  58  59  60  61  62  63
#define EE_SLAVE_C   		        52
#define EE_SLAVE2_1   		  	  53
#define EE_SLAVE2_62_END        63//53+10
#define EE_SLAVE_C_State_byt1   64
#define EE_SLAVE_C_State_byt2   65
#define EE_SLAVE_C_State_byt3   66
#define EE_SLAVE_C_State_byt4   67
#define EE_SLAVE_C_State_byt5   68
#define EE_SLAVE_C_State_byt6   69
#define EE_SLAVE_C_State_byt7   70

// D   0   9   2   1   1   7   1   0   1   1   4
// 71  72  73  74  75  76  77  78  79  80  81  82
#define EE_SLAVE_D   		        71
#define EE_SLAVE3_1   		  	  72
#define EE_SLAVE3_81_END    	  82//72+10
#define EE_SLAVE_D_State_byt1   83
#define EE_SLAVE_D_State_byt2   84
#define EE_SLAVE_D_State_byt3   85
#define EE_SLAVE_D_State_byt4   86
#define EE_SLAVE_D_State_byt5   87
#define EE_SLAVE_D_State_byt6   88
#define EE_SLAVE_D_State_byt7   89

// E   0   9   2   1   1   7   1   0   1   1    4
// 90  91  92  93  94  95  96  97  98  99  100  101

#define EE_SLAVE_E   		    		90
#define EE_SLAVE4_1   		  		91
#define EE_SLAVE4_100_END    		101//10+91
#define EE_SLAVE_E_State_byt1   102
#define EE_SLAVE_E_State_byt2   103
#define EE_SLAVE_E_State_byt3   104
#define EE_SLAVE_E_State_byt4   105
#define EE_SLAVE_E_State_byt5   106
#define EE_SLAVE_E_State_byt6   107
#define EE_SLAVE_E_State_byt7   108


// F    0    9    2    1    1    7    1    0    1    1    4
// 109  110  111  112  113  114  115  116  117  118  119  120
#define EE_SLAVE_F   		    		109
#define EE_SLAVE5_1   		  		110
#define EE_SLAVE5_120_END    		120//110+10
#define EE_SLAVE_F_State_byt1   121
#define EE_SLAVE_F_State_byt2   122
#define EE_SLAVE_F_State_byt3   123
#define EE_SLAVE_F_State_byt4   124
#define EE_SLAVE_F_State_byt5   125
#define EE_SLAVE_F_State_byt6   126
#define EE_SLAVE_F_State_byt7   127

// G    0    9    2    1    1    7    1    0    1    1    4
// 128  129  130  131  132  133  134  135  136  137  138  139

#define EE_SLAVE_G   		    		128
#define EE_SLAVE6_1   		  		129
#define EE_SLAVE6_140_END    		139
#define EE_SLAVE_G_State_byt1   140
#define EE_SLAVE_G_State_byt2   141
#define EE_SLAVE_G_State_byt3   142
#define EE_SLAVE_G_State_byt4   143
#define EE_SLAVE_G_State_byt5   144
#define EE_SLAVE_G_State_byt6   145
#define EE_SLAVE_G_State_byt7   146

// H    0    9    2    1    1    7    1    0    1    1    4
// 147  148  149  150  151  152  153  154  155  156  157  158

#define EE_SLAVE_H   		    		147
#define EE_SLAVE7_1   		  		148
#define EE_SLAVE7_150_END    		158		
#define EE_SLAVE_H_State_byt1   159
#define EE_SLAVE_H_State_byt2   160
#define EE_SLAVE_H_State_byt3   161
#define EE_SLAVE_H_State_byt4   162
#define EE_SLAVE_H_State_byt5   163
#define EE_SLAVE_H_State_byt6   164
#define EE_SLAVE_H_State_byt7   165


// I    0    9    2    1    1    7    1    0    1    1    4
// 166  167  168  169  170  171  172  173  174  175  176  177


#define EE_SLAVE_I   		    		166
#define EE_SLAVE8_1   		  		167
#define EE_SLAVE8_150_END    		177
#define EE_SLAVE_I_State_byt1   178
#define EE_SLAVE_I_State_byt2   179
#define EE_SLAVE_I_State_byt3   180
#define EE_SLAVE_I_State_byt4   181
#define EE_SLAVE_I_State_byt5   182
#define EE_SLAVE_I_State_byt6   183
#define EE_SLAVE_I_State_byt7   184

// J    0    9    2    1    1    7    1    0    1    1    4
// 185  186  187  188  189  190  191  192  193  194  195  196



#define EE_SLAVE_J   		    		185
#define EE_SLAVE9_1   		  		186
#define EE_SLAVE9_160_END    		196
#define EE_SLAVE_J_State_byt1   197
#define EE_SLAVE_J_State_byt2   198
#define EE_SLAVE_J_State_byt3   199
#define EE_SLAVE_J_State_byt4   200
#define EE_SLAVE_J_State_byt5   201
#define EE_SLAVE_J_State_byt6   202
#define EE_SLAVE_J_State_byt7   203
//----------------------------------------------------------------------


//#define ACCESS_SLAVE_R1_1  11// R1 	On/Off
//#define ACCESS_SLAVE_R1_2  12//	R1  strick*
//#define ACCESS_SLAVE_R1_3  13//	R1  strick/on/off*
//#define ACCESS_SLAVE_R1_4  14//	R1  TickTock-
//#define ACCESS_SLAVE_R1_5  15// R1  TickTock/on/Off
//#define ACCESS_SLAVE_R1_6  16// R1  TickTock/Strick*
//#define ACCESS_SLAVE_R1_7  17// R1  TickTock/Strik/On/Off*

//#define ACCESS_SLAVE_R2_1  21//R2 	ON/OFF
//#define ACCESS_SLAVE_R2_2  22//R2 	Strick*
//#define ACCESS_SLAVE_R2_3  23//R2		Strick/on/off*
//#define ACCESS_SLAVE_R2_4  24//R2 	TickTock
//#define ACCESS_SLAVE_R2_5  25//R2 	TickTock/onOFF
//#define ACCESS_SLAVE_R2_6  26//R2   TickTock/Strick*
//#define ACCESS_SLAVE_R2_7  27//R2  	TickTock/Strick/OnOff*


//#define ACCESS_SLAVE_R1__R2_1  31//R1,2 	On/Off
//#define ACCESS_SLAVE_R1__R2_2  32//R1,2   Strick*
//#define ACCESS_SLAVE_R1__R2_3  33//R1,2   Strick/Onoff*
//#define ACCESS_SLAVE_R1__R2_4  34//R1,2		TickTock
//#define ACCESS_SLAVE_R1__R2_5  35//R1,2		TickTock/on/Off
//#define ACCESS_SLAVE_R1__R2_6  36//R1,2		TickTock/Strick*
//#define ACCESS_SLAVE_R1__R2_7  37//R1,2		TickTock/Strick/OnOff*




//**********************************************************************************

#endif
