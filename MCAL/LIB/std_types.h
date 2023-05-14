/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  std_types.h
 *       Module:  lib
 *
 *  Description:  standard data types definitions
 *
 *********************************************************************************************************************/
#ifndef STD_TYPES_H
#define STD_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short int u16;
typedef signed short int s16;

typedef unsigned long int u32;
typedef signed long int s32;

typedef unsigned long long u64;


typedef float f32;
typedef double f64;

typedef unsigned char Std_ReturnType;
typedef enum
{
	FALSE,
	TRUE
} boolean;

#define NULL (void *)0

typedef void (*pf)(void);

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif /* STD_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: std_types.h
 *********************************************************************************************************************/