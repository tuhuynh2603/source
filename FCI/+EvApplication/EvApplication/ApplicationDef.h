#pragma once

#define IN_START_VISION			0x01
#define IN_RESET_VISION 		0x02
#define IN_TRAY_IN_PLACE		0X04
#define IN_MODE_SELECTION_READY	0X08
#define IN_MODE_BIT1			0X10
#define IN_MODE_BIT2			0X20

#define OUT_BUSY				0X01//
#define OUT_RESULT1				0x02
#define OUT_VISION_AUTO			0x04
#define OUT_RESULT2				0x08
#define OUT_BARCODE_READ		0x10
#define OUT_BARCODE_STATUS		0x20
#define OUT_MODE_BIT1			0x40
#define OUT_MODE_BIT2			0x80

#define IN_MOTOR_CURTAIN_SENSOR 0//0x01
#define IN_MOTOR_EMERGENCY_STOP 4//0x08
#define OUT_MOTOR_CONTACTOR_CONTROL 8//0x80

//#define OUT_MOTOR_CURTAIN_SENSOR 0x01

#define CALIBRATE				 1
#define TEACH					 2
#define INSPECT					 3
#define COM_GRAB				 4
#define COM_INSPECT				 5
#define COM_GRABINSP			 6
#define CALIBRATE_LIGHT			 8
#define KILL_CMD_THREAD			 9
#define COM_ONLINE_SIMULATION	 10

#define UPDATE_WATCHDOG			 11
#define UPDATE_LOTCHANGEDACK	 12

#define NO_OF_DEFECT_ZONES		 3
#define INSPECT_ALL				 13

//defnitions for EventLog
#define EVENT_LOG				0
#define COMM_LOG				1
#define MOTION_LOG				2
#define LIGHT_LOG				3


#define WM_USER_SET_DATA				WM_USER+51
#define WM_USER_ON_SELECTION_CANCEL	WM_USER+52
#define WM_USER_ON_SELECTION_OK		WM_USER+53
#define WM_USER_ON_NEW_SELECTION		WM_USER+54

#define WM_OPTICS_SETPARM			WM_USER+55
#define WM_OPTICS_REFRESHGRAPH		WM_USER+56
#define WM_SETSMSTATUS				WM_USER+57
#define WM_AUDITTRAIL_UPDATE		WM_USER+80
#define WM_SHOW_MOTORINITIALIZING	WM_USER+81
#define WM_LOAD_RECIPE				WM_USER+59
#define WM_SEND_LIGHTVALUE			WM_USER+60
#define WM_SHOW_DEBUG				WM_USER+61
#define WM_HIDE_PANES				WM_USER+62
#define WM_SET_ONLINE_STATUS		WM_USER+63
#define WM_SET_CUR_POS_PARAM_DISP   WM_USER+64
#define WM_SET_FULLSCREEN		    WM_USER+65
#define WM_ADD_EVENT_LOG		    WM_USER+66
#define WM_SET_RECIPE_NAME		    WM_USER+67
#define WM_LOAD_SINGLE_FOV_RECIPE	WM_USER+68
#define WM_LOAD_RECIPE_SERVER		WM_USER+69
#define WM_RESIZE_DIE_MAPPING		WM_USER+70
