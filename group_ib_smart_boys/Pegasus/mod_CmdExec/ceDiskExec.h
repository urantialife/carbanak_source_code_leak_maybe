/*
	ceDiskExec.h
*/
#pragma once

#include <Windows.h>

#include "..\inc\DataCallbackManager.h"
#include "ceGeneric.h"

typedef enum DISKEXEC_SPECIFIC_ERROR_CODES {
	//	ERR_NOVALUE = 0,
	ERR_DE_EMPTY_FILE = 1,
	ERR_DE_NO_EXTENSION_FOUND,
	ERR_DE_TMPFILE_NAME_GENERATE_FAIL,
	ERR_DE_CREATEFILE_FAILED,
	ERR_DE_WRITEFILE_FAILED,
	ERR_DE_FILE_REMOVED_AFTER_CREATION,
	ERR_DE_GETSIZE_FAILED,
	ERR_DE_SIZE_MISMATCH,
	ERR_DE_FILE_READ_FAILED,
	ERR_DE_FILE_MODIFIED_AFTER_WRITE

	//	ERR_EXEC_ERROR = 1000,	// staring range
	//	ERR_MAXVAL = MAXDWORD
};

typedef enum ENUM_PLACEFILE_EXT {
	FILE_EXE,
	FILE_EXTENS
};

BOOL cmdDiskExec(DISPATCHER_CALLBACK_PARAMS *dcp, ENUM_EXECUTE_METHOD ExecMethod);