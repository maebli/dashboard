/*
 * ErrorCodes.h
 *
 * Created: 22.03.2014 15:00:12
 *  Author: michael
 */ 


#ifndef ERRORCODES_H_
#define ERRORCODES_H_

/*errors */
#define ERRROR_NONE (0)
#define ERROR_SC_DOWN (1)
#define ERROR_PRE_ENRE (2)
#define ERROR_BOTS (3)
#define ERROR_PRE_BOTS (4)
#define ERROR_HVDI (5)
#define ERROR_IMD (6)
#define ERROR_IMDF (7)
#define ERRROR_PBD (11)

#define ERROR_BMS (20)

#define ERROR_MC (30)

#define ERROR_MCM_A (40)

#define ERROR_MCM_B (50)

/* missing errors */
#define ERROR_MISSING_MCM_REAR (90)
#define ERROR_MISSING_MCM_FRONT (91)
#define ERROR_MISSING_MCM_LVB (92)
#define ERROR_MISSING_MCM_AB (93)
#define ERROR_MISSING_MC_RIGHT (94)
#define ERROR_MISSING_MC_LEFT (95)
#define ERROR_MISSING_SHUNT (96)


/* error Strings */
display_line_t display_line_error_none={'#','X','X','X',' ',' ',' ','N','O','N','E',' ',' ',' ',' ',' ',' ',' ',' ',' '};
display_line_t display_line_error_sc_down={'#','X','X','X',' ','S','C',' ','D','O','W','N',' ',' ',' ',' ',' ',' ',' '};
display_line_t display_line_error_unknown_code={'#','X','X','X',' ','U','N','K','N','O','W','N',' ','E','R','R','O','R',' '};
display_line_t display_line_error_pre_enre={'#','X','X','X',' ','P','R','E',' ','E','N','R','E',' ',' ',' ',' ',' ',' '};
display_line_t display_line_error_pre_bots={'#','X','X','X',' ','P','R','E',' ','B','O','T','S',' ',' ',' ',' ',' ',' '};
display_line_t display_line_error_bots={'#','X','X','X',' ','B','O','T','S',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
display_line_t display_line_error_hvdi={'#','X','X','X',' ','H','V','D','I',' ','I','N','T','E','R','U','P','T',' '};
display_line_t display_line_error_imd={'#','X','X','X',' ','I','M','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
display_line_t display_line_error_imdf={'#','X','X','X',' ','I','M','D','F',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
display_line_t display_line_error_bpd={'#','X','X','X',' ','B','R','A','K','E',' ','P','.','D','.',' ',' ',' ',' '};
display_line_t display_line_error_bad_request_id={'#','X','X','X',' ','B','A','D','R','E','Q','U','E','S','T',' ','I','D',' '};
display_line_t display_line_error_bms={'#','X','X','X',' ','B','M','S',' ','E','R','R','O','R',' ',' ',' ',' ',' '};
display_line_t display_line_error_mc={'#','X','X','X',' ','M','C',' ','E','R','R','O','R',' ',' ',' ',' ',' ',' '};
display_line_t display_line_error_mcm={'#','X','X','X',' ','M','C','M',' ','E','R','R','O','R',' ',' ',' ',' ',' '};

/* missing hardware errors */
display_line_t display_line_error_missing_mcm_rear={'#','X','X','X',' ','M','I','S','S','I','N','G',' ','M','C','M','R',' ',' '};
display_line_t display_line_error_missing_mcm_front={'#','X','X','X',' ','M','I','S','S','I','N','G',' ','M','C','M','F',' ',' '};
display_line_t display_line_error_missing_mcm_lvb={'#','X','X','X',' ','M','I','S','S','I','N','G',' ','M','C','M','L','V','B'};
display_line_t display_line_error_missing_mcm_ab={'#','X','X','X',' ','M','I','S','S','I','N','G',' ','M','C','M','A','B',' '};
display_line_t display_line_error_missing_mc_left={'#','X','X','X',' ','M','I','S','S','I','N','G',' ','M','C','-','L',' ',' '};
display_line_t display_line_error_missing_mc_right={'#','X','X','X',' ','M','I','S','S','I','N','G',' ','M','C','-','R',' ',' '};
display_line_t display_line_error_missing_shunt={'#','X','X','X',' ','M','I','S','S','I','N','G',' ','S','H','U','N','T',' '};



	
	

#endif /* ERRORCODES_H_ */
